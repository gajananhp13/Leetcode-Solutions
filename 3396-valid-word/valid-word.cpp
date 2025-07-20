class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if (n < 3) return false;
        int vowels = 0;
        int consonants = 0;
        for (char c : word) {
            if (!isalnum(c)) return false; 
            char lower = tolower(c); 

            if (isalpha(lower)) {
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        return vowels >= 1 && consonants >= 1;
    }
};

