#include<bits/stdc++.h>
using namespace std;
#define hi ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define xx first
#define yy second
#define mem(a,d) memset(a,d,sizeof a)
#define mod 998244353
#define Maxn 1000000
#define PI 3.14159265

vector<pair<int,int>>v[100009];
long long st[100009];
long long ed[100009],dis[100009];
long long mx=0,qq,qqq=0;
bool f[100009];


void dfs(int i,int j)
{
    if(f[i]) return;
    if(j>mx)
    {
        mx=j;
        qq=i;
    }
    dis[i]=j;
    int k;
    f[i]=true;
    for(k=0; k<v[i].size(); k++)
    {
        pair<int,int>a;
        a=v[i][k];
        if(f[a.xx]==false)
        {

            dfs(a.xx,j+a.yy);
            // cout<<a.xx<<" "<<mx<<endl;
        }

    }

}

void solve()
{
    qqq++;

    long long i,j,k,t,n,q,l=0,p;
    cin>>n;
    for(i=0; i<=n; i++)
    {
        f[i]=false;
        v[i].clear();
        st[i]=0;
        ed[i]=0;
        dis[i]=0;
    }
    mx=0;
    for(i=1; i<n; i++)
    {
        cin>>j>>k>>l;
        v[j].pb({k,l});
        v[k].pb({j,l});
    }
    mx=0;
    qq=0;
    mem(dis,0);
    dfs(0,0);
    mx=0;
    p=qq;
    qq=0;
    mem(f,false);
    mem(dis,0);
    dfs(p,0);
    for(i=0; i<n; i++) st[i]=dis[i];



    mx=0;
    p=qq;
    qq=0;
    mem(f,false);
    mem(dis,0);
    dfs(p,0);
    for(i=0; i<n; i++) ed[i]=dis[i];


    cout<<"Case "<<qqq<<":"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<max(st[i],ed[i])<<endl;
        //cout<<st[i]<<" "<<ed[i]<<endl;
    }
    // cout<<endl;


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
