class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        unordered_set<int>s;
        int i = 0;
        for(int i=0;i<n;i++){
            if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end()){
                s.insert(nums1[i]);
            }
        }
        vector<int> res(s.begin(),s.end());
        return res;
    }
};