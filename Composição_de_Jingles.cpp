#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back

using namespace std;

using ii = pair<int, int>;
using ll = long long;

const int MAXN = 100010;

int main()
{
    string composicao;
    while (composicao != "*")
    {
        cin >> composicao;
        int composicoesC = 0;
        float valor = 0;

        for (auto c : composicao)
        {

            if (c == 'H') valor += 1 / 2.0;
            if (c == 'W') valor+= 1.0;
            if (c == 'Q') valor += 1 / 4.0;
            if (c == 'E') valor +=  1 / 8.0;
            if (c == 'S') valor += 1 / 16.0;
            if (c == 'T') valor += 1 / 32.0;
            if (c == 'X') valor += 1 / 64.0;
            if(c == '/'){
                if(valor == 1.0){
                    composicoesC++;
                }
                valor = 0;
            }
        }
        if(composicao != "*"){
            cout << composicoesC << endl;
        }
        
    }
}