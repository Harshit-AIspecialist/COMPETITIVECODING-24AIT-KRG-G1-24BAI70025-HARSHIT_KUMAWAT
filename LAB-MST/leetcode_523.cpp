class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        int check = 0;        
        for(int i = 0; i < nums.size(); i++){
            
            check = (check + nums[i])%k;          
            if(mp.find(check) != mp.end()){
                if(i-mp[check]>=2) return true;
            }
            else mp[check] = i;
        }
        return false;
    }
};
