class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        unordered_set<int>s(nums1.begin(),nums1.end());
        unordered_set<int>res;
        for(auto num:nums2){
            if(s.count(num)){
                res.insert(num);
            }
        }
        vector<int> res1(res.begin(),res.end());
        return res1;
    }
};