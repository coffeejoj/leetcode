//============================================================================
// 4Sum
// Given an array S of n integers, are there elements a, b, c, and d in S such
// that a + b + c + d = target?
// Find all unique quadruplets in the array which gives the sum of target.
// Note:
// Elements in a quadruplet (a,b,c,d) must be in non-descending order.
// (ie, a ¡Ü b ¡Ü c ¡Ü d)
// The solution set must not contain duplicate quadruplets.
// For example, given array S = {1 0 -1 0 -2 2}, and target = 0.
// A solution set is:
// (-1, 0, 0, 1)
// (-2, -1, 1, 2)
// (-2, 0, 0, 2)
//
// Complexity: O(n^3) time
//============================================================================

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        vector<vector<int> >res;
        if (num.size()<4) return res;
        sort(num.begin(), num.end());
        for(int i=0;i<num.size()-3;i++) {
            for(int j=i+1;j<num.size()-2;j++) {
                int k=j+1; int l=num.size()-1;
                while(k<l) {
                    int sum=num[i]+num[j]+num[k]+num[l];
                    if (sum==target) {
                        vector<int> tmp;
                        tmp.push_back(num[i]);
                        tmp.push_back(num[j]);
                        tmp.push_back(num[k]);
                        tmp.push_back(num[l]);
                        res.push_back(tmp);
                        while(k+1<l && num[k]==num[k+1]) k++;
                        while(l-1>k && num[l]==num[l-1]) l--;
                        k++;l--;
                    }
                    if (sum<target) k++;
                    else if (sum>target) l--;
                }
                while(j+1<num.size()-2 && num[j]==num[j+1]) j++;
            }
            while(i+1<num.size()-3 && num[i]==num[i+1]) i++;
        }
        return res;
    }
};