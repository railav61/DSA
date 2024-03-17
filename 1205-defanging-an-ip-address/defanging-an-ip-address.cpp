class Solution {
public:
    string defangIPaddr(string address) {
        string s = "[.]";
        int n = address.size();
        int i = 0;
        while(i!=n){
            if(address[i]=='.'){
                address.replace(i,1,s);
                n =  address.size();
                i = i+2;
            }
            else{
                i++;
            }
        }
        return address;
    }
};