class Solution {
public:
int sumdig(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
    int countLargestGroup(int n) {
        unordered_map<int,int> mp;
        int maxsize=0,count=0;
        for(int num=1;num<=n;num++)
        {
           int digitsum=sumdig(num);
            mp[digitsum]++;
            if(mp[digitsum]== maxsize){
                    count++;
            }
            else if (mp[digitsum]> maxsize){
                  maxsize=mp[digitsum];
                  count=1;
            }
        }
        return count;
    }
};