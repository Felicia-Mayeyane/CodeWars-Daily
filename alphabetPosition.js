function alphabetPosition(text) {
    //how do i get the alphabet position
    //I can use the replace method
    //text.replace(text [A-Z], alphabetposition)//a method that will allow splitting, 
    //change into array //mapping , filtering the new array
    const changeText= text.toUpperCase()
    const List = changeText.split("").map(let => let.charCodeAt())
    const newList= List.filter(num => {
      if(num > 64 && num < 91){
        return num
      }
    })
    const ListArry = newList.map(num => num - 64 )
    return ListArry.join(" ");
  }