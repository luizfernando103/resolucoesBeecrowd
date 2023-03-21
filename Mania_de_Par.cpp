#include <bits/stdc++.h>
using namespace std;

/*
    Integrantes
        ENZO DE SOUZA BRAZ - 20202008103
        GABRIEL GUIMARÃES DOS SANTOS RICARDO - 20202006600
        LUIZ FERNANDO DE ALMEIDA DIAS - 20202007920

    Podemos resolver esse problema modelando o grafo de uma forma diferente: como queremos andar
    em uma quantidade par de arestas no caminho de 1 ate N, podemos transformar cada caminho de
    tamanho 2 em outro caminho de tamanho 1 em um grafo novo (tambem somando os pesos de ambas 
    as arestas do caminho no grafo normal). Depois dessa conversao, podemos aplicar o algoritmo  
    de dijkstra sem se preocupar com a quantidade de arestas que usamos, pois é garantido que 
    esse numero sera par.
*/

const int MAXN = 10001;

vector<pair<int,int>>grafo[MAXN], grafo_par[MAXN];

int dist[MAXN];

int dijkstra(int inicio,int N){

    for(int i=1;i<=N;i++)dist[i] = INT_MAX;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

    pq.push({0,inicio});
    dist[inicio] = 0;

    while(!pq.empty()){

        auto [distancia,atual] = pq.top();
        pq.pop();

        if(distancia>dist[atual])continue;

        for(auto [d,v] : grafo_par[atual]){

            if(distancia+d<dist[v]){

                dist[v] = distancia+d;
                pq.push({dist[v],v});
            }
        }
    }

    return dist[N];
}

int main(){

    int N,M;
    cin >> N >> M;
    
    for(int i=1;i<=M;i++){
        int a,b,c;
        cin >> a >> b >> c;
        grafo[a].push_back({c,b}), grafo[b].push_back({c,a});
    }
    
    for(int i=1;i<=N;i++){

        for(int j=0;j<grafo[i].size();j++){

            auto [peso_novo,u] = grafo[i][j];

            for(int k=j+1;k<grafo[i].size();k++){
                int v = grafo[i][k].second;
                peso_novo += grafo[i][k].first;

                grafo_par[u].push_back({peso_novo,v});
                grafo_par[v].push_back({peso_novo,u});

                peso_novo -= grafo[i][k].first;
            }
        }
    }

    int resposta = dijkstra(1,N);

    if(resposta==INT_MAX)cout << -1 << endl;
    else cout << resposta << endl;
}