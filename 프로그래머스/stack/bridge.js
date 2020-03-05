function solution(bridge_length, weight, truck_weights) {
    let time;
    let tr_p = 0; // 트럭 포인터
    let on_br = []; // 다리위 트럭
    let br_p = 0; // 다리 위 시작 포인터
    let br_weight = 0;
    let complete_tr = 0;
    
    
    for(time = 2;; time++){
        if(br_weight + truck_weights[tr_p] <= weight){
            on_br.push({trw: truck_weights[tr_p], br: 0});
            br_weight += truck_weights[tr_p];
            tr_p++;
        }
        for(let i = br_p; i < on_br.length; i++){
            on_br[i].br += 1;
            if(on_br[i].br == bridge_length){
                br_p++;
                complete_tr++;
                br_weight-=on_br[i].trw;
            }
        }
        
        if(complete_tr == truck_weights.length){
            break;
        }
    }
    
    return time;
}