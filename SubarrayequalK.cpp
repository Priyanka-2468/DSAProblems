class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int n=nums.size();
      int ans=0;
      for(int i=0;i<n;i++)
      {
          int sum=nums[i];
          if(sum==k){
              ans++;
          }
          for(int j=i+1;j<n;j++){
              sums+=nums[j];
              if(sum==k){
                  ans++;
              }
          }
      }
      return ans++;  
    }
};