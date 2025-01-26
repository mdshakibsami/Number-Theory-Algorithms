#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
void KPrimeFact(int n, int k)
{
    int temp = n;
    int count = 0;
    vector<int> v;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i==0)
        {
            n /= i;
            count++;
            v.push_back(i);
        }
    }
    if (n > 1)
        v.push_back(n);
    
    if(v.size()>=k)
    {
        int mul = 1;
        for(int i=0;i<k-1;i++)
        {
            mul*=v[i];
            cout<<v[i]<<" ";
        }
        cout<<temp/mul<<endl;
    }
    else cout<<-1<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    KPrimeFact(n, k);
}