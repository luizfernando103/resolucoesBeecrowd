#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int nCasas, nEncomendas, posicaoCarteiro = 0, encomenda, x;
    cin >> nCasas >> nEncomendas;

    map<int,int>casas;
    for (int i = 0; i < nCasas; i++){
    cin >> x;
    casas[x] = i;
    }

    int tempo = 0;
    for (int i = 0; i < nEncomendas; i++)
    {
        cin >> encomenda;

        tempo += abs(casas[posicaoCarteiro] - casas[encomenda]);
        posicaoCarteiro = encomenda;

    }
    cout << tempo << endl;

}