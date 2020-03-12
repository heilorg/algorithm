function solution(n) {
    let dp = [];
    dp[0] = {data: 3, stack : 2};
    dp[1] = {data : 11, stack: 8};
    
    for(let i = 2; i <= n / 2 - 1; i++){
        dp[i] = {data :(dp[i - 1].data * 3 + dp[i - 1].stack) % 1000000007};
        dp[i].stack = dp[i - 1].data * 2 + dp[i - 1].stack
    }
    
    return dp[n / 2 - 1].data % 1000000007;
}
