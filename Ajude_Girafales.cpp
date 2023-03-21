#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int diff(string &a, string &b)
{
    int dif = 0;
    for (int i = 0 ; i < min(a.size(), b.size()); i++)
    {
        if (a[i] != b[i]) dif++;
    }
    return dif;
}

int main(){
    int N, M;


    while (cin >> N, N!= 0)
    {
        map<string,string> alunos;
        string nome,assinatura;
        int falsa = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> nome >> assinatura;
            alunos[nome] = assinatura;
        }

        cin >> M;

        for (int i = 0; i < M; i++)
        {
            cin >> nome >> assinatura;
            if(diff(alunos[nome], assinatura) > 1){
                falsa++;
            }
        }

        cout << falsa << endl;

    }
    
}