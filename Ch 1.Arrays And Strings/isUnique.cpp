#include <string>
#include <vector>
#include <iostream>

bool isUnique(const std::string &word)
{
  if (word.size() > 127)
      return 0;

  std::vector<bool> char_set(128); // 

  for(const char c: word)
  {
     if (char_set[static_cast<int>(c)])
          return false;
     else
          char_set[c] = true;
  }
  return true;
}


int main(std::vector<std::string> &args)
{
  std::vector<std::string> words = {"abcde", "hello", "apple", "kite", "padle"};
  for (auto word : words)
  {
       std::cout << word << std::string(": ") << isUnique(word) << std::endl;
  }
  return 0;
}
