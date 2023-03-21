#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int peso1,peso2,comprimento1,comprimento2;
    cin >> peso1 >> comprimento1 >> peso2 >> comprimento2;
    if((peso1 * comprimento1) == (peso2 * comprimento2)){
        cout << 0 << endl;
    }else if((peso1 * comprimento1) < (peso2 * comprimento2)){
        cout << 1 << endl;
    }else{
        cout << -1 << endl;
    }
}