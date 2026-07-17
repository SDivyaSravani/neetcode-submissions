class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;

        int n1 = s.length();
        int n2 = t.length();
        if(n1!=n2){
            return false;
        }
        for(int i=0;i<n1;i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
        }
        for(auto r:mpp){
            if(r.second!=0) return false;
        }

        return true;
    }
};
