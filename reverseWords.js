function spinWords(string){ //  let string= lets say the string is  i am Noluthaz"
    return string.split(' ').map(function (string) {
       return (string.length > 4) ? string.split('').reverse().join('') : string;
     }).join(' ');
   }