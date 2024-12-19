#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> edges, int node,vector<bool>& fr,int s){
    fr[node] = 1;
    for(auto it : edges[node]){
        if(node != s && fr[it] == 0){
            cout<<s+1<<" "<<node+1<<" "<<it+1<<"\n";
        }
        if(fr[it] == 0){
            solve(edges,it,fr,s);
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> edges(n);
    vector<int> degree(n);
    int rad = 0;
    for(int i = 0; i < n-1; i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        degree[x]++;
        degree[y]++;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    for(int i = 0; i < n; i++){
        if(degree[i] > degree[rad]){
            rad = i;
        }
    }
    vector<bool> deleted(n);
    cout<<n - degree[rad] - 1<<"\n";

    vector<bool> visited(n);
    vector<bool> fr(n);
    solve(edges,rad,fr,rad);
    return 0;
}
