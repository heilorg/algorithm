function solution(brown, red) {
    var answer = [];
    let dimension = brown + red;
    let goal;
    
    for(let i = 1; i <= Math.ceil(red / 2); i++){
        if(red % i === 0){
            if(dimension / (i + 2) == red / i + 2){
                goal = i + 2;
                break;   
            }
        }
    }
    
    return [dimension / goal, goal];
}