#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 2010;

int visitados[MAXN];
vector<int> grafo[MAXN];

void dfs(int x){
    visitados[x] = 1;
    for(auto y : grafo[x]){
        if(!visitados[y]){
            dfs(y);
        }
    }
}

int main(){
    int N, M, u, v, p;

    while (cin >> N >> M, M && N)
    {
        memset(grafo, 0, sizeof(grafo));
        for(int i=1;i<=M;i++){
        int u,v;
        cin>>u>>v>>p;
        if (p == 1) grafo[u].push_back(v);
        else
        grafo[u].push_back(v), grafo[v].push_back(u);
        }

        bool flag = false;
        for (int i = 1; i <= N; ++i)
        {
            memset(visitados, 0, sizeof(visitados));
            dfs(i);
            flag = false;
            for (int j = 1; j < N && !flag; ++j)
                if (!visitados[j])
                    flag = true;

            if (flag)
                break;

        }

        if(flag) cout << 0 << endl;
        else cout << 1 << endl;

    }
}