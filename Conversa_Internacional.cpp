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

int main()
{
    int N, K, k, idiomas; // N é o número de repetições do problema, K o dos idiomas, k guarda o valor de K e idiomas é a quantidade de idiomas iguais

    string idiomaAtual, idiomaAnterior = ""; // Idioma atual
    cin >> N;

    for (N; N > 0; N--)
    {

        idiomas = 0; // Inicializa idiomas como 0 para a nova interação
        cin >> K;
        cin.ignore(); // Finaliza a linha do cin
        k = K;        // Salva o valor de K para manter o valor enquanto K é alterado no próximo for

        for (K; K > 0; K--)
        { // for de Idiomas

            idiomaAnterior = idiomaAtual;
            getline(cin, idiomaAtual);
            if (idiomaAtual.compare(idiomaAnterior) && K < k) // Compara os idiomas e verifica se o valor ainda é maior q os tamanho de K
                idiomas++;                                    // Aumeta idiomas comuns
        }

        if (idiomas != 0)
            cout << "ingles" << endl; // Se nenhum for igual, igl~es é o padrão
        else
            cout << idiomaAtual << endl; // O idioma comum
    }
}