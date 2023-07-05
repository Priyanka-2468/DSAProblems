class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int n=nums.size();
      
       sort(nums.begin(),nums.end());
          for(int j=0;j<n;j++)
          {
           if(nums[j]==nums[j+1])
           {  
            return nums[j];
            break;
            }      
          }
      
     return 0;     
    }
};