int majorityElement(vector<int>& nums) {
        
        int votes = 0;
        int ele;
        
        for(int i=0;i<nums.size();i++){
            if(votes == 0)
                ele = nums[i];
            if(ele == nums[i])
                votes++;
            else
                votes--;  
        }
        
        return ele;
    }