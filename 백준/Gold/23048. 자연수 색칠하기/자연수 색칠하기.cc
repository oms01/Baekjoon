#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define rep(i,x,y) for(int i=x;i<y;i++)
#define all(x) begin(x),end(x)
#define rall(x) rbegin(x),rend(x)
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef tuple<int,int,int> tiii;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
/*----------------------*/

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll n; cin>>n;

    vector<bool> s(n+1,1);
    vector<ll> color(n+1,-1);

    ll idx = 1;
    s[1] = 0;
    color[1] = idx++;
    for(ll i=2;i<=n;i++){
        if(!s[i]) continue;
        color[i] = idx;
        for(ll j=i*i;j<=n;j+=i){
            s[j] = 0;
            color[j] = idx;
        }
        idx++;
    }

    cout<<idx-1<<'\n';
    for(ll i=1;i<=n;i++) cout<<color[i]<<' ';


}
