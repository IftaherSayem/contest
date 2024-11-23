/*
========================================
+          IFTAHER HOSSEN SAYEM        +
+            IIUC,Dept. of CSE         +
========================================
*/

#include <bits/stdc++.h>
using namespace std;
#define FAST_IN_OUT ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define loop(a,k) for (int i=a;i<k;i++)
#define full(ar) (ar.begin(),ar.end())
#define yes cout << "YES" << el;
#define no cout << "NO" << el;
#define pb push_back
#define ll long long
#define el "\n"
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
    FAST_IN_OUT
    ll n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if(s.size()==1)
        {
            cout << -1 << el;
            continue;
        }
        string st1="";
        bool chk1=false;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                chk1=true;
                st1=s.substr(i,2);
                break;
            }
        }
        if(chk1)
        {
            cout << st1 << el;
            continue;
        }
        string st2="";
        bool chk2=false;
        for (int i=0;i<s.size()-2;i++)
        {
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2])
            {
                chk2=true;
                st2=s.substr(i,3);
                break;
            }
        }
        if(chk2) cout << st2 << el;
        else cout << -1 << el;
    }
}
