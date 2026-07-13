class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n);
        vector<int>rightArr(n);
        int p = 1;
        for(int i=n-1;i>=0;i--){
            rightArr[i] = p;
            p = p*nums[i];
        }
        int p1 = 1;
        for(int i=0;i<n;i++){
            result[i] = p1*rightArr[i];
            p1 = p1*nums[i];
        }
        return result;
    }
};
