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
string s1,s2,s3;
int dp[55][55][55],sz1,sz2,sz3;
bool f[55][55][55];
int fun( int i,int j,int k)
{

    if(i>=sz1||j>=sz2||k>=sz3)
        return 0;
    if(f[i][j][k])
        return dp[i][j][k];
    f[i][j][k]=true;
    if(s1[i]==s2[j]&&s1[i]==s3[k])
    {
        dp[i][j][k]=fun(i+1,j+1,k+1)+1;
        return dp[i][j][k];
    }
    dp[i][j][k]=0;
    int a,b,c;
    int p=0;
    for( a=0; a<=1; a++)
    {
        for(b=0; b<=1; b++)
        {
            for(c=0; c<=1; c++)
            {
                if(a==0&&b==0&&c==0)
                    continue;
                else
                {
                    p=max(p,fun(i+a,j+b,k+c));
                }

            }


        }

    }
    return dp[i][j][k]=p;


}
int cn=0;
void solve()
{
    cn++;
    long long i,j,k,l,m,n,p,q,d;
    s1.clear();
    s2.clear();
    s3.clear();
    cin>>s1>>s2>>s3;
    sz1=s1.size();
    sz2=s2.size();
    sz3=s3.size();
    mem(f,false);
    cout<<"Case "<<cn<<": "<<fun(0,0,0)<<endl;

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
