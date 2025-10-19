class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> maghash;
        for(char c :magazine)
       { maghash[c]++;}
       for (char c : ransomNote)
       {
        if(maghash[c]<=0){
            return false;
        }
        maghash[c]--;
       }
return true;
    }
};