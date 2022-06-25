//https://leetcode.com/problems/search-a-2d-matrix/submissions/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int tar) {
        int n=matrix.size();
        int m=matrix[0].size();
        //cout<<n<<" "<<m;
        int i=0,j=0;
        
       
        
        if(n==1)
        {
             for(int k=0;k<m;k++){
            if(matrix[i][k]==tar)
                return true;
                 
        }
            return false;
        }
            
        
        while(i<n && matrix[i][m-1]<tar )
            i++;
        
        if(i>=n)
            return false;
        
        for(int k=0;k<m;k++){
            if(matrix[i][k]==tar)
                return true;
        }
        return false;
    }
};
