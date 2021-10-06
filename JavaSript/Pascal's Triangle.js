/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
    let outer=[];
    let first_row=[1];
    outer.push(first_row);
    for(let i=1;i<numRows;i++){
        
        let prev=outer[i-1];
        let current=[1];
        for(let j=1;j<i;j++){
            current.push(prev[j-1]+prev[j]);
        }
        current.push(1);
        outer.push(current);
    }
    return outer;
};
