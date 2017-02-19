// this is a solution to a HR problem under the same name

int max2DArray(vector<vector<int>> &arr)
{   
    int max = -63;
    for(int i =1; i<arr.size()-1; i++)
    {
        for(int j=1; j<arr.size()-1; j++)
        {
            int sum;
            sum = arr[i][j] + arr[i-1][j-1] + arr[i-1][j]  + arr[i-1][j+1] +
                 arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];   

            if(sum>max)
                max = sum;
        }
    }
    return max;
}



int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    //vector<vector<int>> kernel(3,vector<int>(3));
    //kernel = {{1,1,1},
    //         {0,1,0},
    //         {1,1,1}};

    cout << max2DArray(arr) << endl;
    return 0;
}
