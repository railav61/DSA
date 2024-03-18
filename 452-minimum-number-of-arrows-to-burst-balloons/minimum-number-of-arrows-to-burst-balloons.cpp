class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end());
        vector<int> prev= points[0];
        int count = 1;
        for(int i=1;i<n;i++){
            int curs = points[i][0];
            int cure = points[i][1];
            int prevs = prev[0];
            int preve = prev[1];
            if(curs>preve){
                count++;
                prev = points[i];
            }
            else{
                prev[0] = max(prevs,curs);
                prev[1] = min(preve,cure);
            }
        }
        return count;
    }
};