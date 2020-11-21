
#include <bits/stdc++.h>
using namespace std;

int f[100000];

int main()
{
    int t; cin>>t; while(t--)
    {
       int n, p, q, r;
        cin >> n >> p >> q >> r;
        memset(f, 0, sizeof f);
        for(int i = p; i <= n; i += p)
            f[i] ++;
        for(int i = q; i <= n; i += q)
            f[i] ++;
        for(int i = r; i <= n; i += r)
            f[i] ++;
        int cnt = 0;
        for(int i = 1; i <= n; i ++)
            if(f[i] == 1)
                cnt ++;
        cout << cnt << '\n';
    }
}
