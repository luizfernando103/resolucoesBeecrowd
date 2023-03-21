#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

char grafo[27][27];
int visitados[27];
char vertices[35];
int cont = 0;



int main(){
    int testCase=1;
    int nodes,edges;
    int sev;
    cin>>sev;
    while(sev--){
        cin>>nodes>>edges;
        memset(grafo,'#',sizeof(grafo));
        char u,p;
        for(int i=0;i<nodes;i++)
        {
            grafo[i][0]=i+97;
        }
        while(edges--)
        {
            cin>>u>>p;
            int z=u-97,Z=p-97;
            grafo[z][Z]=p;
            grafo[Z][z]=u;
        }
        printf("Case #%d:\n",testCase++);
        int visitados[nodes];
        memset(visitados,-1,sizeof(visitados));
        int Count=0;
        for(int i=0;i<nodes;i++)
        {
            bool line=false;
            stack<char> t;
            if(visitados[i]==-1){
            t.push(i+97);
            Count++;
            visitados[i]=1;
            line=true;
            }
            stack<char> Copy;
            int CP=0;
            while(!t.empty()){
                  char d=t.top();
                  if(CP!=0)
                  Copy.push(d);
                  else cout<<d<<",";
                  t.pop();
                  CP++;
            for(int j=0;j<nodes;j++)
            {
                if(grafo[d-97][j]!='#')
                {
                    if(visitados[grafo[d-97][j]-97]==-1)
                    {
                        line=true;
                        visitados[grafo[d-97][j]-97]=1;
                        t.push(grafo[d-97][j]);

                    }
                }
            }
            }vector<char> s;
            while(!Copy.empty())
            {
                char tp=Copy.top();
                s.push_back(tp);Copy.pop();
            }
            sort(s.begin(),s.end());
            for(int i=0;i<s.size();i++)cout<<s[i]<<",";
            if(line)
            cout<<endl;
        }
        printf("%d connected components\n",Count);
        cout<<endl;
    }
}