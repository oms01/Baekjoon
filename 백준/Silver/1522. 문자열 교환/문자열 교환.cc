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
    string str; cin>>str;
    int a = 0;
    rep(i,0,str.length()) a+=(str[i]=='a');
    int ans = 2e9;

    rep(i,0,str.length()){
        int cnt = 0;
        int tmp = a;
        rep(j,i,str.length()+i){
            if(!tmp) break;
            if(str[j%str.length()]=='b') cnt++;
            tmp--;
        }
        ans = min(ans, cnt);
    }
    cout<<ans<<'\n';

}