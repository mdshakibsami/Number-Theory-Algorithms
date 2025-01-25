#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;

bool isPrime(int n)   // O(sqrt(N))
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

signed main()
{
   
   int n;   cin>>n;
   bool flag = isPrime(n);
   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}