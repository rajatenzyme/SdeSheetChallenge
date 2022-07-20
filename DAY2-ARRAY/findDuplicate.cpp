#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	
    unordered_map<int, int> mp;
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    for(auto it : mp){
        if(it.second >= 2)
            return it.first;
    }
}


//Another -  Better 
// TimeO(N)
// SpaceO(1)

#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	
    int slow = arr[0], fast = arr[arr[0]];
    
    while(slow!=fast){
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    
    fast = 0;
     while(slow!=fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    
    return slow;
    
}
