class Solution {
public:

bool asc(char c)
{
    return ((c>=65 && c<=90)  || (c>=97 && c<=122));
}
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int left=0,right=n-1;
        while(left<=right){
            
            if(asc(s[left]) && asc(s[right]))
           { swap(s[left],s[right]);
           left++;
           right--;
           }
            else if (!asc(s[left])) {left++;}
            else right--;
        }
    return s;
    }
};