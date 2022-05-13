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

long long fact[1000009];
int cnt=0;
void fun()
{
    long long i,j;
    fact[0]=fact[1]=1;
    for(i=2; i<=1000000; i++)
    {
        fact[i]=i*fact[i-1];
        fact[i]%=mod;
    }

}

void solve()
{
    cnt++;
    long long i,j,k,l,m,n,p,q,d,h,r1,r2;
    cin>>n>>m;
    p=fact[n];
    q=fact[m]*fact[n-m];
    q%=mod;
    // cout<<p<<" "<<q<<endl;
    p*=bigmod(q,mod-2);
    p%=mod;
    p+=mod;
    p%=mod;
    //p*=bigmod(fact[n-m],mod-1);
    cout<<"Case "<<cnt<<": ";
    cout<<p<<endl;

}


main()
{
    hi;
    int t;
    t=1;
    fun();
    cin>>t;
    while(t--)
        solve();
    return 0;
}

/*



*/
