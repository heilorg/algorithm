function solution(numbers, target) {
    var answer = 0;
    
    
    dfs(0, 0);
    function dfs(sum, depth){
        if(depth == numbers.length){
            if(sum == target)answer++;
        }else{
            dfs(sum + numbers[depth], depth + 1);
            dfs(sum - numbers[depth], depth + 1);
        }       
    }
    return answer;
}