function solution(n, m) {
    var answer = [];
    
    function max(a,b){
       if(b === 0) return a
        return max(b,a%b)
    
    }
    
    function min(a,b){
        return a*b/max(a,b)
    }
    
    answer.push(max(n,m));
    answer.push(min(n,m))
    
    return answer;
}
재귀함수 형태로 풀이 하였습니다
