function solution(n) {
    var answer = 0;
    
    function check(current, sum){
        if(sum === n )  return true;
        if(sum > n)     return false;
        
        return check(current+1,sum+current);
    }
    
    for(let i = 1 ; i <=n ; i++){
        if(check(i,0) == true)  answer++
    }
    
    return answer;
}
