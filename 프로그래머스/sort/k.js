function solution(array, commands) {
    var answer = [];
    
    commands.forEach(x => {
        let temp_arr = JSON.parse(JSON.stringify(array));
        let arr = temp_arr.splice(x[0] - 1, x[1] - (x[0] - 1)).sort((a, b) => a - b);
        answer.push(arr[x[2] - 1]);
    });
    
    return answer;
}