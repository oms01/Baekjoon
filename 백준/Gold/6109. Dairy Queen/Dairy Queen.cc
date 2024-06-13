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
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
/*----------------------*/

int dp[301];
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n,m; cin>>n>>m;
    vector<int> v(m);
    rep(i,0,m) cin>>v[i];

    dp[0]=1;
    rep(i,0,m){
        rep(j,v[i],301){
            dp[j] += dp[j-v[i]];
        }
    }
    cout<<dp[n]<<'\n';

}
