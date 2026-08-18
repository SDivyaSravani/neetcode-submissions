class Solution {
public:

    int daysRequired(vector<int>& weights, int capacity){
        int sum = 0;
        int days = 1;
        for(int weight:weights){
            sum = sum + weight;
            if(sum>capacity){
                sum = 0;
                sum += weight;
                days++;
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int res = low;
        while(low<=high){
            int mid = (low+high)/2;
            int no_of_days = daysRequired(weights,mid);
            if(no_of_days<=days){
                res = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
    }
};