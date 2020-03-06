function solution(arrangement) {
    let answer = 0;
    let before = "(";
    let stack = 0;
    let arr = arrangement.split("");
    for(let i = 0; i < arr.length; i++){
        if(before === "("){
            if(arr[i] === "("){
                before = "(";
                stack++;
            }else{
                stack--;
                answer += stack;
                before = ")";
            }
        }else if(before === ")"){
            if(arr[i] === "("){
                before = "(";
                stack++;
            }else{
                stack--;
                answer++;
                before = ")";
            }
        }
    }
    return answer;
}