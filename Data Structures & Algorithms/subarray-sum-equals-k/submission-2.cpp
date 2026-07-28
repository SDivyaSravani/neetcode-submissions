class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int cnt=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
            if(sum==k){
                cnt++;
                if(mpp.find(sum-k) != mpp.end()){
                    cnt = cnt + mpp[sum-k];
                }
            }else{
                if(mpp.find(sum-k) != mpp.end()){
                    cnt = cnt + mpp[sum-k];
                }
            }
            mpp[sum]++;
        }
        return cnt;
    }
};