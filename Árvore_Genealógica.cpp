#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

vector<vector<int> > grafo(301);
vector<bool> visitado(301);
vector<int> ans;
void dfs(int n)
{
    if(visitado[n])return;
    visitado[n]=1;
    for(auto e:grafo[n])
    {
        dfs(e);
    }
    ans.push_back(n);
    return;
}

int main()
{
    int n,m;
    int u,vi;
    while(cin>>m>>n)
    {
        map<string,int> mp;
        fill(visitado.begin(),visitado.end(),false);
        string x,y,z;
        int i=1;
        while(n--)
        {
            cin>>x>>y>>z;
            if(!mp[x])mp[x]=i++;
            if(!mp[z])mp[z]=i++;
            grafo[mp[x]].push_back(mp[z]);
            grafo[mp[z]].push_back(mp[x]);
        }
 
        int count=0;
        for(int ii=1;ii<i;ii++){
        if(!visitado[ii]){
            dfs(ii);
            count++;
         }
        }
      
        cout<<count<<endl;
    }
}