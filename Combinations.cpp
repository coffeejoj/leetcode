//============================================================================
// Given two integers n and k, return all possible combinations of k numbers
// out of 1 ... n.
//
// For example,
// If n = 4 and k = 2, a solution is:
//
//[
// [2,4],
// [3,4],
// [2,3],
// [1,2],
// [1,3],
// [1,4],
//]
//
// Complexity: O(N!) time
// Sol 1: combine(n, k) = combine(n-1, k-1) + combine(n-1, k)
// Sol 2: combine(n, k) = join (1 ~ n-k+1) from k to 1
// Sol 3: combine(n, k) = combine(n-1, k-1) + (n ~ k)
//============================================================================

void func(int index, int n, int k, vector<int> &save, vector<vector<int> > &res)
{
    if(save.size()==k){ res.push_back(save); return;}
    for(int i=index;i<=n;i++) {
        save.push_back(i);
        func(i+1, n, k, save, res);
        save.pop_back();
    }
}

class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int> > res;
        vector<int> save;
        func(1, n, k, save, res);
        return res;
    }
};