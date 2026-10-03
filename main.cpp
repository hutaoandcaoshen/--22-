class Solution {
    vector<string> res;
public:
    void dfs(int left,int right,string str)
    {
        if(left==0&&right==0)
        {
            res.push_back(str);
            return;
        }
        if(left>0)
        dfs(left-1,right,str+'(');
        if(right>left)
        dfs(left,right-1,str+')');
    }

    vector<string> generateParenthesis(int n) {
        dfs(n,n,"");

        return res;
    }
};