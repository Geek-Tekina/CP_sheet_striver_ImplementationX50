#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    
    for(int i = 0 ; i<r ; ++i )
    {
        for(int j = 0 ;j<c;++j)
        {
            cin>>arr[i][j];
        }
    }
    int cnt =0;
    for(int i =0 ;i<r;++i)
    {
        for(int j=0;j<c;++j)
        {
            if(i==0 && j==c-1 && arr[i][j]=='R')
            cnt++;
            else if(i==r-1)
            {
                if(arr[i][j]=='D')cnt++;
            }
            else if (j==c-1)
            {
                if(arr[i][j]=='R')cnt++;
            }
             
        }
    }
    cout<<cnt<<endl;
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