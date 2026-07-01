class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        bool dup = false;
        for(int i=0;i<n-1;i++){
            int e = nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j] == e){
                    dup = true;
                    break;
                }
            }
        }
        return dup;
    }
};