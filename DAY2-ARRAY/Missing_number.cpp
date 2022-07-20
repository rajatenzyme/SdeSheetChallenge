int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n) * (n+1) / 2;
        int arrSum = accumulate(nums.begin(), nums.end(), 0);
        
        return sum - arrSum;
    }   