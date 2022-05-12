#include<bits/stdc++.h>
using namespace std;
#define hi ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define xx first
#define yy second
#define mem(a,d) memset(a,d,sizeof a)
#define mod 1000000007
#define Maxn 100000000
#define PI 3.1415926
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
    int i,j,k,l,m,n,p,q,d;
    cin>>n>>m;
    int x[n];
    bool f[11];
    mem(f,false);
    for(i=0; i<n; i++)
    {
        cin>>x[i];
        f[x[i]]=true;
    }
    int dp[11][11];
    mem(dp,0);
    sort(x,x+n);
    for(i=0; i<n; i++)dp[1][x[i]]=1;
    for(i=2; i<=m; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=-2; k<=2; k++)
            {
                l=x[j]+k;
                if(l>=0&&l<10&&f[l])dp[i][x[j]]+=dp[i-1][l];
            }

        }
    }
    p=0;
    for(i=0; i<n; i++)p+=dp[m][x[i]];
    cout<<"Case "<<cn<<": "<<p<<endl;

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
