#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 1005;

string grafo[MAXN];
int cont = 0;


int main(){

    int n, m;  
    cin >> m >> n;

    for(int i = 0; i < m; i++) {
        cin >> grafo[i];
    }

    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {
            if(grafo[i][j] == '#') {
                if(i==0||j==0||i+1==n||j+1==m){
					cont++;
				}else if(grafo[i-1][j]=='.'||grafo[i][j-1]=='.'
                ||grafo[i][j+1]=='.'||grafo[i+1][j]=='.'){
					cont++;            
                }
            }
        }
    }
    cout << cont << endl;
}