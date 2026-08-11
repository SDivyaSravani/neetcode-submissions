class Solution {
    public:

        int bs(vector<int>& nums,int low,int high, int target){
                if(low>high) return -1;
                        int mid = (low+high)/2;
                                if(nums[mid]==target) return mid;
                                        if(nums[mid]>target) return bs(nums,low,mid-1,target);
                                                else return bs(nums,mid+1,high,target);
                                                    }
                                                        int search(vector<int>& nums, int target) {
                                                                int n = nums.size();
                                                                        int low = 0;
                                                                                int high = n-1;
                                                                                        return bs(nums,low,high,target);
                                                                                            }
                                                                                            };

