class Solution {
public:
    string customSortString(string order, string s) {
       int a = order.size();
        int b = s.size();
        char x;
        string s1="";
        int count=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(order[i]==s[j]){
                    count++;
                    s[j] = 'A';
                }
            }
            for(int k=0;k<count;k++){
                x = order[i];
                s1.push_back(x);
            }
            count = 0;
        }
        sort(s.begin(),s.end());
        for(int i=0;i<b;i++){
            if(s[i]=='A'){
                count++;
            }
        }
        s.erase(0,count);
        return s1+s;
    }
};