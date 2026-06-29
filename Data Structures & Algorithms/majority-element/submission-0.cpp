class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int result;
        for(int i=0;i<n;i++){
            if(cnt==0){
                result = nums[i];
                cnt = 1;
            }else if(nums[i]==result){
                cnt++;
            }else{
                cnt--;
            }
        }
        return result;
    }
};