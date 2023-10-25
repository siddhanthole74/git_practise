/**
 * @file Solution.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll          long long int
#define nl          "\n"
#define pb          push_back
#define mk          make_pair
#define fe          first
#define se          second
#define all(v)      v.begin(),v.end()
#define testcases   ll t;cin>>t;while(t--)
#define var(n)      ll n;cin>>n;
#define input(v,n)  vector<ll> v(n);for(ll i=0;i<n;i++)cin>>v[i];
#define input1(v1,n) vector<ll> v1(n);for(ll i=0;i<n;i++)cin>>v1[i];
#define input2(v2,n) vector<ll> v2(n);for(ll i=0;i<n;i++)cin>>v2[i];

// how t use chat gpt in vs studio code 
// to sort vector pair according to second element
template <class T1, class T2, class Pred = std::less<T2> >
    struct sort_pair_second {
    bool operator()(const std::pair<T1,T2>&left, const std::pair<T1,T2>&right) {
        Pred p;
        return p(left.second, right.second);
    }
};
//std::sort(v.begin(), v.end(), sort_pair_second<int, int>());

bool isPrime(ll n)
{
    if(n<=1) return false;

    for(ll i=0;i<=sqrt(n);i++)
    {
        if(i%n ==0) return false;
    }
    return true;
}
using namespace std;

void Swap(ll *x , ll *y)
{
    ll tem=*x;
    *x=*y;
    *y=tem;
}

void YouCanSolveIt()
{
    //var(n);
    ll n;
    cin>>n;
    cout<<1<<" "<<1<<" "<<(n-2)<<nl;
   
   
}
int main()
{
    FASTIO
    testcases
    YouCanSolveIt();
   
 
    return 0;
}

