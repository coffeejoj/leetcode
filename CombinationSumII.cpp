//============================================================================
// Given a collection of candidate numbers (C) and a target number (T),
// find all unique combinations in C where the candidate numbers sums to T.
//
// Each number in C may only be used once in the combination.
//
// Note:
// All numbers (including target) will be positive integers.
// Elements in a combination (a1, a2, ¡­ ,ak) must be in non-descending order. (ie, a1 ¡Ü a2 ¡Ü ¡­ ¡Ü ak).
// The solution set must not contain duplicate combinations.
// For example, given candidate set 10,1,2,7,6,1,5 and target 8,
// A solution set is:
// [1, 7]
// [1, 2, 5]
// [2, 6]
// [1, 1, 6]
//============================================================================

void func(int index, vector<int> &num, int target, vector<int> &save, vector<vector<int> > &res)
{
    if(target<0) return;
    if(target==0){ res.push_back(save); return;}
    if(index>=num.size()) return;
    for(int i=index;i<num.size();i++) {
        save.push_back(num[i]);
        func(i+1, num, target-num[i], save, res);
        save.pop_back();
        while(i+1<num.size() && num[i]==num[i+1]) i++;
    }
}

class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        vector<vector<int> >res;
        if(num.size()==0) return res;
        sort(num.begin(), num.end());
        vector<int> save;
        func(0, num, target, save, res);
        return res;
    }
};