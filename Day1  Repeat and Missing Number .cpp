/*

Bit manipulation
When a number is is Xor to itselfthe result is 0
So by XORing it to the index we can find the number which is missing

Time: O(n)
Space: O(1)

*/



int missingNumber(vector<int>& nums) {
        
      int missing = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            missing ^= i ^ nums[i];
        }
        return missing; 
    }
