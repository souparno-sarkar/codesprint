// their exist dublicate

#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin >> nums[i];
    unordered_set<int> st;
    for(int i : nums)
    {
        if(st.count(i))
        {
            cout << "YES";
            return;
        }
        st.insert(i);
    }
    cout << "NO";
}
int main()
{
    sol();
}