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
        int a;
        cin >> a;
        vector<int>ar(a);
        ///map<int,int>mp;
        for (int i=0;i<a;i++)
        {
            cin >> ar[i];
        }
        ///sort(ar.begin(),ar.end());
        int diff=a-2;
        int row=0;
        int col=0;
        map<int,bool>mp;
        for(int i=0;i<a;i++)
        {
            if(ar[i]>0 && diff%ar[i]==0)
            {
                int fin=diff/ar[i];
                if(mp[fin])
                {
                    row=ar[i];
                    col=fin;
                    break;
                }
            }
            mp[ar[i]]=true;///we doing this  so that any value can't check twice
        }
        cout << row << " " << col << el;
    }
}
//1 3 5 7
//2 4 6 8
