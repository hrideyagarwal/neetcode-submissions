class Solution {
public:
void dfs(int node , unordered_map<int,vector<int>>& adj ,vector<bool>& visited, int& count  ){
    visited[node]=true;
    count++;
    for(int neighbour:adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour , adj , visited , count);
        }
    }
}
    bool validTree(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> adj;
for(auto &prev : edges){
    int u= prev[0];
    int v = prev[1];
    adj[u].push_back(v);
        adj[v].push_back(u);


}
if (edges.size() != n - 1)
    return false;
    vector<bool> visited(n,false);
    int count=0;
    dfs(0 , adj , visited , count);
    if(count==n){
        return true;
    }
    return false;


    }
};
