/*
It efficiently computes  𝑎^base in 𝑂(log(base)) time.
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;

int power(int a, int base)
{
    int result = 1;
    while (base)
    {
        if (base % 2)
            result *= a, base--;
        else
            a *= a, base /= 2;
    }
    return result;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, base;
    cin >> a >> base;
    cout << power(a, base);
}