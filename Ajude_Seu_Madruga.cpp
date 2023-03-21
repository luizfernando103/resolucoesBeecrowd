#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define endl '\n'
#define pb push_back
#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int,int>;
using iii = tuple<int,int,int>;

const int inf = 2e9+1;
const int mod = 1e9+7;
const int maxn = 1e5+100;

template<typename X, typename Y> bool ckmin(X& x, const Y& y) { return (y < x) ? (x=y,1):0; }
template<typename X, typename Y> bool ckmax(X& x, const Y& y) { return (x < y) ? (x=y,1):0; }

double v[maxn];
int n,a;

double busca_binaria(){
    double l = 0, r = 100000, ans = -1, resposta_atual = 0;

    for(int tentativa=1;tentativa<=100;tentativa++){

        double md = (l+r)/2;
        double resposta_atual = 0;

        for(int i=1;i<=n;i++)resposta_atual += max(double(0),v[i]-md);;

        if(abs(resposta_atual-a)<1e-6){
            ans = md;
            break;
        }

        if(resposta_atual>a)l = md;
        else if(resposta_atual<a)r = md;
    }

    return ans;
}

int main(){_
    while(true){
        cin>>n>>a;
        if(n==0)break;
        for(int i=1;i<=n;i++)cin>>v[i];
        double resposta_atual = 0;
        for(int i=1;i<=n;++i)resposta_atual += v[i];        
        if(resposta_atual==a)cout<<":D"<<endl;
        else if(resposta_atual<a)cout<<"-.-"<<endl;
        else cout<<fixed<<setprecision(4)<<busca_binaria()<<endl;
    }    
}