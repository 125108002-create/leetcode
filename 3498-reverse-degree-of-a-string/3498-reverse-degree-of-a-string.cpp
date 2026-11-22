class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int a='z'-s[i]+1;
            sum +=a*(i+1);
        }
        return sum;
    }
};