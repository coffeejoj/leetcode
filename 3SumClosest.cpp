//============================================================================
// Given an array S of n integers, find three integers in S such that the sum
// is closest to a given number, target. Return the sum of the three integers.
// You may assume that each input would have exactly one solution.
//
// For example, given array S = {-1 2 1 -4}, and target = 1.
//
// The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
//
// Complexity: O(n^2) time
//============================================================================

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int res=0; int close=INT_MAX;
        sort(num.begin(), num.end());
        for(int i=0;i<num.size()-2;i++) {
            int l=i+1; int r=num.size()-1;
            while(l<r) {
                int sum=num[i]+num[l]+num[r];
                if(abs(sum-target)<close) {
                    res=sum; close=abs(sum-target);
                }
                if (sum<target) l++;
                else r--;
            }
        }
        return res;
    }
};