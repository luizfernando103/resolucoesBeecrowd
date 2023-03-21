#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

char trianguloVale(char resposta, int a, int b, int c){
    if(resposta == 'S'){
        return 'S';
    }
    if(a < b + c && b < a + c && c < a + b){
        return 'S';
    }else{
        return 'N';
    }
}

const int MAXN = 100010;

int main(){
    int vareta1,vareta2, vareta3, vareta4;
    char resposta;
    cin >> vareta1 >> vareta2 >> vareta3 >> vareta4;
    resposta = trianguloVale(resposta, vareta1,vareta2,vareta3);
    resposta = trianguloVale(resposta, vareta1,vareta2,vareta4);
    resposta = trianguloVale(resposta, vareta1,vareta4,vareta3);
    resposta = trianguloVale(resposta, vareta4,vareta2,vareta3);
    cout << resposta << endl;
}