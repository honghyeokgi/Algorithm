function solution(n, lost, reserve) {
    let student = Array(n).fill(1);
    
    for(let i = 1 ; i <= n ; i++){
        if(lost.indexOf(i) > -1)   student[i-1] -= 1
        if(reserve.indexOf(i) > -1) student[i-1] += 1
    }
    
    for(let [index, curr] of student.entries()){
        if(curr === 0 && student[index+1] > 1){
            student[index]++;
            student[index+1]--;
        }
        if(curr === 0 && student[index-1] > 1){
            student[index]++;
            student[index-1]--;
        }
    }
    return student.filter(el => el >= 1).length
}

탐욕법 사용하기!!
  
  array(n).fill(1) : 배열 요소들을 재 정의 하기
indexOf(i) > -1 : indexOf를 활용하여 () 안의 문자를 찾으며 없다면  -1을 반환 하므로 lost의 -1 값들을 0으로 변경
reserve 는  위와 같은 원리에서 옷이 한벌 더 있는 학생들의 값을 2로 변경

