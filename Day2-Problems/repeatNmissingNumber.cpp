//https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int m;
    int r;
    int visi[n+1]={0};
    
    for(int i=0;i<n;i++){
        visi[arr[i]]++;
    }
    
    for(int i=1;i<=n;i++){
        if(visi[i]==0)
            m=i;
        else if(visi[i]==2){
            r=i;
        }
        else continue;
    }
    pair<int,int>ans;
    ans.first=m;
    ans.second=r;
    return ans;
    
	
}
