function solution(absolutes, signs) {
    var answer = 0;
    
    for(var i =0 ; i <= signs.length-1; i ++){
        if(signs[i] == false){
            absolutes[i] = -absolutes[i]
        }
        answer += absolutes[i]
    }
    console.log(answer)
    return answer;
}
