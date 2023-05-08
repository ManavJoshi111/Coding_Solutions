/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let rarr=[];
    // console.log(arr.size);
    for(let i=0;i<arr.length;i++)
    {
        rarr=[...rarr,fn(arr[i],i)];
    }
    return rarr;
};