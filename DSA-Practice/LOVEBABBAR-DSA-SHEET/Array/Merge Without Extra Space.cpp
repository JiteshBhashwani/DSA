//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
// } Driver Code Ends

class Solution{
    public:
        //Function to merge the arrays.

        void merge(long long nums1[], long long nums2[], int m, int n) 
        { 
            int i = 0;
            int j = m-1;
            while(i < n && j >= 0 && (nums1[j] > nums2[i]))
            {
                swap(nums1[j--],nums2[i++]);
            }
            sort(nums1,nums1+m);
            sort(nums2,nums2+n);
        }
};

//{ Driver Code Starts.
int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
// } Driver Code Ends