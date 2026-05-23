// first diognal =>   i==j;
// second diognal =>  i+j == n-1;

#include<bits/stdc++.h>
using namespace std;

void sol()
{
  int n; cin >> n;
  vector<vector<int>> nums(n , vector<int>(n));
  int sum1 = 0;
  int sum2 = 0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin >> nums[i][j];
      if(i == j)
        sum1 += nums[i][j];
      if(i+j == n-1)
        sum2 += nums[i][j];
    }
  }
  sum1 == sum2 ? cout << "YES" : cout << "NO";
}

int main()
{
  sol();
}