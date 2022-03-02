#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    int i =0;
    int j =s.length()-1;
    while(s[i]=='0')
    i++;
    while(s[j]=='0')
    j--;
    // cout<<i<<j;
    for(int k = i+1;k<j;++k)
    {
        if(s[k]=='0')
        cnt++;
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}