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

vector<int> adj[100'001], radj[100'001];
int n,m;
int vis[100'001];
stack<int> s;
void dfs(int cur){
    vis[cur]=1;
    for(auto nxt : adj[cur]){
        if(vis[nxt]) continue;
        dfs(nxt);
    }
    s.push(cur);
}
void kosaraju(){
    memset(vis, 0, sizeof(vis));
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        dfs(i);
    }
    memset(vis, 0,sizeof(vis));
    int ans = 0;
    while(!s.empty()){
        int cur = s.top(); s.pop();
        if(vis[cur]) continue;
        dfs(cur);
        ans++;
    }
    cout<<ans<<'\n';
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        for(int i=0;i<100'001;i++){
            adj[i].clear();
            radj[i].clear();
        }
        
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int st,en; cin>>st>>en;
            adj[st].push_back(en);
            radj[en].push_back(st);
        }
        kosaraju(); //scc 정보 저장

    }
}