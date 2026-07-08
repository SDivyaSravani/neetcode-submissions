class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=1;i<=n;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                return i;
            }
        }
    }
};