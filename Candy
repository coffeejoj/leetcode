//============================================================================
// There are N children standing in a line. Each child is assigned a rating
// value.
//
// You are giving candies to these children subjected to the following
// requirements:
//
// Each child must have at least one candy.
// Children with a higher rating get more candies than their neighbors.
// What is the minimum candies you must give?
//
// Complexity:
// O(n)
//============================================================================

class Solution {
public:
    int candy(vector<int> &ratings) {
        int res=0;
        vector<int> save(ratings.size(), 1);
        int k=1;
        for(int i=0;i<ratings.size();i++) {
            if(i-1>=0 && ratings[i-1]<ratings[i]) save[i]=max(++k, save[i]);
            else k=1;
        }
        k=1;
        for(int i=ratings.size()-1;i>=0;i--) {
            if(i+1<ratings.size() && ratings[i]>ratings[i+1]) save[i]=max(++k, save[i]);
            else k=1;
        }
        for(int i=0; i<ratings.size();i++) {
            res+=save[i];
        }
        return res;
    }
};