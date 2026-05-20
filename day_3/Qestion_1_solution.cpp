// first repetation

#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin >> nums[i];
    for(int i=1;i<n;i++)
    {
        if(nums[i-1] == nums[i])
        {
            cout << "INVALID" << " " << i;
            return; 
        }
    }
    cout << "VALID";
}

int main()
{
    sol();
}