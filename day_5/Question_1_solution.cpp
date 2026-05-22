#include<bits/stdc++.h>
using namespace std;

void sol()
{
  int n; cin >> n;
  vector<vector<int>> nums(n , vector<int>(n));
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
      cin >> nums[i][j];
  }
  vector<vector<char>> res(n , vector<char>(n));
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        if(nums[i][j] == 1)
            res[i][j] = 'O';
        else if((i+1 < n && nums[i+1][j] == 1) || (i-1 >= 0 && nums[i-1][j] == 1)|| (j+1 < n && nums[i][j+1] == 1) || (j-1 >= 0 && nums[i][j-1] == 1))
        {
            res[i][j] = 'X';
        }
        else
            res[i][j] = 'S';
    }
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  sol();
}