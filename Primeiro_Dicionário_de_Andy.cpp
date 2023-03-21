#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back

using namespace std;

using ii = pair<int, int>;
using ll = long long;

const int MAXN = 100010;


int main()
{
    string palavra, temp;
    set<string> dicionario;

    while (getline(cin, palavra))
    {
        palavra+='.';
        for (int i = 0; i < palavra.size() + 1; i++)
        {
            palavra[i] = tolower(palavra[i]);
            if (palavra[i]< 'a' || int(palavra[i]) > 'z')
            {
                if(temp.size())
                    dicionario.insert(temp);
                temp.clear();
            }
            else
            {
                temp += palavra[i];
            }
        }
    }

    
    for (auto palavra : dicionario)
        cout << palavra << endl;
}