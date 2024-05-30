function toWeirdCase(string){
    return string.replace(/(\w{1,2})/g,(m)=>m[0].toUpperCase()+m.slice(1))
  }