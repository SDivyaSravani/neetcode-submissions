class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        unordered_map<int,int>mpp;
        mpp.reserve(n);
        for(int i=0;i<n;i++){
            int d = target - nums[i];
            if(mpp.find(d)!=mpp.end()){
                return {mpp[d],i};
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
    }
};
