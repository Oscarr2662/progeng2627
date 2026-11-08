/*
Ask for input filenames
Read the advertisement
Read the dictionary
Ask for the output filename
Translate and write the advertisement
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

bool read_text(const std::string& filename,
               std::vector<std::string>& text) {
    std::ifstream infile;
    infile.open(filename);

    if (!infile.is_open()) {
        return false;
    }

    text.clear();
    std::string word;

    while (infile >> word) {
        text.push_back(word);
    }

    infile.close();
    return true;
}

bool read_dictionary(const std::string& filename,
                     std::vector<std::string>& original,
                     std::vector<std::string>& replacement) {
    std::ifstream infile(filename);

    if (!infile.is_open()) {
        return false;
    }

    original.clear();
    replacement.clear();
    std::string word, meaning;

    while (infile >> word >> meaning) {
        original.push_back(word);
        replacement.push_back(meaning);
    }
//This loop reads the dictionary two words at a time:
// an original word and its meaning.
    infile.close();
    return true;
}

std::string translate_word(
    const std::string& word,
    const std::vector<std::string>& original,
    const std::vector<std::string>& replacement) {

    for (int i = 0; i < original.size(); i++) {
        if (word == original[i]) {
            return replacement[i];
        }
    }

    return word;
}

bool write_translation(
    const std::string& filename,
    const std::vector<std::string>& text,
    const std::vector<std::string>& original,
    const std::vector<std::string>& replacement) {

    std::ofstream outfile(filename);

    if (!outfile.is_open()) {
        return false;
    }

    for (int i = 0; i < text.size(); i++) {
        if (i > 0) {
            outfile << " ";
        }

        outfile << translate_word(text[i], original, replacement);
    }

    outfile << std::endl;
    outfile.close();
    return true;
}

int main() {
    std::string textfile, dictionaryfile, outputfile;
    std::vector<std::string> text, original, replacement;

    std::cout << "Enter the advertisement and dictionary filenames: ";
    std::cin >> textfile >> dictionaryfile;

    if (!read_text(textfile, text) ||
        !read_dictionary(dictionaryfile, original, replacement)) {
        std::cout << "Error opening an input file" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Enter the output filename: ";
    std::cin >> outputfile;

    if (!write_translation(outputfile, text, original, replacement)) {
        std::cout << "Error opening the output file" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Translation saved" << std::endl;
}