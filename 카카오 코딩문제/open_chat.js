function solution(record) {
    var answer = [];
    var log = [];
    var user = [];
    
    record.forEach(x => {
        var command = x.split(" "); // 0: ���, 1: ���̵�, 2: �̸�
        
        if(command[0] === "Enter"){ // ����
            user[command[1]] = command[2];
            
            log.push([command[1], "���� ���Խ��ϴ�."]);
        }else if(command[0] === "Leave"){ // ���� 
            
            log.push([command[1], "���� �������ϴ�."]);
        }else{ // �ٲ�
            
            user[command[1]] = command[2];
        }
    });
    
    log.forEach(x => { 
        x[0] = user[x[0]];
        answer.push(x.join(""));
    });

    return answer;
}