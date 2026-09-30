class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(false);
cin.tie(NULL);
       int a=matrix.size();
       int b=matrix[0].size();
       int i=0;
       int j=b-1;
       while(i<=a-1 && j>=0){
        if(matrix[i][j]==target) return true;
        else if(matrix[i][j] > target) j--;
        else i++;
       }
    return false;
    }
};