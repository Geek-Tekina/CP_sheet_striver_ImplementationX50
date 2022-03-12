// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int n , index ;
// //  cin>>n>>index;
//  if(index-1 % n >0)
//  cout<<"NO";
//  else{
//  int req = n-1;
//  int arr[req];
//  for(int i =0;i<req;++i)
//  cin>>arr[i];
//  bool flag = false;
//  for(int i = 0 ; i<req;i+=arr[i] )
//  {
//      if(i+1==index)
//      flag = 1;
//  }
//  if(flag )
//  cout<<"YES";
//  else cout<<"NO";}

// return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int c[n];
    int p = 0;

    for(int i = 0; i < n; i++) cin >> c[i];

    while(p < t - 1) p += c[p];

    if(p == t - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}