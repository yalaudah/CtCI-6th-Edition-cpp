// this is an O(n) solution to the problem 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void peakValley(vector<int> &vec)
{
  // check for null input
  bool peak = 1; // for vec[i-1]
  for(int i=1; i<vec.size(); i++)
  {
    if(peak && vec[i]>vec[i-1])
      {
        int temp = vec[i];
        vec[i] = vec[i-1];
        vec[i-1] = temp;
      }
    else if (!peak && vec[i]<vec[i-1])
    {
        int temp = vec[i];
        vec[i] = vec[i-1];
        vec[i-1] = temp;
    }
    peak = !peak;
  }
}



int main() {
  vector<int> vec = {9,1,0,4,8,7}; // test vector
  peakValley(vec);

    for (int elem=0; elem<vec.size(); elem++)
         cout << vec[elem] << " ";
    return 0;
}
