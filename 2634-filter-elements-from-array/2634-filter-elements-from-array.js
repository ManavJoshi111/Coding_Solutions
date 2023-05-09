/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let ansar=[];
    for(let i=0;i<arr.length;i++)
        {
            if(fn(arr[i],i)){
                ansar=[...ansar,arr[i]];
            }
        }
    return ansar;
};