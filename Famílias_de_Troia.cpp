#include <bits/stdc++.h>
using namespace std;

/*
    Integrantes
        ENZO DE SOUZA BRAZ - 20202008103
        GABRIEL GUIMARÃES DOS SANTOS RICARDO - 20202006600
        LUIZ FERNANDO DE ALMEIDA DIAS - 20202007920

    Para resolver o problema precisamos contar o número de componentes no grafo,
    onde cada componente representa uma família. Podemos contar as componentes
    usando o algoritmo de busca em profundidade (DFS).
*/

const int MAXN = 50001;

vector<int>grafo[MAXN];

bool visitado[MAXN];

void dfs(int x){
    visitado[x] = 1;
    for(auto y : grafo[x]){
        if(!visitado[y]){
            dfs(y);
        }
    }
}

int main(){
    int N,M;

    cin >> N >> M;

    for(int i=1;i<=M;i++){
        int u,v;
        cin>>u>>v;
        grafo[u].push_back(v), grafo[v].push_back(u);
    }
    
    int componentes = 0;

    for(int i=1;i<=N;i++){
        if(!visitado[i]){
            componentes++;
            dfs(i);
        }        
    }

    cout << componentes << endl;
}