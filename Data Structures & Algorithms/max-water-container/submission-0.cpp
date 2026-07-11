class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;
        int leftMax = 0;
        int rightMax = 0;
        int ans = 0;
        while(left<right){
            if(heights[left] <= heights[right]){
                leftMax = max(leftMax,heights[left]);
                ans = max(ans,leftMax*(right-left));
                left++;
            }
            if(heights[right] <= heights[left]){
                rightMax = max(rightMax,heights[right]);
                ans = max(ans,rightMax*(right-left));
                right--;
            }
        }
        return ans;
    }
};
