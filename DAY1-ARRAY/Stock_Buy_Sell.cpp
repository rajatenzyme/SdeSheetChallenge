 int maxProfit(vector<int>& prices) {
        
//         int n = prices.size();
//         int mini = INT_MAX;
//         int profit = 0;
        
//         for(int i=0;i<n;i++){
//             mini = min(mini, prices[i]);
//             profit = max(profit, prices[i] - mini);
            
//         }
        
//         return profit;
        int n = prices.size();
        int arr[n];
        int max_from_right =  prices[n-1];
        
        arr[n-1] = -1;
        
       for(int i = n-2; i >= 0; i--)
          {
            // Store the current element (needed later for updating
            // the next greatest element)
            int temp = prices[i];

            // Replace current element with the next greatest
            arr[i] = max_from_right;

            // Update the greatest element, if needed
            if(max_from_right < temp)
               max_from_right = temp;
          }
 
        
        int profit = 0;
        
        
        for(int i=n-1;i>=0;i--){
            profit = max(profit, arr[i]- prices[i]);
        }
        

    return profit;
    }