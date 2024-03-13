class Solution {
public:
    int pivotInteger(int n) {
        // vector<int> a;
        int a[n];
        int x=0,y=0;
        if(n==1){
            return 1;
        }
        for(int i=0;i<n;i++){
            a[i] = i+1;
        }
        for(int i=0;i<n;i++){
            x+=a[i];
            for(int j=i;j<n;j++){
                y+=a[j];
            }
            if(x==y){
                return a[i];
            }
            y=0;
        }
        return -1;
    }
};