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

string dp[105][105];
string s1,s2;
void solve()
{
    cn++;
    int i,j,k,l,m,n,p,q,d;
    // mem(dp,-1);
    s1.clear();
    s2.clear();
    cin>>s1>>s2;
    n=s1.size();
    m=s2.size();
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)dp[i][j].clear();
    }
    cout<<"Case "<<cn<<": ";
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
        {
            if(i==0||j==0)
            {
                dp[i][j]="";
                continue;
            }
            else if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1]+s1[i-1];
            else if(dp[i-1][j].size()>dp[i][j-1].size())dp[i][j]=dp[i-1][j];
            else if(dp[i-1][j].size()<dp[i][j-1].size())dp[i][j]=dp[i][j-1];
            else if(dp[i-1][j]<dp[i][j-1])dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i][j-1];
        }
    }
  //  cout<<s1<<" "<<s2<<endl;
    if(dp[n][m].size()==0)
    {
        cout<<":("<<endl;
    }
    else cout<<dp[n][m]<<endl;


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
