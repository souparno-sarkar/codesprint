// second largest no.

#include<bits/stdc++.h>
using namespace std;

void sol()
{
  int n; cin >> n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)
    cin >> nums[i];
  int f_great = INT_MIN;
  int sec_great = INT_MIN;
  for(int i=0;i<n;i++)
  {
      if(nums[i] > f_great)
      {
        sec_great = f_great;
        f_great = nums[i];
      }
      else if(nums[i] > sec_great && nums[i] != f_great)
      {
        sec_great = nums[i];
      }
  }
  cout << sec_great;
}
int main()
{
  sol();
}