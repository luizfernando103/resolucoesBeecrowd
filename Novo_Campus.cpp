#include <bits/stdc++.h>
using namespace std;

/*
    Integrantes
        ENZO DE SOUZA BRAZ - 20202008103
        GABRIEL GUIMARÃES DOS SANTOS RICARDO - 20202006600
        LUIZ FERNANDO DE ALMEIDA DIAS - 20202007920

    Para resolver o problema precisamos verificar se o grafo é conectado e se a resposta for afirmativa,
    também devemos encontrar sua Árvore Geradora Mínima. Podemos resolver ambos os passos com o Algoritmo
    de Kruskal.
*/

const int MAXN = 1005;

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

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int N,M;
    while(cin >> N >> M){
        for(int i=1;i<=N;i++)pai[i] = i, rnk[i] = 0;

        vector<tuple<int,int,int>> arestas(M);

        for(auto& [c,a,b] : arestas){
            cin >> a >> b >> c;
        }
        
        int custo = 0, ligacoes = 0;

        sort(arestas.begin(),arestas.end());

        for(auto [c,a,b] : arestas){
            if(unir(a,b)){
                custo += c, ligacoes++;
            }
        }        

        if(ligacoes==N-1)cout << custo << endl;
        else cout << "impossivel" << endl;
    }
}