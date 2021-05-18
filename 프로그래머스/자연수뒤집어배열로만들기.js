var answer = [];
var arr = [];
var a = "";
function solution(n) {
    a = n.toString()
    answer = a.split("");
    answer = answer.reverse()
    for(var i =0 ; i <= answer.length-1; i ++){
        arr.push(parseInt(answer[i]));
    }
    console.log(arr);
    
    
    return arr;
}
