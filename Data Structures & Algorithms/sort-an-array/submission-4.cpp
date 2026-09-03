class Solution {
public:

    void merge_both(vector<int>& nums,int low,int mid,int high){
        vector<int>temp;
        int l = low;
        int r = mid+1;
        while(l<=mid && r<=high){
            if(nums[l]<=nums[r]){
                temp.push_back(nums[l]);
                l++;
            }else{
                temp.push_back(nums[r]);
                r++;
            }
        }
        while(l<=mid){
            temp.push_back(nums[l]);
            l++;
        }
        while(r<=high){
            temp.push_back(nums[r]);
            r++;
        }
        for(int i=low;i<=high;i++){
            nums[i] = temp[i-low];
        }
    }

    void merge_sort(vector<int>& nums,int low,int high){
        if(low>=high) return;
        int mid = (low+high)/2;
        merge_sort(nums,low,mid);
        merge_sort(nums,mid+1,high);
        merge_both(nums,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        merge_sort(nums,low,high);
        return nums;
    }
};