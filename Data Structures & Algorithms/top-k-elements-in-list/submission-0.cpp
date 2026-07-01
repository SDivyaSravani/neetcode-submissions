class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        string s = "";
        vector<int>result;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> v(mpp.begin(), mpp.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        for(int i=0;i<k;i++){
            result.push_back(v[i].first);
        }
        return result;
    }
};
