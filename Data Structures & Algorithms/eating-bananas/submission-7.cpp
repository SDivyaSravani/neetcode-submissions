class Solution {
public:

    int Count_max_bananas_perHr(vector<int>& piles, long long mid){
        int n = piles.size();
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + ceil((double)(piles[i])/mid);
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = *max_element(piles.begin(),piles.end());
        int ans = high;
        while(low<=high){
            long long mid = (low+high)/2;
            int check_hrs = Count_max_bananas_perHr(piles,mid);
            if(check_hrs<=h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
