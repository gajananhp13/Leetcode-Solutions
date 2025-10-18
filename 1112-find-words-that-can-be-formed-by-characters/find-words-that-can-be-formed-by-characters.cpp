class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        

        vector<int> charcount(26,0);
        for( char &ch : chars)
        {
            charcount[ch-'a']++;
        }
// check if the word string is good or not 

        int result =0;
      
        for(string &word : words)
        {
         vector<int> wordcount(26,0);
        for( char &ch : word)
        {
            wordcount[ch-'a']++;
        }
        bool ok=true;
        for(int i=0;i<26;i++)
        {
            if(charcount[i]<wordcount[i])
          {  ok=false;
            break;
            }
        }
        if(ok==true) result+=word.length();
        }
        return result;
    }
};