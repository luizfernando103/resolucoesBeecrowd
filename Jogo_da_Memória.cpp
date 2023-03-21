#include <bits/stdc++.h>
using namespace std;

/*
    Integrantes
        ENZO DE SOUZA BRAZ - 20202008103
        GABRIEL GUIMARÃES DOS SANTOS RICARDO - 20202006600
        LUIZ FERNANDO DE ALMEIDA DIAS - 20202007920

    Para resolver o problema precisamos encontrar a distancia entre todas os pares de cartas com o mesmo numero.
    Para isso, podemos simplesmente simular o caminho que iríamos percorrer na árvore de u para LCA(u,v) e 
    v para LCA(u,v), onde LCA(u,v) é o menor ancestral comum entre u e v e numero[u] = numero[v].
*/

const int MAXN = 50005;

pair<int,int> p[MAXN];

vector<int>grafo[MAXN];

int pai[MAXN], nivel[MAXN];

void dfs(int u,int p){
    pai[u] = p, nivel[u] = nivel[p]+1;
    for(auto v : grafo[u]){
        if(v!=p){
            dfs(v,u);
        }
    }
}

int distancia(int u,int v){
    int resposta = 0;
    if(nivel[u]<nivel[v])swap(u,v);
    while(nivel[u]!=nivel[v])u = pai[u], resposta++;
    while(u!=v)u = pai[u], v = pai[v], resposta += 2;
    return resposta;
}

int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        int x;
        cin>>x;
        if(p[x].first==0)p[x].first = i;
        else p[x].second = i;
    }

    for(int i=1;i<N;i++){
        int u,v;
        cin>>u>>v;
        grafo[u].push_back(v), grafo[v].push_back(u);
    }

    dfs(1,1);

    int resposta = 0;

    for(int i=1;i<=N/2;i++){
        resposta += distancia(p[i].first,p[i].second);
    }

    cout<<resposta<<endl;
}