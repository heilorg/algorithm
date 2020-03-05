function solution(triangle) {
    for(let i = triangle.length - 2; i >= 0; i--){
        triangle[i] = triangle[i].map((x, idx) => {
            let left = x + triangle[i + 1][idx];
            let right = x + triangle[i + 1][idx + 1];
            if(left > right)return left;
            else return right;
        });
    }
    
    return triangle[0][0];
}