#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {

    int n;
    cin >> n;
    map<string, int> phonebook;
    for(int i =0; i<n; i++)
    {  
        string name;
        int number;
        cin >> name >> number;      
        phonebook[name] = number;
    }

    // read first entry in the buffer
    string name;
    cin >> name;


    while (cin) // while the buffer is not empty! (GENIUS :D)
    {
        if(phonebook[name]) // note this !!
        {
            cout << name << "=" << phonebook[name] << endl;    
        }
        else
        {
            cout << "Not found" << endl;
        }
        // read next name:
        //string name;
        cin >> name;
    }
    return 0;
}

