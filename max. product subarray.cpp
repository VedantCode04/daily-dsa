https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/1

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long maxi = INT_MIN;
	    long long prefix = 1, suffix = 1;
	    
	    for(int i = 0; i < n; i++){
	        prefix *= arr[i];
	        suffix *= arr[n-i-1];
	        
	        maxi = max(maxi, max(prefix, suffix));
	        
	        if(prefix == 0) prefix = 1;
	        if(suffix == 0) suffix = 1;
	    }
	    
	    return maxi;
	}
};
