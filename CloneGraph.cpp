//============================================================================
// Clone an undirected graph. Each node in the graph contains a label and a
// list of its neighbors.
//
// Note:
// Nodes are labeled uniquely.
//
// We use # as a separator for each node, and , as a separator for node label
// and each neighbor of the node.
// As an example, consider the serialized graph {0,1,2#1,2#2,2}.
//
// The graph has a total of three nodes, and therefore contains three parts
// as separated by #.
//
// First node is labeled as 0. Connect node 0 to both nodes 1 and 2.
// Second node is labeled as 1. Connect node 1 to node 2.
// Third node is labeled as 2. Connect node 2 to node 2 (itself), thus
// forming a self-cycle.
//
//============================================================================

struct UndirectedGraphNode {
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {};
};
 
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        if (node ==NULL) return NULL;
        queue<UndirectedGraphNode *> que;
        map<UndirectedGraphNode *, UndirectedGraphNode *> my_map;
        UndirectedGraphNode *res=new UndirectedGraphNode(node->label);
        my_map[node]=res;
        que.push(node);
        while(!que.empty()) {
            UndirectedGraphNode *cur=que.front();
            que.pop();
            for(int i=0;i<cur->neighbors.size();i++) {
                if (my_map.find(cur->neighbors[i])==my_map.end()) {
                    UndirectedGraphNode *new_node = new UndirectedGraphNode(cur->neighbors[i]->label);
                    my_map[cur]->neighbors.push_back(new_node);
                    my_map[cur->neighbors[i]]=new_node;
                    que.push(cur->neighbors[i]);
                } else {
                    my_map[cur]->neighbors.push_back(my_map[cur->neighbors[i]]);
                }
            }
        }
        return res;
    }
};