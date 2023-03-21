#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int main(){
    int carta1 ,carta2,carta3, carta4,carta5;
    cin >> carta1 >> carta2 >> carta3 >> carta4 >> carta5;
    if((carta1<carta2)&&(carta2<carta3)&&(carta3<carta4)&&(carta4<carta5))
        cout << 'C' << endl;
    else if((carta1>carta2)&&(carta2>carta3)&&(carta3>carta4)&&(carta4>carta5))
        cout << 'D' << endl;
    else
        cout << 'N' << endl;
    
}