/*
https://codeforces.com/problemset/problem/26/A
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;

// Sieve Algorithms
const int N = 4000;
bool isPrime[N + 1];
void Sieve() // O(n log(log n))
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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Sieve();
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        int count = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && isPrime[j] )
            {
                count++;
            }
        }
        if (count == 2)
        {
            ans++;
        }
    }

    cout << ans << endl;
}