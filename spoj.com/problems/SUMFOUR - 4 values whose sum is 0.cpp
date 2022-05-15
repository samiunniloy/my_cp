#include<bits/stdc++.h>
using namespace std;
#define hi ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define xx first
#define yy second
#define mem(a,d) memset(a,d,sizeof a)
#define mod 1000003
#define Maxn 100000000
#define PI 2*acos(0.0)
#define endl "\n"
# define test cout<<" mike_testing "
long long bigmod(long long l,long long r)
{
    if(r==0)
        return 1;
    long long res=bigmod(l,r/2)%mod;
    res=(res*res)%mod;
    if(r&1)
        res=(res*l)%mod;
    return res%mod;
}

void solve()
{

    long long i,j,k,l,m,n,p,q,r1,r2;
    cin>>n;
    vector<int>v;
    //   map<long long,long long>mp1;
    int a[n],b[n],c[n],d[n];
    for(i=0; i<n; i++)cin>>a[i]>>b[i]>>c[i]>>d[i];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            v.pb(a[i]+b[j]);
            // cout<<a[i]*b[j]<<" "<<mp[a[i]*b[j]]<<endl;

        }
    }
    p=0;
    // test;
    //for(i=0; i<n; i++)cin>>a[i]>>b[i]>>c[i]>>d[i];
    vector<int>v1;
    sort(v.begin(),v.end());
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            q=c[i]+d[j];
            q*=-1;
            v1.pb(q);
            //  p+=((lower_bound(v.begin(),v.end(),q+1))-(lower_bound(v.begin(),v.end(),q)));

        }
    }
    pair<vector<int>::iterator,vector<int>::iterator>pp;
    for(i=0; i<n*n; i++) //p+=((lower_bound(v.begin(),v.end(),v1[i]+1))-(lower_bound(v.begin(),v.end(),v1[i])));
    {
        pp=equal_range(v.begin(),v.end(),v1[i]);
        p+=(pp.yy-pp.xx);

    }
    cout<<p<<endl;

}

main()
{
    hi;
    int t;
    t=1;

    // cin>>t;
    while(t--)
        solve();
    return 0;
}

/*

*/
