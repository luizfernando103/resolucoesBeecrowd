#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int grafo[1000][1000];
int visitados[1000];
int cont = 0;

void dfs (int x, int y)
{
	int i;
	visitados[x] = 1;
	for (i = 0; i < y; i++)
	{
		if (grafo[x][i] == 1 && visitados[i] == -1)
		{
			cont++;
			dfs(i, y);
		}
	}
}

int main(){
    int t,inicio,x,y, vertices,arestas;
    cin >> t;
    while (t--)
    {
        cont = 0;
        memset(grafo, -1, sizeof(grafo));
		memset(visitados, -1, sizeof(visitados));
        cin >> inicio >> vertices >> arestas;
        for (int i = 0; i < arestas; i++)
        {
            cin >> x >> y;
            grafo[x][y] = 1;
            grafo[y][x] = 1;
        }
        dfs(inicio, vertices);
		cont *= 2;
        cout << cont << endl;
        
    }
    
    
}