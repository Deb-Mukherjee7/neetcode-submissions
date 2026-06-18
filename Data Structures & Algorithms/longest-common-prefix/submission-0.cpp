class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string start = strs[0];
        string end = strs[strs.size()-1];
        string ans="";
        int longest=0;

        int i=0,j=0;

       while(i<start.size() && j<end.size()){
            if(start[i]!=end[j])break;
            else longest++;

            i++;
            j++;
       }

        ans=start.substr(0,longest);
        return ans;
    }
};