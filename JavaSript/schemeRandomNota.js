const schemeTransactionNumber = (id) => {
  let data = parseInt(id, 10);

  const a = 'abcdefghijklmnopqrstuvwxyz123456789'.toUpperCase().split("")

  let result = ''

  while(true) {
    if(data > 35) {
      const temp = data % 35;
      if(data % 35 === 0) {
        result = result.concat(a[34])  
        data = parseInt(data/35, 10) - 1
      } else {
        result = result.concat(a[temp - 1])
        data = parseInt(data/35, 10)
      }
    } else {
      result = result.concat(a[data - 1])
      break;
    }
  }

  return result.split("").reverse("").join("");
}

const createSchemeNumber = (prefix = 'INV', id = '1', suffix = 'DWN') => 
`${prefix}/${schemeTransactionNumber(id)}/${suffix}`

export { createSchemeNumber };

//example
console.log(createSchemeNumber()); // => INV/A/DWN
console.log(createSchemeNumber('INV', 100)) // => INV/A/DWN

//sandbox
//https://codesandbox.io/s/thirsty-liskov-renhi?file=/src/index.js