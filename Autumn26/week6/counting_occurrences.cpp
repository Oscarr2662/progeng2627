#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

bool read_words(const std::string& filename,
                std::vector<std::string>& words) {
    std::ifstream infile(filename);

    if (!infile.is_open()) {
        return false;
    }

    words.clear();
    std::string word;

    while (infile >> word) {
        words.push_back(word);
    }

    infile.close();
    return true;
}

int count_occurrences(const std::string& word,
                      const std::vector<std::string>& text) {
    int count = 0;

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == word) {
            count++;
        }
    }

    return count;
}

bool write_counts(const std::string& filename,
                  const std::vector<std::string>& text,
                  const std::vector<std::string>& words) {
    std::ofstream outfile(filename);

    if (!outfile.is_open()) {
        return false;
    }

    for (int i = 0; i < words.size(); i++) {
        outfile << words[i] << ": "
                << count_occurrences(words[i], text)
                << std::endl;
    }

    outfile.close();
    return true;
}

int main() {
    std::string textfile, wordsfile, outputfile;
    std::vector<std::string> text, words;

    std::cout << "Enter the text filename and words filename: ";
    std::cin >> textfile >> wordsfile;

    if (!read_words(textfile, text) ||
        !read_words(wordsfile, words)) {
        std::cout << "Error opening an input file" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Enter the output filename: ";
    std::cin >> outputfile;

    if (!write_counts(outputfile, text, words)) {
        std::cout << "Error opening the output file" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Results saved to " << outputfile << std::endl;
}