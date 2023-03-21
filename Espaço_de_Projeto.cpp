#include <bits/stdc++.h>
using namespace std;

/*
    Integrantes
        ENZO DE SOUZA BRAZ - 20202008103
        GABRIEL GUIMARÃES DOS SANTOS RICARDO - 20202006600
        LUIZ FERNANDO DE ALMEIDA DIAS - 20202007920

    Podemos resolver esse problema encontrando a Arvore Geradora Minima e a Arvore Geradora Maxima do grafo.
    Ambas podem ser calculadas atraves do algoritmo de kruskal: para a Arvore Geradora Minima usamos o vetor 
    de arestas em ordem crescente de pesos e para a Maxima em ordem decrescente de pesos.
*/

const int MAXN = 1001;

int pai[MAXN], rnk[MAXN];

int acha_pai(int x){
    if(pai[x]==x)return x;
    return pai[x] = acha_pai(pai[x]);
}

bool unir(int a,int b){
    int pai_a = acha_pai(a), pai_b = acha_pai(b);
    if(pai_a == pai_b)return 0;
    if(rnk[pai_a]>rnk[pai_b])swap(pai_a,pai_b);
    pai[pai_a] = pai_b;
    if(rnk[pai_a]==rnk[pai_b])rnk[pai_b]++;
    return 1;
}

int kruskal(vector<tuple<int,int,int>>arestas){
    
    int resposta = 0;

    for(int i=1;i<=1000;i++)pai[i] = i, rnk[i] = 0;
    
    for(auto [c,a,b] : arestas){
        if(unir(a,b)){
            resposta += c;
        }
    }

    return resposta;
}

int main(){
    int N;

    cin >> N;

    vector<tuple<int,int,int>> arestas(N);

    for(auto& [c,a,b] : arestas){
        cin >> a >> b >> c;
    }

    sort(arestas.begin(),arestas.end());

    int custo_minimo = kruskal(arestas);

    reverse(arestas.begin(),arestas.end());

    int custo_maximo = kruskal(arestas);

    cout << custo_maximo << endl << custo_minimo << endl;
}
