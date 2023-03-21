#include <bits/stdc++.h>
using namespace std;

/*
    Integrantes
        ENZO DE SOUZA BRAZ - 20202008103
        GABRIEL GUIMARÃES DOS SANTOS RICARDO - 20202006600
        LUIZ FERNANDO DE ALMEIDA DIAS - 20202007920

    Para resolver o problema precisamos salvar 3 linhas de input de nomes (tipo string)
    e imprimir a combinacao do input 1 e 2, sendo que o input 2 deve ser impresso antes do nome fornecido no input 3.
    Mas se no input 3 nao fornecer algum nome, deve-se apenas imprimir a combinacao em ordem: input 1 e 2.

*/

int main(){
    int N;//Quantidade de entradas
    cin >> N;
    cin.ignore();//Finaliza a linha do cin

    int resultados[N];//Vetor de inteiros com tamanho N determinado pelo usuário que guarda as respostas de cada entrada
    
    for (int i = 0; i < N; i++)
        resultados[i] = 0;//Vetor fica com 0 em todas as posições
    
    string diamantes;//String para cada entrada a seguir

    for (int i = 0; i < N; i++)//For para cada entrada
    {
       getline(cin,diamantes);//Pega a nova entrada e cloca em diamantes

       for(int j=0; j<diamantes.length(); j++){//For para o char '<' de abertura do diamante

           if(diamantes[j]=='<'){//Se o char for '<', entra no if para procurar pelo outro for o fechamento do diamante

               for (int o = j+1; o<diamantes.length(); o++){//Começa em j+1 para ir só pra frente de j

                   if(diamantes[o]=='>'){//Se o char igual a '>', entra no if, adiciona +1 diamante e substitui o char por '.' para não repetir diamantes
                       resultados[i]++;
                       diamantes[o]='.';
                       break;//Segue para o próximo, já que "diamante só fecha" com um '>'
                   }

                }
           }
           
       }
    }

    for (int i = 0; i < N; i++)
        cout << resultados[i] << endl;//Printa os resultados
    
    
}