class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long res = 1;
        vector<int>ans;
        ans.push_back(res);
        for(int i=0;i<rowIndex;i++){
            res = res*(rowIndex-i)/(i+1);
            ans.push_back(res);
        }
        return ans;
    }
};