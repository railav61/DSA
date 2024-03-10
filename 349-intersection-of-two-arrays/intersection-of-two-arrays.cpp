class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int val;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        auto it1 = unique(nums1.begin(),nums1.end());
        auto it2 = unique(nums2.begin(),nums2.end());
        nums1.erase(it1,nums1.end());
        nums2.erase(it2,nums2.end());
        int x = nums1.size();
        int y = nums2.size();
        for(int i=0;i<x;i++){
            for(int j = 0;j<y;j++){
                if(nums1[i] == nums2[j]){
                    val = nums1[i];
                    v.push_back(val);
                }
            }
        }
        return v;
    }
};