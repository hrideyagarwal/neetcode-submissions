class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj(numCourses);
        vector<int> ans;
        for(auto& prev : prerequisites){
            int a = prev[0];
            int b= prev[1];
            adj[b].push_back(a);
        }
vector<int> indegree(numCourses , 0);
for(auto& prev: prerequisites){
    indegree[prev[0]]++;
}
queue<int> q;
for(int i=0;i<numCourses ; i++){
    if(indegree[i]==0) q.push(i); 
}
int count =0;
while(!q.empty()){
int node = q.front();
q.pop();
ans.push_back(node);
count++;
for( int neighbour : adj[node]){
    indegree[neighbour]--;
    if(indegree[neighbour]==0)q.push(neighbour); 
}
}
if ( ans.size() == numCourses) return ans;
return{};

    }
};
