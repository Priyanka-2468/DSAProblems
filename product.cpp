class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n = nums.size();
        if(n==0 || n==1) return {};
        vector<int> pref(n);
        int pro=1;
        for(int i =0;i<n;i++){
            pref[i]=pro;
            pro*=nums[i];
        }
        pro=1;
        // for(auto val : pref) cout<<val<<" ";
        for(int i =n-1;i>=0;i--){
            pref[i]*=pro;
            pro*=nums[i];
        }
        return pref;
    }
};