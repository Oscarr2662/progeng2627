#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

bool match_and_mark(
    const std::vector<std::string>& grid,
    const std::string& word,
    int row, int col,
    int row_step, int col_step,
    std::vector<std::string>& solution
) {
    for (int i = 0; i < word.size(); i++)
    {
        int current_row = row + i * row_step;
        int current_col = col + i * col_step;

        if(current_row >= grid.size() || current_col >= grid[current_row].size() || grid[current_row][current_col] != word[i]){
            return false;
    }
}
    for (int i = 0; i < word.size(); i++)
    {
        solution[row + i * row_step][col + i * col_step] = word[i];
    }
    return true;
}


bool find_and_mark_word(
    const std::vector<std::string>& grid,
    const std::string& word,
    std::vector<std::string>& solution
) {
    for (int row = 0; row < grid.size(); row++)
    {
        for (int col = 0; col < grid[row].size(); col++)
        {
            if (match_and_mark(grid, word, row, col, 0, 1, solution) || 
                match_and_mark(grid, word, row, col, 1, 0, solution)){
                    return true;
            }
            
        }
        
    }
    return false;
}

// 0, 1 means move right
// 1, 0 means move down


void find_words(
    const std::vector<std::string>& grid,
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
) {
    solution.clear();
    not_found.clear();
    
    for (int row = 0; row < grid.size(); row++)
    {
        solution.push_back(std::string(grid[row].size(), '#'));
    }
    
    for (int i = 0; i < words.size(); i++)
    {
        if (!find_and_mark_word(grid, words[i], solution))
        {
            not_found.push_back(words[i]);
        }
    }
}    
 

bool test_case(
    const std::string&name,
    const std::vector<std::string>& grid,
    const std::vector<std::string>& words,
    const std::vector<std::string>& expected_solution,
    const std::vector<std::string>& expected_not_found
) {
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found);

    bool passed = (solution == expected_solution) &&
                  (not_found == expected_not_found);

    std::cout << name << ": ";
    if (passed)
    {
        std::cout << "test passed\n";
    } else{
        std::cout << "test failed\n";
    }

    std::cout << "solution:\n";
    for (int i = 0; i < solution.size(); i++)
    {
        std::cout << solution[i] << '\n';
    }
    
    std::cout << "not found:\n";
    for (int i = 0; i < not_found.size(); i++)
    {
        std::cout << not_found[i] << '\n';
    }
    
    return passed;
}


int main() {
    bool first_passed = test_case(
        "Course example 1",
        {"xappleg", "dzeazkg", "zwazzbx", "dxnqzoy", "qyueytp", "pythtyg"},
        {"peanut", "bot", "mango", "apple", "cinnamon"},
        {"#apple#", "##e####", "##a##b#", "##n##o#", "##u##t#", "##t####"},
        {"mango", "cinnamon"}
    );

    bool second_passed = test_case(
        "Course example 2",
        {"zapplexyzwxbotyz"},
        {"bot", "apple"},
        {"#apple#####bot##"},
        {}
    );

    bool third_passed = test_case(
    "Dog and apple",
    {"dognbx", "applen"},
    {"dog", "apple"},
    {"dog###", "apple#"},
    {}
);

    bool overlap_passed = test_case(
        "Crossing words",
        {"xxx", "cat", "xrx"},
        {"cat", "xar", "tac", "longword"},
        {"#x#", "cat", "#r#"},
        {"tac", "longword"}
    );

    if (first_passed && second_passed && third_passed && overlap_passed) {
        return EXIT_SUCCESS;
    }

    return EXIT_FAILURE;
}