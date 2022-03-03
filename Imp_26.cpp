#include<bits/stdc++.h>
using namespace std;
int main(){
 int n ;
 cin>>n;
 string s ;
 cin>>s;
 int cnt=2;
 for(int i=0;i<n;)
 {
     cout<<s[i];
     i+=cnt;
     ++cnt;
 }
return 0;
}