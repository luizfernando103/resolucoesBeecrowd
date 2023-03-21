#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int tamanho, resposta = 1, diferenca;
    
    cin >> tamanho;
    int escadinhas[tamanho];
    for (int i = 0; i < tamanho; i++)cin >> escadinhas[i];
    
    
    diferenca = abs(escadinhas[1] - escadinhas[0]);
    
    for (int i = 1; i < tamanho-1; i++)
    {
       if(abs(escadinhas[i+1]-escadinhas[i]) != diferenca){
       diferenca = abs(escadinhas[i + 1] - escadinhas[i]);
       resposta++;
       }
    }
    
    cout << resposta << endl;
 
    
}