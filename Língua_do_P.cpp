#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){

    string fraseCodificada;
    string novaFrase;
    int k=0, letraP;
    bool primeira = 1;
    while(cin >> fraseCodificada)
    {
        letraP=0;
        if(primeira == 0){
            cout << ' ';
        }
        for(auto c:fraseCodificada){
            if(letraP%2 != 0){
                cout << c;
            }
            letraP++;
        }
        primeira = 0;
        
        
    }
    cout << "\n";

}