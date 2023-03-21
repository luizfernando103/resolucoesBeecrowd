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

    int N;
    int pontos[100015];
    char nomes[100015][15];

    while (cin >> N, N != 0)
    {
        int resposta=0;
        ll tempA=0, tempB=0, timeA=0, timeB=0;

        for(int i=1; i <= N; ++i)
        {
            pontos[i] = 0;
            cin >> nomes[i];
            for (int j = 0; j < strlen(nomes[i]); j++)
                pontos[i] += nomes[i][j];
            tempB += pontos[i];
            timeB += pontos[i] * i;
        }

        for(int i=1; i <= N; ++i)
        {
            timeB -= tempB;
            tempB -= pontos[i];
            tempA += pontos[i];
            timeA += tempA;
            if (timeA == timeB)
            {
                resposta = i;
                break;
            }
            if (timeA > timeB)
                break;
        }
        if (resposta == 0)
            cout << "Impossibilidade de empate." << endl;
        else
           cout << nomes[resposta] << endl;
    }
}