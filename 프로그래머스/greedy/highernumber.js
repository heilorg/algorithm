function solution(number, k) {
    number = number.split("");
    //  k + 1 까지 가장 큰수를 찾고 그 수 이전의 수를 작은 수부터 다 자름  그만큼  k 를 감소 두번째 수 부터 반복
    for(let i = 0; i < number.length; i++){
        if(k === 0)break;
        let maxNum = Math.max(...number.filter((num, idx) => ((idx >= i) && (idx <= i + k))).map(num => Number(num)));
        let maxIndex = number.indexOf(JSON.stringify(maxNum));
        
        if(maxIndex !== i){
            for(let j = 0;j < maxIndex - i; j++){
                if(k == 0)break;
                let minNum = Math.min(...number.filter((num, idx) => ((idx >= i) && (idx <= maxIndex - i))).map(num => Number(num)));
                let minIndex = number.filter((num, idx) => ((idx >= i) && (idx <= maxIndex - i))).map(num => Number(num)).indexOf(minNum) + i;
                number.splice(minIndex, 1);
                maxIndex--;
                k--;
            }
        }
        
        console.log(number.length, number.join(""));
    }
    
    return number.join("");
}