#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int flavinho[6], loteria[6], resposta=0;
    for (int i = 0; i < 6; i++)
    {
        cin >> flavinho[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cin >> loteria[i];
    }
    
    for (int i = 0; i < 6; i++)
    {
        for(int j =0; j<6; j++){
            if(flavinho[i] == loteria[j]){
                resposta++;
            }
        }
    }
    if(resposta == 3) cout << "terno" << endl;
    else if(resposta == 4) cout << "quadra" << endl;
    else if(resposta == 5) cout << "quina" << endl;
    else if(resposta == 6) cout << "sena" << endl;
    else cout << "azar" << endl;
    
}