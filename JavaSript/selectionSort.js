let array = [19, 23, 21, 31, 12]
let final_array = []

while(array.length>0) {  
	let min = Math.min(...array)
	let index = array.indexOf(min);
	final_array.push(min)
  array.splice(index,1)
}
 
console.log(final_array)
