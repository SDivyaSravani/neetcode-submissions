class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int res = INT_MAX;
        for(int i=0;i<n;i++){
            if(mpp.find(nums[i])==mpp.end()){
                mpp[nums[i]] = i;
            }else{
                res = min(res,abs(i-mpp[nums[i]]));
                mpp[nums[i]] = i;
            }
        }
        if(res<=k) return true;
        else return false;
    }
};