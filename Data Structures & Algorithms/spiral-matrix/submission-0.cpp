class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ans;
        int left=0,right=m-1,top=0,bottom=n-1;
        while(left<=right && top<=bottom) {
            for(int i=left;i<=right;i++) {
                ans.push_back(matrix[top][i]);
            }
            for(int j=top+1;j<=bottom;j++) {
                ans.push_back(matrix[j][right]);
            }
            if(top<bottom) {
                for(int i=right-1;i>=left;i--) {
                    ans.push_back(matrix[bottom][i]);
                }
            }
            if(left<right) {
                for(int j=bottom-1;j>top;j--) {
                    ans.push_back(matrix[j][left]);
                }
            }
            left++;
            top++;
            right--;
            bottom--;
        }
        return ans;
    }
};
