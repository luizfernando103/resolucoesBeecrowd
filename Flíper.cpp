#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int porta1, porta2;
    cin >> porta1 >> porta2;
    if(porta1 == 0){
        cout << "C" << endl;
    }
    else{
        if(porta2 == 0){
            cout << "B" << endl;
        }
        if(porta2 == 1){
            cout << "A" << endl;  
        }
    }
}