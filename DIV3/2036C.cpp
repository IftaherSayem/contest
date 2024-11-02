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
        string s;
        cin >> s;
        cin >> b;
        unordered_set<int> st;
        if(s.size()>=4)
        {
            for (int i=0; i<=s.size()-4; i++)
            {
                if(s.substr(i,4)=="1100")
                {
                    st.insert(i);
                }
            }
        }
        for (int i=0; i<b; i++)
        {
            int c,d;
            cin >> c >> d;
            char cn=d+'0';
            s[c-1]=cn;
            string m="1100";
            int maxi=max(0,c-4);
            int mini=min((int)s.size()-4,c-1);
            for (int j=maxi; j<=mini; j++)
            {
                if(st.count(j)>0)
                {
                    st.erase(j);
                }
            }
            for (int j=maxi; j<=mini; j++)
            {
                if(j+4 <= s.size() && s.substr(j,4)=="1100")
                {
                    st.insert(j);
                }
            }
            if(!st.empty()) cout << "YES" << el;
            else cout << "NO" << el;
        }
    }
}

