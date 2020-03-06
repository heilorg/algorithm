function solution(priorities, location) {
    var answer = 1;
    
    for(let i = 0;;i++){
        if(i === priorities.length)i = 0;
        
        if(Math.max(...priorities) === priorities[i]){
            if(location === i){
                return answer;
            }
            else{
                answer++;
                priorities[i] = 0;
            }
        }
    }
}