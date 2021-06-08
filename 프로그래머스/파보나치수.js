function solution(n) {
    let numbers = [0, 1];
    for(let i = 2; i <= n; i++) {
        numbers.push((numbers[i - 1] + numbers[i - 2]) % 1234567);
    }
    return numbers[n];
}
