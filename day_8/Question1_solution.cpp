#include<bits/stdc++.h>
using namespace std;

string d2b(int n)
{
  string s = "";
  if(n == 0)
  {
    s.push_back('0');
    return s;
  }
  while(n > 0)
  {
    s.push_back((n%2) + '0');  // imp line s.push_back(n%2) here the acsii value of 1 and 2 will be store 
                                //     not '1' or '0'
    n = n/2;
  }
  reverse(s.begin(), s.end());
  return s;
}

void sol()
{
  int n; cin >> n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)
  {
    cin >> nums[i];
    string s = d2b(nums[i]);
    int cnt = count(s.begin() , s.end() , '1');
    cnt%2 == 0 ? cout << "SAFE\n" : cout << "ANSWER\n";
  }
}
int main()
{
  sol();
}
