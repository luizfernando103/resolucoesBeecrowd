#include <bits/stdc++.h>
using namespace std;

/*
    Integrantes
        ENZO DE SOUZA BRAZ - 20202008103
        GABRIEL GUIMARÃES DOS SANTOS RICARDO - 20202006600
        LUIZ FERNANDO DE ALMEIDA DIAS - 20202007920

    Para resolver o problema precisamos guardar o numero de linhas e guardar cada linha (tipo string)
    deslocar cada letra das linhas seja minuscula e maiuscula em 3 posicoes a direta,
    reverter as linhas e deslocar cada caracter das linha da metade para o fim em 1 posicao a esquerda

*/

int main(){
    int nLinhas;

    cin >> nLinhas; // guarda numero de linhas
    cin.ignore();

    string linhas[nLinhas];

    for(int i = 0; i < nLinhas; i++) getline(cin, linhas[i]); // guarda cada linha

    for(int i = 0; i < nLinhas; i++){ // loop para cada linha
        for (auto &&c : linhas[i]){ // desloca cada letra em 3 posicoes a direita, usando um if com base na tabela ascii
            if((int(c) > 64 && int(c) < 91) || (int(c) > 96 && int(c) < 123)) c += 3;
        }
        reverse(linhas[i].begin(), linhas[i].end()); // reverte a linha 
        int metade = trunc(linhas[i].size() / 2); // guarda a posicao da metade da linha

        for(int j = metade; j < linhas[i].size(); j++){ // desloca cada caracter em 1 posicao a esquerda
            linhas[i][j] -= 1;
        }
    }

    for (auto linha : linhas){ // loop para imprimir todas as linhas depois da criptografia
        cout << linha << endl;
    }

}