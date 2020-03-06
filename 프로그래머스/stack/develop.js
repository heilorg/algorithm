function solution(progresses, speeds) {
    var answer = [];
    let st_p = 0;
    let an_p = 0;
    let flag;
    for(;;){
        flag = false;
        progresses = progresses.map((item, idx) => item + speeds[idx]);    
        
        for(let i = st_p; i < progresses.length; i++){
            if(progresses[i] >= 100){
                if(!flag){
                    answer.push(1);
                }else{
                    answer[an_p]++;    
                }
                st_p++; 
                flag = true;
            }else{
                break;
            }
        }
        // console.log(answer, progresses);
        if(flag){
            an_p++;
        }
        if(st_p == progresses.length){
            return answer;
        }
    }    
}