class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int leftMax = 0;
        int rightMax = 0;
        int ans = 0;
        while(left<right){
            if(height[left]<=height[right]){
                leftMax = max(leftMax,height[left]);
                ans = ans + leftMax-height[left];
                left++;
            }
            if(height[right]<=height[left]){
                rightMax = max(rightMax,height[right]);
                ans = ans + rightMax-height[right];
                right--;
            }
        }
        return ans;
    }
};
