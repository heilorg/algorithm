function solution(N) {
    function dp(n, n_1, count, sum, final){
        sum = sum + n * 2;
        if(count === final){
            return sum;
        }else{
            return dp(n + n_1, n, count + 1, sum, final);
        }
    }
    return dp(1, 1, 2, 4, N);
}