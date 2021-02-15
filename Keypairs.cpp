//User function template for C++
class Solution{
public:	
    
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {

    unordered_map<int,int> map;
 
   
    for (int i = 0; i < n; i++)
    {
      
        if (map.find(x - arr[i]) != map.end())
        {
            return true;
        }

        map[arr[i]] = i;
    }
 
   return false;
	}
};
