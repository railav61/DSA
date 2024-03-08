class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int c = 1;
        vector <int> v;
        int s = nums.size();
        for(int i = 0;i<s;i++){
            for(int j=i+1;j<s;j++){
                if(nums[i]==nums[j]){
                    c++;
                    nums[j]==-1;
                }
            }
            nums[i] == -1;
            v.push_back(c);
            c=1;
        }
        int m = *max_element(v.begin(),v.end());
        int s2 = v.size();
        int x=0;
        for(int i=0;i<s2;i++){
            if(v[i]==m){
                x=x+v[i];
            }
        }
        return x;
    }
};