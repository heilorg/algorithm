function solution(N, stages) {
    let answer = [];
    let defeat = [];
    for(let i = 1; i <= N; i++){
        defeat.push({
            per:stages.filter(x => x == i).length / stages.filter(x => x >= i).length,
            num:i
        });
    }
    

    defeat.sort((a, b) => {
        if (a.per > b.per) return -1;
        if (a.per < b.per) return 1;
        return a.num < b.num ? -1 : 1;
    });
    
    for(let i = 0; i < N; i++){
        answer.push(defeat[i].num);
    }

    return answer;
}