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
        ll a,b,c;
        cin >> a ;
        vector <int> ar(2*a);
        int co1=0;
        int co2=0;
        for (int i=0; i<2*a; i++)
        {
            cin >> ar[i];
            if(ar[i]==0)
            {
                co1++;
            }
            else
            {
                co2++;
            }
        }
        if(co1==0)
        {
            cout << "0 0" << el;
        }
        else if(co1>=co2)
        {

            cout << co1%2 << " " << co2 << el;
        }

        else
        {
            cout << co2%2 << " " << co1 << el;
        }
    }
}
