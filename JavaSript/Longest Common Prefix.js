/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
       let ans='';
    if(strs.length<=0) return ans;

    let first=strs[0];
    let j=0;
    for(let c of first){
        for(let i=1;i<strs.length;i++){
            if(j>=strs[i].length || c!=strs[i][j]){
                return ans;
            }
        }
        ans+=c;
        j++
        
    }
 return ans
};
