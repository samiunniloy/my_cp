#include<bits/stdc++.h>
using namespace std;
#define hi ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define xx first
#define yy second
#define mem(a,d) memset(a,d,sizeof a)
#define mod 1000000007
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

int cn=0;

void solve()
{
    cn++;
    double i,j,k,l,m,n,p,q,d,h,r1,r2;
    cin>>r1>>r2>>h>>p;
    double ans;
    n=(p/(h*1.00)*(r1-r2))+r2;
    ans=(PI/3)*((n*n)+(r2*r2)+(n*r2))*p;
    // cout<<"Case "<<cn<<": ";
    printf("Case %d: %.9lf\n",cn,ans);
    //  cout<<ans<<endl;
}


main()
{
    hi;
    int t;
    t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

/*



*/
