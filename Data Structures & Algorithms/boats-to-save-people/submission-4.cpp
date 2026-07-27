class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        if(n<=1) return n;
        int i = 0;
        int j = n-1;
        int cnt = 0;
        while(i<=j){
            if(people[j]==limit){
                cnt = cnt+1;
                j--;
            }else if((people[i]+people[j]) <= limit){
                cnt = cnt+1;
                i++;
                j--;
            }else if((people[i]+people[j]) > limit){
                cnt = cnt+1;
                j--;
            }else if(i==j && people[i]<limit){
                cnt = cnt+1;
                i++;
                j--;
            }
        }
        return cnt;
    }
};