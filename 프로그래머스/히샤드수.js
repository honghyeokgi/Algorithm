function solution(x) {
    var answer = true;
    var sum = 0;
    var arr=[] 
    arr.push(x)
    var a = arr.join().split('')
    for(let i = 0; i <a.length; i++){
        sum += parseInt(a[i])
    }
    answer = x % sum === 0?  answer = true : answer = false
    
    return answer;
}
