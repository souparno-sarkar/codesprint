// move all zero to end

#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin >> nums[i];
    int idx = 0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]!=0)
            swap(nums[idx++] , nums[i]);
    }
    for(int i : nums)
        cout << i << " ";

}
int main()
{
    sol();
}