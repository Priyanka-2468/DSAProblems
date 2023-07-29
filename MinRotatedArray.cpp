class Solution {
public:
    int findMin(vector<int>& nums) {
      int start=0,end=nums.size()-1; 
      int mid; 
      if(nums[start]<=nums[end]){
          return nums[start];
      }
      while(start<end){
          mid=(start+end)/2;
          if(nums[mid]>=nums[0]){
              start=mid+1;
          }
          else
          end=mid;
      }
      return nums[start];
    }
};