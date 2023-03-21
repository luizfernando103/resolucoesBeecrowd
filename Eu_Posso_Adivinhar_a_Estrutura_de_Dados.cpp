#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int n, operacao, valor;
    while (cin >> n)
    {
        stack<int> pilha;
        queue<int> fila;
        priority_queue<int> filaPrioridade;

        bool ePilha= true, eFila = true, efilaPrioridade=  true; 

        for (int i = 0; i < n; i++)
        {
            cin >> operacao >> valor;

            if(operacao == 1){
                pilha.push(valor);
                fila.push(valor);
                filaPrioridade.push(valor);
            }
            if(operacao == 2){

                if(pilha.top() != valor){
                    ePilha = false;
                }
                if(fila.front() != valor){
                    eFila = false;
                } 
                if(filaPrioridade.top() != valor){
                    efilaPrioridade = false;
                }    
                pilha.pop();
                fila.pop();
                filaPrioridade.pop();            
            }
        }
        
        if(eFila && !ePilha && !efilaPrioridade){
            cout << "queue" << endl;
        }else if(!eFila && ePilha && !efilaPrioridade){
            cout << "stack" << endl;
        }else if(!eFila && !ePilha && efilaPrioridade){
            cout << "priority queue" << endl;
        }else if(!eFila && !ePilha && !efilaPrioridade){
            cout << "impossible" << endl;
        }else{
            cout << "not sure" << endl;
        }

    }
    

}