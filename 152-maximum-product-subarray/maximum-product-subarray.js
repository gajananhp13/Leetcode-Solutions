/**
 * @param {number[]} nums
 * @return {number}
 */

var maxProduct = function(nums) {
     let prefix=1,suffix=1;
     let res=-Infinity;
     let n= nums.length;
     for(let i = 0 ;i< n;i++){
        prefix*=nums[i];
        suffix*=nums[n-1-i];
        res=Math.max(res,prefix,suffix)
        if(prefix === 0)
        prefix=1;
        if(suffix === 0)
        suffix=1;
     }
     return res;
};