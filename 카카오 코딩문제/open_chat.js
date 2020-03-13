function solution(record) {
    var answer = [];
    var log = [];
    var user = [];
    
    record.forEach(x => {
        var command = x.split(" "); // 0: 방식, 1: 아이디, 2: 이름
        
        if(command[0] === "Enter"){ // 들어옴
            user[command[1]] = command[2];
            
            log.push([command[1], "님이 들어왔습니다."]);
        }else if(command[0] === "Leave"){ // 나감 
            
            log.push([command[1], "님이 나갔습니다."]);
        }else{ // 바뀜
            
            user[command[1]] = command[2];
        }
    });
    
    log.forEach(x => { 
        x[0] = user[x[0]];
        answer.push(x.join(""));
    });

    return answer;
}