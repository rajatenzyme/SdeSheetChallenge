bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int low = 0, high = n * m - 1;
        
        while(low<=high){
            int mid = low + (high - low)/2;
            
            int row = mid / m;
            int col = mid % m;
            
            if(matrix[row][col] == target)
                return true;
            else if(target < matrix[row][col])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return false;
        
    }



        int n = matrix.size();
        int m = matrix[0].size();

        int i=0, j = m-1;
        
        while(i<n && j>=0){
            if(matrix[i][j] == target){
                return true;
            }
            else if(target < matrix[i][j]){
                j--;
            }
            else{
                i++;
            }
        }
        return false;