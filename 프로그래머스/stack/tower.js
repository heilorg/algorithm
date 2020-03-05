function solution(heights) {
    let answer = [];
    for(let i = 0; i < heights.length; i++){
        answer[i] = 0;
    }
    
    let pointer = 0;
    let stack = [];
    
    stack.push({data: heights[0], index: 1});
    
    for(let i = 1; i < heights.length; i++){
        if(pointer === -1){
            stack[0] = {data: heights[i], index : i + 1}
            pointer = 0;
            answer[i] = 0;
            continue;
        } 
        
        if(stack[pointer].data > heights[i]){ // 스택이 더 클때
            answer[i] = stack[pointer].index;
            stack[pointer + 1] = {data: heights[i], index : i + 1};
            pointer++;
        }else{ // 스택이 더 작을 때
            pointer--;
            i--;
        }
    }
    
    return answer;
}