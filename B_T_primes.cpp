#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;

// Sieve Algorithms
const int N = 1e6;
bool isPrime[N + 1];
void Sieve() 
{
    for (int i = 2; i <= N; i++)
        isPrime[i] = true;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}



signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    Sieve();
    int tc;cin>>tc;
    while(tc--)
    {
        int n;  cin>>n;
        int x = sqrt(n);
        if(x*x==n && isPrime[x]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}