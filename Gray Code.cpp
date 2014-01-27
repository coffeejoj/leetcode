//============================================================================
// The gray code is a binary numeral system where two successive values differ
// in only one bit.
//
// Given a non-negative integer n representing the total number of bits in the
// code, print the sequence of gray code. A gray code sequence must begin with
// 0.
//
// For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:
//
// 00 - 0
// 01 - 1
// 11 - 3
// 10 - 2
//============================================================================

class Solution {
public:
    vector<int> grayCode(int n) {  
        // Start typing your C/C++ solution below  
        // DO NOT write int main() function  
        vector<int> result;      
        result.push_back(0);  
        for(int i=0; i< n; i++)  
        {  
            int highestBit = 1<<i;  
            int len = result.size();  
            for(int i = len-1; i>=0; i--)  
            {  
                result.push_back(highestBit + result[i]);  
            }  
        }
        return result;
    }  
};

class Solution {
public:
    vector<int> grayCode(int n)   
    {   
        vector<int> ret;   
        int size = 1 << n;   
        for(int i = 0; i < size; ++i) ret.push_back((i >> 1)^i);   
        return ret;   
    }   
};