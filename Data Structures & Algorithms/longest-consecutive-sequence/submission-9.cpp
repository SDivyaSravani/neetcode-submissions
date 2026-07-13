class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int maxLen = 0;
        for(int i=0;i<n;i++){
            int cnt = 1;
            if(st.find(nums[i]-1)!=st.end()){
                continue;
            }else{
                int x = nums[i];
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x = x+1;
                }
                maxLen = max(maxLen,cnt);
            }
        }
        return maxLen;
    }
};
