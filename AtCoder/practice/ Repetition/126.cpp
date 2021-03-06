#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);++i)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> to(n), cost(n);
    rep(i,n-1){
        int a,b,w;
        cin >> a >> b >> w;
        a--;
        b--;
        to[a].push_back(b);
        to[b].push_back(a);
        cost[a].push_back(w);
        cost[b].push_back(w);
    }
    queue<int>q;
    vector<int> ans(n,-1);
    ans[0]=0;
    q.push(0);
    
    while(!q.empty()){
        int v = q.front();
        q.pop();
        rep(i,to[v].size()){
            int u = to[v][i];
            int w = cost[v][i];

            if(ans[u]!=-1)continue;
            ans[u]=(ans[v]+w)%2;
            q.push(u);
        }
    }
    rep(i,n){
        cout << ans[i] << endl;
    }
}