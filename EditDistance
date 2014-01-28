//============================================================================
// Given two words word1 and word2, find the minimum number of steps required
// to convert word1 to word2. (each operation is counted as 1 step.)
//
// You have the following 3 operations permitted on a word:
//
// a) Insert a character
// b) Delete a character
// c) Replace a character
//============================================================================

class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int> > res(word1.length()+1, vector<int>(word2.length()+1, 0));
        for(int i=1;i<=word1.length();i++) res[i][0]=i;
        for(int j=1;j<=word2.length();j++) res[0][j]=j;
        for(int i=0;i<word1.length();i++) {
            for(int j=0;j<word2.length();j++) {
                res[i+1][j+1]=min(min(res[i][j], res[i+1][j]), res[i][j+1])+1;
                if (word1[i]==word2[j]) res[i+1][j+1]=min(res[i+1][j+1], res[i][j]);
            }
        }
        return res[word1.length()][word2.length()];
    }
};