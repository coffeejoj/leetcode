//============================================================================
// Given a set of candidate numbers (C) and a target number (T),
// find all unique combinations in C where the candidate numbers sums to T.
//
// The same repeated number may be chosen from C unlimited number of times.
//
// Note:
// All numbers (including target) will be positive integers.
// Elements in a combination (a1, a2, ¡­ ,ak) must be in non-descending order. (ie, a1 ¡Ü a2 ¡Ü ¡­ ¡Ü ak).
// The solution set must not contain duplicate combinations.
// For example, given candidate set 2,3,6,7 and target 7,
// A solution set is:
// [7]
// [2, 2, 3]
//============================================================================

void func(int index, vector<int> &num, int target, vector<int> &save, vector<vector<int> > &res)
{
    if(target<0) return;
    if(target==0){ res.push_back(save); return;}
    if(index>=num.size()) return;
    for(int i=index;i<num.size();i++) {
        for(int j=1;j<=target/num[i];j++) {
            for(int k=1;k<=j;k++)save.push_back(num[i]);
            func(i+1, num, target-j*num[i], save, res);
            for(int k=1;k<=j;k++) save.pop_back();
        }
    }
}

class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        vector<vector<int> >res;
        if(candidates.size()==0) return res;
        sort(candidates.begin(), candidates.end());
        vector<int> save;
        func(0, candidates, target, save, res);
        return res;
    }
};