
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod(ll x,ll mod)
{
    if(x<mod) return 0;
    return x%mod;
}

bool check(ll l,ll r,ll k,vector<ll>&a)
{
    unordered_map<ll,ll>mpp;
    for(ll i=l;i<=r;i++) mpp[i]++;
    for(auto it:mpp)
    {
        if(it.second!=k) return false;
    }
    return true;
}
ll solve(ll n,ll k,vector<ll>&a,ll q,vector<vector<ll>>&queries)
{
    if(k==1)
    {

        ll sum=0;
        for(ll i=1;i<=q;i++) sum+=i;
        return sum;
    }
    vector<ll>p(q);
    ll t=0,tt=0;
    ll L,R;
    for(ll i=0;i<q;i++)
    {   
 
        L=mod((t+queries[i][0]),n)+1;
        R=mod((tt+queries[i][1]),n)+1;
        t=L;
        tt=R;
        if(check(L,R,k,a)) p[i]=i+1;
    }
    ll sum=0;
    ll m=1e9+7;
    for(auto  it:p) sum=(sum+it)%m;
    return sum%m;
}

signed main() 
{
    ll n,k; cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll q; cin>>q;
    ll two; cin>>two;
    vector<vector<ll>>queries(q,vector<ll>(2));
    for(ll i=0;i<q;i++)
    {
        ll x,y; cin>>x>>y;
        queries[i][0]=x;
        queries[i][1]=y;
    }
    cout<<solve(n,k,a,q,queries);
    return 0;
}
