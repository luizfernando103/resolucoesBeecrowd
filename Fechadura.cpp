#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int quantidadePinos, altura, resposta =0;
    cin >> quantidadePinos >> altura; 
    int pinos[quantidadePinos];
    for (int i = 0; i < quantidadePinos; i++) cin >> pinos[i];
    
    for(int i=1; i<quantidadePinos; i++){
    if (altura >= pinos[i - 1]) pinos[i] += altura - pinos[i - 1];
    else pinos[i] -= pinos[i - 1] - altura; 
    resposta += abs(altura-pinos[i -1]);
    }
    cout << resposta << endl;
}