class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int p=n+1;
        int visi[p];
        
         for(int i=0;i<p;i++){
            visi[i]=0;
        }
        
        for(int i=0;i<n;i++){
            visi[nums[i]]++;
        }
        int k;
        
        for(int i=1;i<=n;i++){
            if(visi[i]>1)
                k=i;
        }
        return k;
    }
};
