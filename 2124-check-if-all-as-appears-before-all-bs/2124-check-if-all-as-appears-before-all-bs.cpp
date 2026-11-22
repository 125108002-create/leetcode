class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        int index_a,index_b;
        index_a=-1;
        index_b=-1;
        for ( int i=0 ; i < n;i++)
        {
            if(s[i]=='a')
            {
                index_a=i;
            }
            if(s[i]=='b'&& index_b==-1)
            {
                index_b=i;
            }
        }
        if(index_a==-1||index_b==-1) return true;
        if(index_a>index_b) return false;
        return true;
    }
};