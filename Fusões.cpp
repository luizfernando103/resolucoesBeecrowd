#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back

using namespace std;

using ii = pair<int,int>;
using ll = long long;

const int MAXN = 100010;

int pai[MAXN];

void build(int n){
    for(int i=1;i<=n;++i){
        pai[i] = i;
    }
}
 
int find_pai(int x){
    if(pai[x]==x)return x;
    return pai[x] = find_pai(pai[x]);
}

int main(){

    int N, K, A, B;
    char c;

    cin >> N;
    build(N);

    cin >> K;

    while(K--)
    {
        cin >> c >> A >> B;
        A = find_pai(A-1);
        B = find_pai(B-1);
        if(c == 'F') {
            pai[A] = B;
        } else {
            if(A == B) cout << "S" << endl;
            else cout << "N" << endl;
        }
    }   
}