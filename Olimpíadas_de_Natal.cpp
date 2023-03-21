#include <bits/stdc++.h>
#include <iostream>

#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

struct pais{
    string nome;
    int medalhas[3];

};

bool comparador(pais x, pais y)
{

    if (x.medalhas[0] == y.medalhas[0])
    {
        if (x.medalhas[1] == y.medalhas[1])
        {
            if(x.medalhas[2] == y.medalhas[2]){
                return x.nome < y.nome;
            }
            return x.medalhas[2] > y.medalhas[2];
        }
        return x.medalhas[1] > y.medalhas[1];
    }
    return x.medalhas[0] > y.medalhas[0];
}

int main(){
    string nomeProva;
    map<string,pais>paises;
    while (getline(cin,nomeProva))
    {
        string pais;
        getline(cin,pais);
        paises[pais].nome = pais;
        paises[pais].medalhas[0]++;
        getline(cin,pais);
        paises[pais].nome = pais;
        paises[pais].medalhas[1]++;
        getline(cin,pais);
        paises[pais].nome = pais;
        paises[pais].medalhas[2]++;
    }

    vector<pais>listaPaises;   


    cout << "Quadro de Medalhas" << endl;
    for(auto [y,x]:paises){
        listaPaises.pb(x);
    }
    std::sort(listaPaises.begin(), listaPaises.end(), comparador);
    for(pais x:listaPaises){
        cout << x.nome << " " << x.medalhas[0] << " " << x.medalhas[1] << " " << x.medalhas[2] << endl;  
    }
  
    

}