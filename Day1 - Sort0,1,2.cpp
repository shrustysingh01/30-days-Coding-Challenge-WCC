/*
Sort an array of 0’s 1’s 2’s without using extra space or sorting algo 


Time: O(n)
Space: O(1)
Dutch Nation Flag Problem(3-way partioning).

*/


void sortColors(vector<int>& nums) {

        int i = 0,j = 0,k = nums.size()-1;
        
        while(i<=k){
            if(nums[i]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[k]);
                k--;
            }
            else{
                i++;
            }   
        }    
    }
