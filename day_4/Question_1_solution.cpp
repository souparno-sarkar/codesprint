// count vowel , consonant , word;

#include<bits/stdc++.h>
using namespace std;

int cnt_v = 0;
int cnt_c = 0;
void is_count(string s)
{
  for(char i : s)
  {
    if(isalpha(i))
    {
      if(i == 'A' || i == 'a' || i == 'E' || i == 'e' || i == 'I' || i == 'i' 
         || i == 'O' || i == 'o' || i == 'U' || i == 'u')
        cnt_v++;
      else
        cnt_c++;
    }
  }
}
void sol()
{
  string s;
  getline(cin , s);
  stringstream temp(s);
  string token;
  int cnt = 0;
  while(temp >> token)
  {
      cnt++;
      is_count(token);  
  }
  cout << "Total Vowels: " << cnt_v << endl;
  cout << "Total Consonants: " << cnt_c << endl;
  cout << "Total Words: " << cnt;
}
int main()
{
  sol();
}