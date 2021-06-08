function solution(s)
{
    var answer = ''
    var arr = []
    for(let i = 0 ; i <s.length; i++){
        arr.push(s[i])
        if(arr[arr.length-1] === arr[arr.length-2]){
            arr.pop();
            arr.pop();
        }
    }
    
    
    return answer = arr.length > 0 ?  answer = 0 : answer = 1;
}

stack 형태로 풀이 하였습니다
