/*
https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/micro-and-prime-prime-1/
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;

const int N = 1e6;
bool isPrime[N + 1];
int primePrime[N + 1];
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

void findPrimePrime()
{
    // finds prime prime numbers
    int cnt = 0;
    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i])
        {
            cnt++;
        }

        if (isPrime[cnt])
        {
            primePrime[i] = 1;
        }
        else
            primePrime[i] = 0;
    }

    //Pre Calculate the number of prime prime
    int count = 0;
    for (int i = 2; i <= N; i++)
    {
        if (primePrime[i])
        {
            count++;
        }

        primePrime[i] = count;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Sieve();
    findPrimePrime();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int l, r;
        cin >> l >> r;

        cout << primePrime[r] - primePrime[l - 1] << endl;
    }
}