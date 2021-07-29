function solution(s) {
    var answer = '';
    
    var arr = s.split('');

    for(let i = 0,j = 0 ; i <arr.length; i++,j++){
        j === 0? arr[i] = arr[i].toUpperCase() : arr[i] = arr[i].toLowerCase()
        if(arr[i] === ' ')  j = -1
        
    }
    
    return arr.join('')
}
