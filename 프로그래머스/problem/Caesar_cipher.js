function solution(s, n) {
    var answer = [];
    let al = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"];
    
    for(let i = 0; i < s.length; i++){
        if(s[i] === " "){
            answer.push(" ");
            continue;
        }
        let index = al.indexOf(s[i]);
        if(index === -1){//대문자
            answer.push(al[(al.indexOf(s[i].toLowerCase()) + n) % 26].toUpperCase());
        }else{//소문자
            answer.push(al[(index + n) % 26]);
        }
    }
    
    return answer.join("");
}