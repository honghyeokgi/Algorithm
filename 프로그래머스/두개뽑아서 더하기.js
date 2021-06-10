function solution(numbers) {
    var answer = [];
    var arr = [];
    
 
    numbers.sort((a,b)=>a-b);
    
    for(let i =0; i<numbers.length ; i++){
        for(let j = 0; j<numbers.length; j++){
             if(j !== i) answer.push(numbers[i] + numbers[j])
        }
    }
    answer.sort((a,b)=>a-b);
    const set = new Set(answer);
    const uniqueArr = [...set];
   
    
    return uniqueArr;
}
