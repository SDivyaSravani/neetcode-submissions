class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>arr;
        for(int i=0;i<numRows;i++){
            vector<int>a;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    a.push_back(1);
                }else{
                    a.push_back(arr[i-1][j-1]+arr[i-1][j]);
                }
            }
            arr.push_back(a);
        }
        return arr;
    }
};