class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int swap_count = 0;
        int n = heights.size();
        for(int i=0;i<n-1;i++){
            int maxi = i;
            for(int j=i+1;j<n;j++){
                if(heights[j]>heights[maxi]){
                    maxi = j;
                }
            }
            if(maxi != i){
                swap_count += 1; 
                swap(names[i], names[maxi]);
                swap(heights[i], heights[maxi]);
            }
        }
        return names;
    }
    
};