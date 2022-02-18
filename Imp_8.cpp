// Tetrahedron. Tetrahedron has 4 triangular faces.
// Cube. Cube has 6 square faces.
// Octahedron. Octahedron has 8 triangular faces.
// Dodecahedron. Dodecahedron has 12 pentagonal faces.
// Icosahedron. Icosahedron has 20 triangular faces.
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int cnt = 0;
 while(n--)
 {
     string s ;
     cin>>s;
     if(s[0]=='T')
     cnt+=4;
     else if(s[0]=='C')
     cnt+=6;
     else if(s[0]=='O')
     cnt+=8;
     else if(s[0]=='I')
     cnt+=20;
     else if(s[0]=='D')
     cnt+=12;

 }
 cout<<cnt;
return 0;
}