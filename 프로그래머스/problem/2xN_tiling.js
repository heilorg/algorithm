function solution(n) {
    let num = [];
    num[0] = 1;
    num[1] = 2;
    for(let i = 2; i < n; i++){
        num[i] = (num[i - 1] + num[i - 2]) % 1000000007;
    }
    return num[n - 1];
    
    function dp(nu){
        if(nu == 1)return 1;
        else if(nu == 2)return 2;
        else return dp(nu - 1) + dp(nu - 2);
    }
    
    return dp(n) % 1000000007;
}

// 1 1
// 2 2
// 3 3
// 4 5
// 5 8