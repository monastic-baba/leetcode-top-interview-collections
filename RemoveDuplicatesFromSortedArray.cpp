class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 0;
        if(nums.size()==0) return res;
        
        // Solution 1
        
        // map<int, int> mp;
        // for(int i=0; i<nums.size(); i++){
        //     if(mp[nums[i]]==0){
        //         mp[nums[i]] = 1;
        //         nums[res] = nums[i];
        //         res++;
        //     }
        // }
        
        // Solution 2
        
        int i = 0;
        int curr = nums[i];
        while(i < nums.size()){
            while(i < nums.size() && nums[i]==nums[res]){
                i++;
            }
            res += 1;
            if(i < nums.size()){
                nums[res] = nums[i];
            }
        }
        return res;  
    }
};