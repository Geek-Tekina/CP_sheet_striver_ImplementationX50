#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s ;
    cin>>s;
    int n = s.length();
    int cnt=0;
    for(auto it : s)
    {
        if(it!='0')cnt++;
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;++i)
    {
       if(s[i]=='0')
       continue;
       {
           int x = i+1;
           int m = n - x;
           cout<<s[i];
           while(m--)
           cout<<0;
       }
       cout<<" ";
    }
    cout<<endl;
}
int main(){
 int tt;
 cin>>tt;
 while(tt--)
 {
     solve();
 }
return 0;
}