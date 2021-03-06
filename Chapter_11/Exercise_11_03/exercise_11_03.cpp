/**
 * @file
 *      exercise_11_03.cpp
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include <map>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main() {
    map<string, size_t> word_count; // Empty map from string to size_t.
    string word;
    
    // Get input words from the user of the program.
    while (cin >> word) {
        ++word_count[word];    // Fetch and increment the counter for word.
    }
    
    // Print the result of the word count.
    for (const auto &w : word_count) {  // For each element in word count.
        cout << w.first << " occurs " << w.second 
                << ((w.second > 1) ? " times" : " time") << endl;
    }
    return 0;
}
