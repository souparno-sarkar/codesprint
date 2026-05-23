// Check digit , uppercase , lowercase

#include<bits/stdc++.h>
using namespace std;

void sol()
{
  string s;
  getline(cin , s);
  bool digit = false;
  bool l_case = false;
  bool u_case = false;
  for(auto& i : s)
  {
    if(isdigit(i))
      digit = true;
    if(islower(i))
      l_case = true;
    if(isupper(i))
      u_case = true;
  }
  if(digit && l_case && u_case)
    cout << "STRONG";
  else
    cout << "WEAK";
}
int main()
{
  sol();
}