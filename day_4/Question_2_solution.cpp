// pattern

#include<bits/stdc++.h>
using namespace std;

void sol()
{
  int n;
  cin >> n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
      cout << j;
    int num = (2*n)-(2*i);
    while(num--)
      cout << "@";
    for(int j=i;j>=1;j--)
      cout << j;
    cout << endl;
  }
}

int main()
{
  sol();
}