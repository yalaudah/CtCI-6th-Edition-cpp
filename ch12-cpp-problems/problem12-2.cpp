// Problem 12.2 
// Implement a function that reverses a null-terminated string (12.2)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

void reverse(char *str)
{
    // first find the end of the str
    char *end = str;
    char temp;
    while(end!=nullptr)
        end++;
    end--; // end now points to the end of the string

    while(str<end)
    {
        temp = *str;
        // swap the values at both sides
        *str = *end;
        *end = temp;
        // take a step closer to the middle from both sides
        str++;
        end--;
}

}


