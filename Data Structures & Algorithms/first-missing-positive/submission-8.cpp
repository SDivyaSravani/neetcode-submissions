class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>mpp;
        for(int i:nums){
            if(i>0){
                mpp.insert(i);
            }
        }

        for(int i=1;i<=n;i++){
            if(mpp.find(i)==mpp.end()){
                return i;
            }
        }
    }
};