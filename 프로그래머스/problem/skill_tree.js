function solution(skill, skill_trees) {
    var answer = 0;
    let origin_skills = skill.split("");
    skill_trees.forEach(skill_item => {
        let flag = true;
        let tree = -1;
        for(let i = 0; i < skill_item.length; i++){
            let index = origin_skills.indexOf(skill_item[i]);
            if(index !== -1){ // 기존 스킬에 있다면
                if(index === tree + 1){ // 순서 체크
                    tree = index;
                }else{
                    flag = false;
                }
            }
        }
        if(flag)answer++;
    });
    
    return answer;
}