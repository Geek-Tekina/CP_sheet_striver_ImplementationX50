#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int number ;
    cin>>number;
    int num = number %10;
    int cnt =0;
    while(number)
    {
        number = number/10;
        cnt++;
    }
    int ans =0;
    while(num - 1)
    {
        ans+=10;
        num--;
    }
    switch (cnt)
    {
       case 1 : ans+=1;
       break;
       case 2 : ans+=3;
       break;
       case 3 : ans+=6;
       break;
       case 4 : ans+=10;
       break;
    }
    cout<<ans<<endl;
}
int main(){
 int t ;
 cin>>t;
 while(t--)
 solve();
return 0;
}