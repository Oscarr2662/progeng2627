#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 


int search_vector(std::string s, const std::vector<std::string>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == s) {
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1,
                  const std::vector<std::string>& vin2,
                  std::vector<std::string>& vout) {
    vout.clear();

    for (int i = 0; i < vin1.size(); i++) {
        if (search_vector(vin1[i], vout) == -1) {
            vout.push_back(vin1[i]);
        }
    }

    for (int i = 0; i < vin2.size(); i++) {
        if (search_vector(vin2[i], vout) == -1) {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1,
                         const std::vector<std::string>& vin2,
                         std::vector<std::string>& vout) {
    vout.clear();

    for (int i = 0; i < vin1.size(); i++) {
        if (search_vector(vin1[i], vin2) != -1 &&
            search_vector(vin1[i], vout) == -1) {
            vout.push_back(vin1[i]);
        }
    }
}

int main() {
    std::string filename1, filename2, fruit;

    std::cout << "Enter the two input filenames: ";
    std::cin >> filename1 >> filename2;

    std::ifstream infile1(filename1);
    std::ifstream infile2(filename2);

    if (!infile1.is_open() || !infile2.is_open()) {
        std::cout << "Error opening input files" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> v1, v2, united, common;

    while (infile1 >> fruit) {
        v1.push_back(fruit);
    }

    while (infile2 >> fruit) {
        v2.push_back(fruit);
    }

    infile1.close();
    infile2.close();

    union_vector(v1, v2, united);
    intersection_vector(v1, v2, common);

    std::ofstream unionfile;
    unionfile.open("union.txt");
    std::ofstream intersectionfile;
    intersectionfile.open("intersection.txt");

    if (!unionfile.is_open() || !intersectionfile.is_open()) {
        std::cout << "Error opening output files" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < united.size(); i++) {
        unionfile << united[i] << std::endl;
    }

    for (int i = 0; i < common.size(); i++) {
        intersectionfile << common[i] << std::endl;
    }

    unionfile.close();
    intersectionfile.close();

    std::cout << "Created union.txt and intersection.txt" << std::endl;
}