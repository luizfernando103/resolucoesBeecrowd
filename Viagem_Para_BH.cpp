#include <bits/stdc++.h>
using namespace std;

/*
    Integrantes
        ENZO DE SOUZA BRAZ - 20202008103
        GABRIEL GUIMARÃES DOS SANTOS RICARDO - 20202006600
        LUIZ FERNANDO DE ALMEIDA DIAS - 20202007920

    Podemos resolver esse problema notando que as rotas de aviao e onibus sao totalmente independentes.
    com isso, podemos criar dois grafos distintos e para cada um deles encontrar a menor distancia de 
    1 ate N. Para isso, podemos utilizar o algoritmo de Dijkstra partindo do vertice 1.
*/

const int MAXN = 101;

vector<pair<int,int>> grafo[MAXN][2];

int dist[MAXN];

int dijkstra(int inicio,int tipo_grafo,int N){

    for(int i=1;i<=N;i++)dist[i] = INT_MAX;

    dist[inicio] = 0;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    pq.push({0,inicio});

    while(!pq.empty()){

        auto [distancia,atual] = pq.top();
        pq.pop();

        if(distancia>dist[atual])continue;

        for(auto [d,v]:grafo[atual][tipo_grafo]){

            if(d+distancia<dist[v]){

                dist[v] = d+distancia;
                pq.push({dist[v],v});
            }
        }
    }
    return dist[N];
}

int main(){
    int N,M;
    
    while(cin >> N >> M){

        for(int i=1;i<=M;i++){
            int a,b,t,r;
            cin >> a >> b >> t >> r;
            grafo[a][t].push_back({r,b});
        }

        cout << min(dijkstra(1,0,N), dijkstra(1,1,N)) << endl;

        //limpar o grafo para o proximo caso de teste
        
        for(int i=1;i<=N;i++){
            grafo[i][0].clear(), grafo[i][1].clear();
        }
    }
}