class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0,j=0;

        while(i <word.size() && j<abbr.size()){
            if(abbr[j]=='0')return false;
            if((abbr[j]-'0')>=0 &&(abbr[j]-'0')<=9 ){
                int num = 0;
                while((abbr[j]-'0')>=0 &&(abbr[j]-'0')<=9){
                    num = num*10 + (abbr[j]-'0');
                    j++;
                }
                i+=num;
            }
            else if(word[i] != abbr[j])return false;
            else{
                i++;
                j++;
            }
        }
        return i==word.size() && j==abbr.size();
    }
};