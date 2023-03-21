#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int funcionarios, clientes, resposta = 0;
    
    cin >> funcionarios >> clientes;
    int velocidade[funcionarios];

    for (int i = 0; i < funcionarios; i++) cin >> velocidade[i];

    priority_queue< pair<int,int>> filaClientes;

    for (int i = 0; i < funcionarios; i++){
        filaClientes.push(make_pair(0,-i));
    }

    while (clientes--)
    {
        int objetosClinte;
        cin >> objetosClinte;

        int id = -filaClientes.top().second;
        int liberado = -filaClientes.top().first;
        filaClientes.pop();
        filaClientes.push(make_pair(-(liberado+velocidade[id]*objetosClinte), -id));
        resposta = max(resposta, liberado+velocidade[id]*objetosClinte);
    }
    cout << resposta << endl;
}