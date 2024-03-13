class Solution {
public:
    int pivotInteger(int n) {
        vector<int> a;
        vector<int> b;
        int x=0,y=0;
        if(n==1){
            return 1;
        }
        for(int i=0;i<n;i++){
            a.push_back(i+1);
        }
        b=a;
        for(int i=1;i<n;i++){
            a[i]+=a[i-1];
        }
        for(int i=n-2;i>=0;i--){
            b[i]+=b[i+1];
        }
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                return i+1;
            }
        }
        return -1;
    }
};