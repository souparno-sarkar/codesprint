// aaabbbbcc  --->> a3b4c2

#include<bits/stdc++.h>
using namespace std;

void sol()
{
  string s;
  getline(cin , s);

  string res = "";
  vector<int> freq(26 , 0);
  for(auto i : s)
    freq[i-'a']++;

  for(int i=0;i<26;i++)
  {
    if(freq[i] != 0)
    {
      char ch = (char)(i+'a');
      res.push_back(ch);
      string num = to_string(freq[i]);   // imp line ---->> not like  -->   char num = (char)freq[i];
      res += num;
    }
  }
  cout << res;
}
int main()
{
  sol();
}
