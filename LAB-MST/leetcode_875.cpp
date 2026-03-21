class Solution {
public:
    long long check(vector<int>&piles,int k){
        long long hours = 0;
        for(int p : piles){
            hours += (p + k - 1) / k;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {   
        int left = 1;
        int right = *(max_element(piles.begin(),piles.end()));
        int ans = 0;
        while(left<= right){
            int mid = left + (right-left)/2;
            if(check(piles,mid) <= h){
                ans = mid;
                right = mid-1;
            } 
            else left = mid+1;
        }
        return ans;
    }
};
