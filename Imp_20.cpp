#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,n;
 cin>>a>>b>>n;
 int cnt =0;

 for(int i=0;;++i)
 {
    if(a<b)
    {a=a+b;
    cnt++;}
    else{
    b=b+a;
    cnt++;}
    if(a>n || b>n)
    {
    break;}
 }

 cout<<cnt<<endl;
}
int main(){
 int t;
 cin>>t;
 while(t--)
 solve();
return 0;
}