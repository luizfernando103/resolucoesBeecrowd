#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;



int main(){
    int N;
    cin >> N;
    int total[N], k = 0, resposta =0;
    char jogo[N][N];
    for ( int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> jogo[i][j]; 
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        if((i % 2) == 0 ){
            for (int j = 0; j < N; j++)
            {
                if(jogo[i][j] == 'o'){
                    k++;
                }else if(jogo[i][j] == 'A' ){
                    k = 0;
                }
                resposta = max(resposta,k);
            }
            
        }else{
             for (int j = N-1; j >= 0; j--)
            {
                if(jogo[i][j] == 'o'){
                    k = k + 1;
                }else if(jogo[i][j] == 'A'){
                    k = 0;
                }
                resposta = max(resposta,k);
            }
        }
    }
        
        cout << resposta << endl;
         
}