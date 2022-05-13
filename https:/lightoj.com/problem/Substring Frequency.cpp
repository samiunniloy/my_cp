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
string s1,s2;
int sz1,sz2;
int lps[1000009];

void make_lps()
{
    int i=1,len=0;

    while(i<sz2)
    {
        if(s2[i]==s2[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)len=lps[len-1];
            else
            {
                lps[i]=len;
                i++;
            }
        }
    }

}



void solve()
{
    cn++;
    int  i,j,k,l,m,n,p,q,d,h,r1,r2;
    cin>>s1>>s2;
    sz1=s1.size();
    sz2=s2.size();
    for(i=0; i<=sz2+1; i++)lps[i]=0;
    make_lps();
//    for(i=0; i<=sz2; i++)cout<<lps[i]<<" ";
//  cout<<endl;
    i=0;
    j=0;
    p=0;
    while(i<sz1)
    {
        if(s1[i]==s2[j])
        {
            i++;
            j++;
        }
        if(j==sz2)
        {
            p++;
            j=lps[j-1];
        }
        else if(i<sz1&&s1[i]!=s2[j])
        {
            if(j!=0)j=lps[j-1];
            else i++;
        }


    }

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
