/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let val=init;
    for(let i=0;i<nums.length;i++)
        {
            if(val===undefined)
                {
                    val=fn(val,nums[i]);
                }
            else
                val=fn(val,nums[i]);
        }
    // if(num.length==0)return init;
    return val;
};