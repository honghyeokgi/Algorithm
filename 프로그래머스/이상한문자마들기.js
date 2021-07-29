function solution(s) {
    var answer = '';
    var a =s.split('')

    for(let i = 0, j = 0 ; i < a.length; i++,j++){
        if( j === 0 || j % 2 ===0){
            a[i] = a[i].toUpperCase()
        }
        else if( j % 2 === 1){
            a[i] = a[i].toLowerCase()
        }
        if( a[i] === ' '){
            j = -1
        }
    }
    answer = a.join('')
    return answer;
}
