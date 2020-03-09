function solution(n) {
    var answer = [0];
    
    // for(let i = 0; i < n - 1; i ++){
        // for( let j = 0; j < Math.pow(2, i + 1); j++){
            // answer.splice(j * 2, 0, Math.round((j % 2) / 2));
        // }
    // }
    
    function func(arr, nu){
        if(nu == n)return arr;
        let re_arr = [];
        for(let i = 0; i < arr.length + Math.pow(2, nu); i++){
            if(i % 2 == 0){ // 짝
                re_arr.push(i / 2 % 2);
            }else{ // 홀
                re_arr.push(arr[Math.floor(i / 2)]);
            }
        }
        return func(re_arr, nu + 1);
    }
    
    return func([0], 1);
}

// 0
// 001
// 0010011
// 001001100011011
//사이사이 0과1을 반복하여 삽입
