class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        bool dup = false;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto num:mpp){
            if(num.second>1){
                dup = true;
                break;
            }
        }
        return dup;
    }
};