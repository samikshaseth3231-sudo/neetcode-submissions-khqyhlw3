class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int low=0,high=n-1;
        int maxwater=0,currwater;
        while(low<high) {
            int width=high-low;
            int ht=min(height[low],height[high]);
            currwater=width*ht;
            maxwater=max(maxwater,currwater);
            height[low]<height[high]?low++:high--;
        }
        return maxwater;
    }
};
