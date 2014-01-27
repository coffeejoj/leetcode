//============================================================================
// The count-and-say sequence is the sequence of integers beginning as follows:
// 1, 11, 21, 1211, 111221, ...
//
// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
// Given an integer n, generate the nth sequence.
//
// Note: The sequence of integers will be represented as a string.
//============================================================================

string func(int n)
{
    if (n==1) return "1";
    string re;
    string received = func(n-1);
    int cnt=0;
    for(int i=0;i<received.length();i++) {
        if(i-1>=0 && received[i]!=received[i-1]) {
            re+=std::to_string(cnt)+received[i-1];
            cnt=1;
        } else cnt++;
    }
    if (cnt!=0) {
        re+=std::to_string(cnt)+received[received.length()-1];
    }
    return re;
}

class Solution {
public:
    string countAndSay(int n) {
        return func(n);
    }
};