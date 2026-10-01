class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a=strs[0];string b=strs[strs.size()-1];
        string common="";
        for(int i=0;i<b.size();i++){
            if(b[i]==a[i]){
                common+=b[i];
            }
            else break;
        }
        return common;
    }
};