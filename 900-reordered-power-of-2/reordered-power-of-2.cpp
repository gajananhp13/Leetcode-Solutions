class Solution {
public:
//appraoch 1 where we sort all the numbers into string format and check with the input of the converted string number wheather all the digits are in the power of two digit or not 


    bool reorderedPowerOf2(int n) {
    string n1=to_string(n);
    sort(n1.begin(),n1.end());
    for (int i=0;i<=29;i++)
    {
        string n2=to_string(1 << i);
        sort(n2.begin(),n2.end());
        if(n1==n2)
        return true;
    }
return false;
    }
};