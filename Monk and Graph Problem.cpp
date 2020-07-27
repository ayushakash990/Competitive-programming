#include<bits/stdc++.h>
using namespace std;
vector<int> g[100001];
bool vi[100001];
void dfs(int x,int &e){
    vi[x]=1;
    for(auto s : g[x]){
             e++;
            if(!vi[s])dfs(s,e);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
        
    }
    int ans=0;
    
    for(int i=1;i<=n;i++){
        int e=0;
        if(!vi[i]){
            dfs(i,e);
            ans=max(ans,e/2);
        }
    }
    cout<<ans<<endl;
}