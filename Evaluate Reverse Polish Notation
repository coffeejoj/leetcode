//============================================================================
// Evaluate Reverse Polish Notation
//
// Evaluate the value of an arithmetic expression in Reverse Polish Notation.
//
// Valid operators are +, -, *, /. Each operand may be an integer or another
// expression.
//
// Some examples:
// ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
// ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6
//============================================================================

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++) {
            if (tokens[i]=="+") {
                if (st.size()<2) return 0;
                int b=st.top(); 
                st.pop();
                int a=st.top();
                st.pop();
                st.push(a+b);
            } else if (tokens[i]=="-") {
                if (st.size()<2) return 0;
                int b=st.top(); 
                st.pop();
                int a=st.top();
                st.pop();
                st.push(a-b);
            } else if (tokens[i]=="*") {
                if (st.size()<2) return 0;
                int b=st.top(); 
                st.pop();
                int a=st.top();
                st.pop();
                st.push(a*b);
            } else if (tokens[i]=="/") {
                if (st.size()<2) return 0;
                int b=st.top(); 
                st.pop();
                int a=st.top();
                st.pop();
                st.push(a/b);
            } else {
                st.push(atoi(tokens[i].c_str()));
            }
        }
        return st.top();
    }
};
