function solution(n, lost, reserve) {
    var answer = n - lost.length;
    lost.forEach((x, idx) => {
        let me = reserve.indexOf(x);
        if(me != -1){
            lost[idx] = -1
            reserve[me] = -1;
            answer++;
        }
    })
    lost.forEach(x => {
        let idx = reserve.indexOf(x + 1);
        let left = reserve.indexOf(x - 1)
        if(left != -1){
            idx = left;    
        }

        if(idx != -1){
            reserve[idx] = -1;
            answer++;
        }
    });
    return answer;
}