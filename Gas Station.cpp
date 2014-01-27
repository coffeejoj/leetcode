//============================================================================
// There are N gas stations along a circular route, where the amount of gas
// at station i is gas[i].
//
// You have a car with an unlimited gas tank and it costs cost[i] of gas to
// travel from station i to its next station (i+1). You begin the journey
// with an empty tank at one of the gas stations.
//
// Return the starting gas station's index if you can travel around the
// circuit once, otherwise return -1.
//
// Note:
// The solution is guaranteed to be unique.
//
// Complexity:
// O(n)
//============================================================================

class Solution {
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int total=0; int sum=0; int index=0;
        for(int i=0;i<gas.size();i++) {
            total+=gas[i]-cost[i];
            sum+=gas[i]-cost[i];
            if(sum<0) { sum=0; index=i+1;}
        }
        if (total<0) return -1;
        else return index;
    }
};