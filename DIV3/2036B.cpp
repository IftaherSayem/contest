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
        int a,b;
        cin >> a >> b;
        ll c1=0,c2=0;
        ll csum1=0,csum2=0;
        bool chk=false;
        map<ll,ll>mp;
        for (int i=0;i<b;i++)
        {
           ll c,d;
           cin >> c >> d;
           mp[c]+=d;
        }
        vector <ll> ar;
        for (auto it:mp)
        {
           ar.push_back(it.second);
        }
        sort(ar.rbegin(),ar.rend());
        ll maxi=0;
        int mini=min(a,(int)ar.size());
        for (int i=0;i<mini;i++)
        {
           maxi+=ar[i];
        }
        cout << maxi << el;
    }
}

