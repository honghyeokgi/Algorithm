function solution(answers) {
    var answer = [];
    var re = []
    
    const per1 = [1,2,3,4,5];
    const per2 = [2,1,2,3,2,4,2,5];
    const per3 = [3,3,1,1,2,2,4,4,5,5];

    function check(solution,personarr){
        var count = 0;
        for(let i = 0, j= 0 ; i <solution.length; i++,j++){
            if(personarr.length-1 < j)  j =0            
            if(solution[i] === personarr[j]) {
                count++   
            }
        }
    return answer.push(count)
    }    
    check(answers,per1);
    check(answers,per2);
    check(answers,per3);
    
    const maxValue = Math.max(...answer);
    
    for(let i = 0 ; i < answer.length ; i++){
       if(answer[i] === maxValue)   re.push(i+1)
    }
 
     
    return re;
}
