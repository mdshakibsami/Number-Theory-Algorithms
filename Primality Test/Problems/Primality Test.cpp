/*
https://www.codechef.com/problems/PRB01
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {

        int n;
        cin >> n;
        bool flag = isPrime(n);

        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}