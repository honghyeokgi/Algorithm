function solution(num) {
   var count = 0;
   var a = num; 
    while(true){
        if(a % 2 ===0){
            a = a/2;
            count++
        }
        else if( a % 2 !==0){
            a = a*3+1
            count++
        }
      
        if(count >=500 && a !== 1)   return count = -1
        if(a === 1) return count
        if(num === 1) return count = 0
    
    }
    
    
    return count;
}
