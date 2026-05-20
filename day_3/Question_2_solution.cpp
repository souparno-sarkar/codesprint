// patten print with alphbetical diognal

#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n; cin >> n;
    vector<vector<char>> nums(n,vector<char>(n,'*'));
    
    for(int i=0;i<n;i++)
    {
        char ch = 'A'+i;
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j == n-1)
            {
                nums[i][j] = ch;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << nums[i][j];
        cout << endl;
    }
}

int main()
{
    sol();
}
