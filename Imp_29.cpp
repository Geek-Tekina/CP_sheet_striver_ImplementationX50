#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;
    cin>>n;
    vector<int>v(2*n);
    for(int i=0;i<2*n;++i)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[n]-v[n-1];
    cout<<endl;
}
int main(){
 int t ;
 cin>>t;
 while(t--)
 {
     solve();
 }
return 0;
}