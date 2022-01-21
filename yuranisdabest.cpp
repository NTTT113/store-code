#include<bits/stdc++.h>
using namespace std;
#define MASK(i) (1LL << (i))
#define BIT(x, i) ((x >> (i)) & 1)
#define fi first
#define se second
#define ll long long
#define task "name" 

const int oo = 1e9 + 7;
const ll loo = (ll)1e18 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 3;
const int BASE = 10;

template <typename T1, typename T2> bool minimize(T1 &a, T2 b)
{
    if (a > b) {a = b; return true;} return false;
}
template <typename T1, typename T2> bool maximize(T1 &a, T2 b)
{
    if (a < b) {a = b; return true;} return false;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
}