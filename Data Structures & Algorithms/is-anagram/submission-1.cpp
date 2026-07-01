class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        int n1 = s.length();
        int n2 = t.length();
        if(n1!=n2){
            return false;
        }
        for(auto ch:s){
            mpp1[ch]++;
        }
        for(auto ch:t){
            mpp2[ch]++;
        }
        return mpp1==mpp2;
    }
};
