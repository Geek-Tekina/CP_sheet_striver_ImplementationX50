#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int j = 0;
    if(s.length()==1)
    {
        int x = s[0]-'0';
        if(x==9)
        cout<<9;
        else{
            if(9-x<x)
             cout<<9-x;
             else
             cout<<x;
        }
        return 0;

    }
    while (s[j] == '9')
    {
        ++j;
    }
    if (j == s.length())
    {
        cout << 9;
        j = j - 1;
        while (j)
        {
            cout << 0;
            --j;
        }
        return 0;
    }
    else if (j == s.length() - 1)
    {
        cout << 9;
        for (int i = 0; i < s.length() - 2; ++i)
            cout << 0;
        int y = s[s.length() - 1] - '0'; // conversion from char to int
        if (9 - y < y)
        {
            char x = (9 - y) + '0'; // int to char
            s[s.length() - 1] = x;
        }
        cout << s[s.length() - 1];
        return 0;
    }
    else
    {
        int x = 0;
        while (x < j)
        {
            cout << s[x];
            ++x;
        }
    }
    for (int i = j; i < s.length(); ++i)
    {
        int y = s[i] - '0'; // conversion from char to int
        if (9 - y < y)
        {
            char x = (9 - y) + '0'; // int to char
            s[i] = x;
        }
        cout << s[i];
    }
    return 0;
}