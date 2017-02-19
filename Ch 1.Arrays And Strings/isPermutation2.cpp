#include <string>
#include <vector>
#include <iostream>
#include <algorithm>



bool isPermutation(std::string string1, std::string string2)
{
    sort(string1.begin(), string1.end()); // notice i just called sort().. not string1 = sort(…) !!
    sort(string2.begin(), string2.end());

    return (string1 == string2); // really easy once you understand the problem!!
}

int main()
{
    std::vector<std::vector<std::string>> pairs =
    {
         {"apple", "papel"},
         {"carrot","tarroc"},
         {"hello", "llloh"}
    };
    for (auto pair : pairs)
    {
         std::string word1 = pair[0];
         std::string word2 = pair[1];
         bool anagram = isPermutation(word1, word2);
         std::cout << word1 << ", " << word2 << ": " << anagram << std::endl;
    }

    return 0;
}
