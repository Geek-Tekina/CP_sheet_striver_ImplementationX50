#include<bits/stdc++.h>
using namespace std;
bool cnt = 0;
void snake(int m)
{
    for(int i=1;i<=m;++i)
    cout<<"#";
}

void dot(int m)
{
      cnt = cnt ^ 1 ;
    for(int i=1;i<=m;++i)
    {
      if(cnt)
      {
          if(i==m)
          cout<<"#";
          else
          cout<<".";
      }
      else
      {
          if(i==1)
          cout<<"#";
          else
          cout<<".";
      }
    }
}
int main(){
 int n,m;
 cin>>n>>m;
 for(int i = 1 ; i<=n;++i)
 {
     if(i%2==1)
     {snake(m);
     cout<<endl;}
     else{
     dot(m);
     cout<<endl;}
 }
return 0;
}