/*
https://www.spoj.com/problems/TDKPRIME/
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;

const int N = 86028121;
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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Sieve();

    vector<int> allPrimes;
    for (int i = 0; i <= N; i++)
    {
        if (isPrime[i])
        {
            allPrimes.push_back(i);
        }
    }

    int q, n;
    cin >> q;
    while (q--)
    {
        cin >> n;
        cout << allPrimes[n - 1] << endl;
    }
}