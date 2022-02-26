#include<bits/stdc++.h>
using namespace std;
int main(){
 int d,t;
 cin>>d>>t;
 int cnt = 0;
 for(int i =0;;++i)
 {
     d=d*3;
     t=t*2;
     if(d<=t)
     cnt++;
     else if (d>t)
     break;
 }
 cout<<++cnt;
return 0;
}