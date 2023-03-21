#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
   int alunos, notaAlta, res, repeticoesNota = 0;
   cin >> alunos;

   int notas[alunos];
   for (int i = 0; i < alunos; i++) cin >> notas[i];

   for (int i = 0; i < alunos; i++)
   {
       res = 1;
       for(int j = 0 ; j< alunos; j++){
           if(notas[i] == notas[j]){
               res++;
           }
       }
       if(res>repeticoesNota){
           repeticoesNota = res;
           notaAlta = notas[i];
       }else if((res == repeticoesNota) && (notaAlta<notas[i])){
           notaAlta = notas[i];
       }
   }
    
   cout << notaAlta << endl; 
}