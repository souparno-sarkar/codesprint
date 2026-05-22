#include<bits/stdc++.h>
using namespace std;

void sol()
{
  int n; cin >> n;
  int x; cin >> x;
  vector<int> nums(n);
  for(int i=0;i<n;i++)
    cin >> nums[i];
  int sum = 0;
  int res = -1;
  for(int i=0;i<n;i++)
  {
    sum += nums[i];
    if(sum > x)
    {
      res = i;
      break;
    }
  }
  cout << res;
}
int main()
{
  sol();
}