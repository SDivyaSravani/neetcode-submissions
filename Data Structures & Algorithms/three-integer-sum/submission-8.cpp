class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = n-1;
            while(j<k){
                long long s = nums[i]+nums[j];
                s += nums[k];
                if(s==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j>k && nums[j]==nums[j-1]){j++;} 
                    while(j<k && nums[k]==nums[k+1]) {k--;}
                }
                
                if(s>0){
                    k--;
                }
                if(s<0){
                    j++;
                }
            }
        }
        return res;
    }
};
