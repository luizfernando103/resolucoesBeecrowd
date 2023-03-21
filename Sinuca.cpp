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
    cin >> N;
    int bolas[N];
    for(int i=0; i < N; i++){
        cin >> bolas[i]; 
    }
    while (N != 0)
    {
        for (int i = 0; i < N - 1 ; i++){
            if(bolas[i] != bolas[i+1]){
                bolas[i] = -1;
            }else{
                bolas[i] = 1;
            }
        }
        N--;
    }
    if(bolas[0] == 1){
        cout << "preta" << endl;
    }else{
        cout << "branca" <<endl;
    }
    
}