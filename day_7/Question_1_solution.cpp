// check valid anagram

#include<bits/stdc++.h>
using namespace std;

void sol()
{
  string s1 , s2;
  getline(cin , s1);
  getline(cin , s2);

  vector<int> freq(26,0);
  for(auto i : s1)
    freq[i-'a']++;
  for(auto i : s2)
    freq[i-'a']--;
  for(int i : freq)
  {
    if(i != 0)
    {
      cout << "NO";
      return;
    }
  }
  cout << "YES";
}
int main()
{
  sol();
}