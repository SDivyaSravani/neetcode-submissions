class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        string s = "";
        bool a = true;
        for(int i=0;i<m;i++){
            char c = strs[0][i];
            for(int j=0;j<n;j++){
                if(c!=strs[j][i]) a = false;
            }
            if(a==false) break;
            s = s + c;
        }
        return s;
    }
};