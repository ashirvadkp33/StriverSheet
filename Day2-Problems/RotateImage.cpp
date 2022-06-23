//https://leetcode.com/problems/rotate-image/submissions/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=i;j<m;j++){
               if(i==j)
                   continue;
                else {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        int l=0,h=m-1;
        for(int i=0;i<n;i++){
            while(l<=h){
                swap(matrix[i][l],matrix[i][h]);
                l++;
                h--;
            }
            l=0;
            h=m-1;
        }
    }
};
