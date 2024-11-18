/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el "\n"
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
const int m=1e9 + 7;
void test()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
bool chk(int a)
{
    if(a==2 || a==3 || a==5) return true;
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

ll power(ll x, ll y)
{
    ll val = 1;

    while (y > 0)
    {
        if (y % 2 != 0)
            val = val * x;
        y = y / 2;
        x = x * x;
    }
    return val;
}

int main()
{
    //test();
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    ll n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if((s[0]<s[2] && s[1]=='<') || (s[0]>s[2] && s[1]=='>') || (s[0]==s[2] && s[1]=='='))
        {
            cout << s << el;
        }
        else
        {
            if(s[0]==s[2])
            {
                cout << s[0] << "=" << s[2] << el;
            }
            else if(s[0]<s[2])
            {
                cout << s[0] << "<" << s[2] << el;
            }
            else
            {
                cout << s[0] << ">" << s[2] << el;
            }
        }
    }
}
// 1 3 5 7 2 4 6
//swap(1,3)=3,1,5,7,2,4,6
//swap()
