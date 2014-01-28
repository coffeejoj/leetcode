//============================================================================
// Given n pairs of parentheses, write a function to generate all combinations
// of well-formed parentheses.
//
// For example, given n = 3, a solution set is:
//
// "((()))", "(()())", "(())()", "()(())", "()()()"
//
// Complexity:
// O(n!)
//============================================================================

void func(int l, int r, int n, string save, vector<string> &res)
{
    if (l==n && r==n) {
        res.push_back(save);
        return;
    }
    if (l>n || r>n) return;
    func(l+1, r, n, save+"(", res);
    if (l>r) func(l, r+1, n, save+")", res);
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string save;
        func(0, 0, n, save,res);
        return res;
    }
};