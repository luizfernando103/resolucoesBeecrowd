#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back

using namespace std;

using ii = pair<int, int>;
using ll = long long;

const int MAXN = 100010;

/*
    Integrantes
        ENZO DE SOUZA BRAZ - 20202008103
        GABRIEL GUIMARÃES DOS SANTOS RICARDO - 20202006600
        LUIZ FERNANDO DE ALMEIDA DIAS - 20202007920

    Para resolver o problema precisamos primeiro criar uma struct do tipo aluno. Após salvamos o
    valor da quantidade de alunos e então criamos um vector do tipo aluno, dando o input de seus dados.
    Após isso foi feito um sort nesse vector, entçao foi preciso criar a função comparadora, a fim de
    salvar exatamente os datalhes de comparação pedidos no problema. Após feito o sort, só basta printar
    o resultado.

*/

// struct do tipo aluno
struct aluno
{
    string nome;
    char regiao;
    int distancia;
};

// função para fazer as comparações pedidas no exercício
bool comparador(aluno x, aluno y)
{

    if (x.distancia == y.distancia)
    {
        if (x.regiao == y.regiao)
        {
            return x.nome < y.nome;
        }
        return x.regiao < y.regiao;
    }
    return x.distancia < y.distancia;
}

int main()
{

    int quantidadeAlunos;

    while (cin >> quantidadeAlunos)
    {
        // vector para salvar o valores da struct
        std::vector<aluno> alunos(quantidadeAlunos);
        for (int i = 0; i < quantidadeAlunos; i++)
        {
            cin >> alunos[i].nome;
            cin >> alunos[i].regiao;
            cin >> alunos[i].distancia;
        }

        // realização do sort
        std:sort(alunos.begin(), alunos.end(), comparador);

        // print do resultado
        for (int i = 0; i < quantidadeAlunos; i++)
        {
            cout << alunos[i].nome << endl;
        }
    }

  
}