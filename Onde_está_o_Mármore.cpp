#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int nMarmores, nConsultas, casoAtual=1 , consulta, lEncontrado;
    bool existe;


    while(cin >> nMarmores >> nConsultas, nConsultas!=0 && nMarmores!=0){

        cout << "CASE# "<< casoAtual << ":" << endl;
        casoAtual++;

        int marmores[nMarmores];
        for(int i = 0; i < nMarmores; i++)
            cin >> marmores[i];
        

        sort(marmores, marmores + nMarmores);
        for (int i = 0; i < nConsultas; i++)
        {
            cin >> consulta;
            existe = false;
  
            for( int j = 0; j < nMarmores; j++){
                if(marmores[j] == consulta){
                    existe = true;
                    lEncontrado = j+1;
                    break;
                }
            }

            if(existe == true)
                cout << consulta << " found at " << lEncontrado << endl;
            else
                cout << consulta << " not found" << endl;
        }
    }
}