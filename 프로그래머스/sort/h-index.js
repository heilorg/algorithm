function solution(citations) {
    citations.sort((a, b) => a - b);
    for(let i = citations[citations.length - 1]; i >= 0 ; i--){
            console.log(citations.filter(x => x >= i).length, i);
        if(citations.filter(x => x >= i).length >= i){
           return i;
         }
    }
    return 1;
}