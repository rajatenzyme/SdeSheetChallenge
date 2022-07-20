vector<vector<int>> generate(int n) {
        
        //Vector of Size n
        vector<vector<int>> ans(n);
        
        for(int i=0;i<n;i++){
            // nth row will have n elements
            // So resizing every row of vector according to it's size
            
            ans[i].resize(i+1);
            
            
            // first and last element will be 1 only
            ans[i][0] =1;
            ans[i][i] = 1;
            
            // Now according to pattern adding the values
            for(int j = 1; j < i;j++){
                    ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
        
    }