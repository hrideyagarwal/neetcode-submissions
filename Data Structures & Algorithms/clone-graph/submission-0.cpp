/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr) return nullptr;   // handle empty graph edge case (Example 3)
        
        unordered_map<Node*, Node*> mp;   // notebook: maps original node -> its clone
        return dfs(node, mp);              // kick off the recursive cloning from the given start node
    }
    
    Node* dfs(Node* node, unordered_map<Node*, Node*>& mp) {
        // STEP 1: check the notebook — have we already cloned this node?
        if (mp.find(node) != mp.end()) {
            return mp[node];   // yes -> just hand back the existing clone, don't make a new one
                                // this is what stops infinite loops on cycles
        }
        
        // STEP 2: not cloned yet -> create a new node with the same value
        Node* newNode = new Node(node->val);
        
        // write it into the notebook IMMEDIATELY, before touching neighbors
        // (important: if a neighbor loops back to this node, it needs to find
        // this entry already here instead of trying to clone this node again)
        mp[node] = newNode;
        
        // STEP 3: go through every neighbor of the ORIGINAL node
        for (auto neighbour : node->neighbors) {
            // recursively clone this neighbour (or fetch its clone if already done)
            Node* clonedNeighbour = dfs(neighbour, mp);
            
            // add that cloned neighbour to OUR new node's neighbor list
            newNode->neighbors.push_back(clonedNeighbour);
        }
        
        // STEP 4: all neighbors handled, this node's clone is fully built
        return newNode;
    }
};
