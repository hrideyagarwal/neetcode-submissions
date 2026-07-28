class Solution {
public:
bool dfs( unordered_map<int,vector<int>> adj ,  vector<bool>& visiting,    vector<bool>& visited , int i){
if (visiting[i])
    return false;

if (visited[i])
    return true;
    visiting[i] = true;
for(int neighbour : adj[i]){
    if(!dfs(adj , visiting , visited , neighbour)) return false;
}

    visiting[i] = false;
visited[i] = true;

return true;

}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool> visiting(numCourses , false);
                vector<bool> visited(numCourses , false);
                unordered_map<int,vector<int>> adj(numCourses);
                for( auto& pre : prerequisites ){
                    adj[pre[1]].push_back(pre[0]);
                }
for(int i=0;i<numCourses;i++){
    if( !dfs(adj , visiting , visited , i)) return false;
}
return true ;

    }
};
