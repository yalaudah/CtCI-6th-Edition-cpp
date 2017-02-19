#include<algorithm>

bool isPermutation(std::string &str1, std::string &str2)
{
	if(str1.size() != str2.size())
		return false;
	std::sort(str1.begin(), str1.end());
	std::sort(str2.begin(), str2.end());
	return (str1 == str2);
}
