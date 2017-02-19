// original problem found in hackerrank

#include <stack>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

bool is_balanced(string expression) {
    stack<char> s;
    for(char c:expression)
    {
        if     (c=='{') s.push('}');
        else if(c=='[') s.push(']');
        else if(c=='(') s.push(')');
        else
        {
            if (c != s.top() || s.empty())
                return false;
            s.pop();
        }
    }
    return s.empty();
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
