//============================================================================
// Decode Ways
// A message containing letters from A-Z is being encoded to numbers using
// the following mapping:
//
// 'A' -> 1
// 'B' -> 2
// ...
// 'Z' -> 26
// Given an encoded message containing digits, determine the total number of
// ways to decode it.
//
// For example,
// Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12).
//
// The number of ways decoding "12" is 2.
//============================================================================

class Solution {
public:
    int numDecodings(string s) {
        if (s.length()==0) return 0;
        vector<int> save(s.length()+1, 0);
        if(s[0]=='0') return 0;
        save[0]=1;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='0') {
                if (save[i+1]==0) return 0;
                else continue;
            }
            save[i+1]+=save[i];
            if(s[i]=='1' && i+1<s.length())save[i+2]+=save[i];
            if(s[i]=='2' && i+1<s.length() && s[i+1]>='0' && s[i+1]<='6') save[i+2]+=save[i];
        }
        return save[s.length()];
    }
};