function solution(people, limit) {
  people.sort((a,b)=>a-b);
    for(var i =0,j = people.length-1; i <j ; j--){
        if(people[i] + people[j] <= limit)  i++
    }
    return people.length-i

  
  1. 배열 오름차순 정렬
  2. 가장 작은값과 큰값을 더해 limit가 넘는지 확인하며 넘지않으면 i 를 더해주어 전체 배열에서 i만큼 뺸 숫자가 보트의 수가 된다
