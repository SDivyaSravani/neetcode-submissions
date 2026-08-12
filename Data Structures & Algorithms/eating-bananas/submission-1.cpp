class Solution {
public:

    long long Calculate_Total(vector<int>&arr,int hour ,int n){
        long long total = 0;
        for(int i=0;i<n;i++){
            total += ceil((double)arr[i]/(double)hour);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = 1;
        while(low<=high){
            long long mid = (low+high)/2;
            long long total_hrs = Calculate_Total(piles,mid,n);
            if(total_hrs<=h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
