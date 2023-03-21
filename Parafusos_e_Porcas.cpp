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

    while (cin >> N)
    {
        int comeco,fim, diferenca, nAchar, primeiro=-1, ultimo=0;
        vector<int>parafusos;
        for (int i = 0; i < N; i++)
        {
            cin >> comeco >> fim;
            for (int j=comeco; j <= fim; j++)
            {
                parafusos.pb(j);
            }
        }
        cin >> nAchar;

        sort(parafusos.begin(), parafusos.end());
        for (int i = 0; i < sz(parafusos); i++)
        {
            if(parafusos[i] == nAchar){ 
                primeiro = i;   
                break;
            }
        }
        for (int i = sz(parafusos) -1 ; i >= 0; i--)
        {
            if(parafusos[i] == nAchar){ 
                ultimo = i;
                break;
            }
        }
        
        if(primeiro == -1){
            cout << nAchar << " not found" << endl;
        }else{
            cout << nAchar << " found from " << primeiro << " to " << ultimo << endl;
        }
        

    }
    
}