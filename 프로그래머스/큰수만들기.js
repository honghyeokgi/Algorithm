function solution(number, k) {
    
    var arr = []
    
    for(let i = 0; i < number.length ; i ++){
        let val = number[i]
        
        while(k > 0 && arr[arr.length-1] < val){
            arr.pop();
            k--
        }
        arr.push(val);
    }
    
    arr.splice(arr.length - k)
    return arr.join("")
    
}

for 문을 이용하여  number의 길이만큼 돌며 각 요소를 push 후 조건문을 통해 직전값과 현재값을 비교하여 제거 후 k값을 내림
k값이 남아있으면서도 number의 남은 값이 모두 동일할경우 조건을통한 pop이 진행되지 않고 작성되므로 arr.length에 남은 k 만큼 뺀 배열의 값을 join 함수를 통해 문자열로 구성한다.
