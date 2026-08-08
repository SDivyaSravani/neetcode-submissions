class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int low = 1;
        int high = n-2;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid]>nums[mid-1]) low = mid+1;
            else if(nums[mid]<nums[mid-1]) high = mid-1;
            else low=mid+1; // or high = mid-1; edge case for 1 5 1 2 1 mid is 1 left and right both are greater so in this case the else will execute
        }
        return -1;
    }
};