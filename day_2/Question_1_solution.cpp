// input greater then average
#include<bits/stdc++.h>
using namespace std;

void sol()
{
  int n; cin >> n;
  int sum = 0;
  vector<double> nums(n);
  for(int i=0;i<n;i++)
  {
    cin >> nums[i];
    sum += nums[i];  
  }
  double avg = (double)sum/n;
  int cnt = 0;
  for(int i=0;i<n;i++)
  {
    if(nums[i] > avg)
      cnt++;
  }
  cout << cnt;
}
int main()
{
  sol();
}