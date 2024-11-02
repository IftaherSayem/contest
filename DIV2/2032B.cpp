/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el endl
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
    while(n--)
    {
        int a,b,c;
        cin >> a >> b;
        if(a==1)
        {
            cout << 1 << el << 1 << el;
        }
        else if(a!=b && b%2==0)
        {
            cout << 3 << el << 1 << " " << b << " " << b+1 << el;
        }
        else if(a!=b && b%2==1)
        {
           if(b-1>1 && b+1<a)
           {
              cout << 3 << el << 1 << " " << b-1 << " " << b+2 << el;
           }
           else cout << -1 << el;
        }
        else
        {
           cout << -1 << el;
        }
    }
}

