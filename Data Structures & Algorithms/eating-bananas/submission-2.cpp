class Solution {
public:

    long long Total_Hrs(vector<int>& piles, int h,int mid){
        int n = piles.size();
        int totalHrs = 0;
        for(int i=0;i<n;i++){
            totalHrs += ceil(double(piles[i])/double(mid));
        }
        return totalHrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(),piles.end());
        int low = 1;
        int ans = high;
        while(low<=high){
            long long mid = (low+high)/2;
            long long total = Total_Hrs(piles,h,mid);
            if(total<=h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
