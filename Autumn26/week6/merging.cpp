#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1,
                       const std::vector<int>& v2,
                       std::vector<int>& merged) {
    merged.clear();
    int i = 0, j = 0;

    // Compare the next unused elements.
    while (i < v1.size() && j < v2.size()) {
        if (v1[i] <= v2[j]) {
            merged.push_back(v1[i]);
            i++;
        } else {
            merged.push_back(v2[j]);
            j++;
        }
    }

    // Add any remaining elements from v1.
    while (i < v1.size()) {
        merged.push_back(v1[i]);
        i++;
    }

    // Add any remaining elements from v2.
    while (j < v2.size()) {
        merged.push_back(v2[j]);
        j++;
    }
    //Both leftover loops are included
    // because a different input could exhaust v2 first.
}

int main() {
    std::vector<int> v1, v2, out, expected_output;

    // Test 1: overlapping values and different lengths.
    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);
    std::cout << "Test 1: " << (out == expected_output) << std::endl;

    // Test 2: first vector empty.
    v1 = {};
    v2 = {2, 4};
    expected_output = {2, 4};

    merge_vectors_int(v1, v2, out);
    std::cout << "Test 2: " << (out == expected_output) << std::endl;

    // Test 3: second vector empty.
    v1 = {1, 5};
    v2 = {};
    expected_output = {1, 5};

    merge_vectors_int(v1, v2, out);
    std::cout << "Test 3: " << (out == expected_output) << std::endl;

    // Test 4: both vectors empty.
    v1 = {};
    v2 = {};
    expected_output = {};

    merge_vectors_int(v1, v2, out);
    std::cout << "Test 4: " << (out == expected_output) << std::endl;

    // Test 5: negative numbers and duplicates.
    v1 = {-3, 1, 1};
    v2 = {-2, 1, 4};
    expected_output = {-3, -2, 1, 1, 1, 4};

    merge_vectors_int(v1, v2, out);
    std::cout << "Test 5: " << (out == expected_output) << std::endl;
}