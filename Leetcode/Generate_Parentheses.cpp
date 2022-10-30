class Solution {
public:
    vector<string> ans;
    void parenthesis(string s,int open,int close){
        if(open==0 && close==0){
             ans.push_back(s);
        }
        if(open>0){
            s+='(';
            parenthesis(s,open-1,close);
            s.pop_back();
        }
        if(close>0){
            if(open<close){
                s+=")";
                parenthesis(s,open,close-1);
                s.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        // vector<string> ans;
        string s="";
        parenthesis(s,n,n);
        return ans;
    }
};
