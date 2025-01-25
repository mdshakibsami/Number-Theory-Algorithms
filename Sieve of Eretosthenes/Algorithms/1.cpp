#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;

// Sieve Algorithms 
const int N = 1e5;
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
// Note: i<=N means N+1 Elements
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Sieve();
    for (int i = 0; i <= N; i++)
    {
        if (isPrime[i])
            cout << i << " ";
    }
}