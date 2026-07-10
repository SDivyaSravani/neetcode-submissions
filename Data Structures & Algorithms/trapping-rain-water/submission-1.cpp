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
            if(leftMax < height[left]){
                leftMax = height[left];
            }
            ans = ans + leftMax - height[left];
            if(rightMax < height[right]){
                rightMax = height[right];
            }
            ans = ans + rightMax - height[right];
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};
