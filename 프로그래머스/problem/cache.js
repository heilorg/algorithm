function solution(cacheSize, cities) {
    const HIT = 1;
    const MISS = 5;
    let cacheStack = [];
    let time = 0;
    
    cities = cities.map(city => city.toLowerCase());
    
    if(cacheSize === 0)return cities.length * MISS;
    
    for(let i = 0; i < cities.length; i++){
        let cacheIndex = cacheStack.length - cacheSize;
        if(cacheIndex < 0)cacheIndex = 0;
        let cache = cacheStack.filter((_, idx) => idx >= cacheIndex);
        
        // console.log(cache);
        if(cache.includes(cities[i])){ // hit
            let hitIndex = cacheStack.lastIndexOf(cities[i]);
            cacheStack.splice(hitIndex, 1);
            time += HIT;
        }else{ // miss
            time += MISS;
        }
        cacheStack.push(cities[i]);
    }
    
    return time;
}
// Cache Hit 이란
    // CPU가 참조하고자 하는 메모리가 캐시에 존재하고 있을 경우, Cache Hit이라고 한다.
// Cache Miss란
    // CPU가 참조하고자 하는 메모리가 캐시에 존재하지 않을 떄는 Cache Miss라고 함.
// 3 10 50
// 1 1 1 1 1 0 0 0 0 0   이전에 나온것은 0
// ["j", "p", "s"] 555
// ["n", "p", "s"] 5
// ["n", "l", "s"] 5
// ["n", "l", 'j'] 5
// ["p", "l", "j"] 5
// ["p", "s", "j"] 5
// ["p", "s", "n"] 5
// ["l", "s", "n"] 5 

// 3 9 21
// 1 1 1 0 0 0 0 0 0
// 555 111 111

// 2 12 60
// p j 55
// s p 5
// n s 5
// l n 5
// S l 5
// s S 5
// r s 5
// p r 5
// j p 5
// n j 5
// r n 5 

// 5 12 52
// 6 
// 1 1 1 1 1 1 0 1 1 0 0 0

// 0 5 25
// 5번 다 미스이기에 5 * 5 = 25;



function solution(cacheSize, cities) {
    const HIT = 1;
    const MISS = 5;
    let cacheStack = [];
    let time = 0;
    
    cities = cities.map(city => city.toLowerCase());
    
    if(cacheSize === 0)return cities.length * MISS;
    
    for(let i = 0; i < cities.length; i++){
        let cacheIndex = cacheStack.length - cacheSize;
        if(cacheIndex < 0)cacheIndex = 0;
        let flag = false;
        let j;
        for(j = cacheIndex; j < cacheStack.length; j++){
            if(cacheStack[j] == cities[i]){
                flag = true;
                break;
            }
        }
        
        if(flag){ // hit
            cacheStack.splice(j, 1);
            time += HIT;
        }else{ // miss
            time += MISS;
        }
        cacheStack.push(cities[i]);
    }
    
    return time;
}
// Cache Hit 이란
    // CPU가 참조하고자 하는 메모리가 캐시에 존재하고 있을 경우, Cache Hit이라고 한다.
// Cache Miss란
    // CPU가 참조하고자 하는 메모리가 캐시에 존재하지 않을 떄는 Cache Miss라고 함.
// 3 10 50
// 1 1 1 1 1 0 0 0 0 0   이전에 나온것은 0
// ["j", "p", "s"] 555
// ["n", "p", "s"] 5
// ["n", "l", "s"] 5
// ["n", "l", 'j'] 5
// ["p", "l", "j"] 5
// ["p", "s", "j"] 5
// ["p", "s", "n"] 5
// ["l", "s", "n"] 5 

// 3 9 21
// 1 1 1 0 0 0 0 0 0
// 555 111 111

// 2 12 60
// p j 55
// s p 5
// n s 5
// l n 5
// S l 5
// s S 5
// r s 5
// p r 5
// j p 5
// n j 5
// r n 5 

// 5 12 52
// 6 
// 1 1 1 1 1 1 0 1 1 0 0 0

// 0 5 25
// 5번 다 미스이기에 5 * 5 = 25;