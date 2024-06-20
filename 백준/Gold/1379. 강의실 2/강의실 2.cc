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


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    vector<tuple<int,int,int>> v;
    rep(i,0,n){
        int st,en,idx;
        cin>>idx>>st>>en;
        v.push_back({st,1,idx});
        v.push_back({en,0,idx});
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    int ans = 0;
    priority_queue<int,vector<int>,greater<>> pq;
    vector<int> ret(n+1);
    rep(i,0,v.size()){
        int a,b,c; tie(a,b,c) = v[i];
        if(b==1){
            ans = max(ans,++cnt);
            if(pq.empty()) ret[c] = cnt;
            else{
                ret[c] = pq.top(); 
                pq.pop();
            }
        }
        else{
            pq.push(ret[c]);
            cnt--;
        }
    }
    cout<<ans<<'\n';
    rep(i,1,n+1) cout<<ret[i]<<'\n';
}