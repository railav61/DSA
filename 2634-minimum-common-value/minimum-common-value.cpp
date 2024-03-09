class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();
        int x=0,y=0;
        while(x<a && y<b){
            if(nums1[x] == nums2[y]){
                return nums1[x];
            }
            if(nums1[x]<nums2[y]){
                x++;
            }
            else{
                y++;
            }
        }
        return -1;
    }
};