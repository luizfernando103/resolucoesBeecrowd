#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 21;

int visitado[MAXN];
vector<int> grafo[MAXN];
vector<string> res[MAXN];
int vertices[MAXN];

int t1, t2;
string a1, a2, a3;

void dfs(int x) {
    visitado[x] = 1;
    res[x].pop_back();
    if (grafo[x].size() < t1)
        res[x].pb(a1);
    else if (grafo[x].size() < t2)
        res[x].pb(a2);
    else
        res[x].pb(a3);
    for (int i = 0; i < grafo[x].size(); i++) {
        int v = grafo[x][i];
        if (!visitado[v]) dfs(v);
    }
}

int main(){
    int N,M;
    while (cin >> N && N) {
        for (int i = 1; i <= N; i++) {
            res[i].clear();
            grafo[i].clear();
        }
        for (int i = 1; i <= N; i++) {
            int j;
            while (cin >> j && j) {
                grafo[i].pb(j);
                vertices[i]++;
            }
        }
        
        int ini;
        while (cin >> ini && ini) {
            cin >> t1 >> t2 >> a1 >> a2 >> a3;
            for (int i = 1; i <= N; i++) {
                visitado[i] = 0;
                res[i].push_back(a1);
            }
            dfs(ini);
        }
        for (int i = 1; i <= N; i++) {
            string nome;
            cin >> nome;
            cout << nome << ": ";
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        } 
    }    
}