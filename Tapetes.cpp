#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int tamanhoTubo, nTapetes;
    ll somaArea = 0;
    cin >> tamanhoTubo >> nTapetes;

    int ultimo = tamanhoTubo - nTapetes+1;
    somaArea = (ll)ultimo*ultimo + (nTapetes - 1)   ;
    
    cout << somaArea << endl; 
}