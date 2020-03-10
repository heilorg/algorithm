function solution(n) {
    var answer = [];
    
    while(n !== 0){
        n -= 1;
        let num = n % 3;
        num = num + 1;
        if(num == 3)num += 1;
        answer.unshift(num);
        n = Math.floor(n / 3);
    }
    
    return answer.join("");
}