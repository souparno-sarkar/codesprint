#include<bits/stdc++.h>
using namespace std;

void sol()
{
  int n; cin >> n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)
    cin >> nums[i];

  int res = 0;
  for(int i=0;i<n;i++)
  {
    res = res ^ nums[i];
  }

  res == 0 ? cout << "BALANCED" : cout << "UNBALANCED";
}
int main()
{
  sol();
}