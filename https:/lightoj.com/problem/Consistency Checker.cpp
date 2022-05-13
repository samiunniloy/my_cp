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

struct node
{
    int ed;
    node *next[11];
    node()
    {
        ed=0;
        for(int i=0; i<11; i++)next[i]=0;
    }

}*root;
int cn=0;

void insrt(string s)
{
    node *cur=root;
    for(int i=0; i<s.size(); i++)
    {
        int val=s[i]-'0';
        if(cur->next[val]==NULL)
        {
            cur->next[val]=new node();
        }
        cur->ed=cur->ed+1;
        cur=cur->next[val];
    }
    cur->ed++;
}

int count(string s)
{

    node *cur=root;
    for(int i=0; i<s.size(); i++)
    {
        int val=s[i]-'0';
        cur=cur->next[val];
    }
    //  cout<<cur->ed<<" ";
    return cur->ed;
}

void del(node* cur)
{
    for (int i = 0; i < 10; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}
void solve()
{
    cn++;
    root=new node();
    int  i,j,k,l,m,n,p,q,d,h,r1,r2;
    cin>>n;
    string s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        //     reverse(s[i].begin(),s[i].end());
        insrt(s[i]);
    }
    bool f=false;
    for(i=0; i<n; i++)
    {
        k=count(s[i]);
        if(k>1)f=true;
    }
    cout<<"Case "<<cn<<": ";
    if(f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    del(root);

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
