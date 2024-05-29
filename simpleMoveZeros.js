function moveZeros(arr) {
    
    let Arr1 =  arr.filter ( el => el === 0)
                   
    let Arr2 = arr.filter (el => el !== 0)
  
  
    let Arr3 = Arr2.concat(Arr1)
  
  return Arr3;
  }
