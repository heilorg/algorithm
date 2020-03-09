function solution(answers) {
    var answer = [];
    let student = [];
    student[0] = [1,2,3,4,5];
    student[1] = [2,1,2,3,2,4,2,5];
    student[2] = [3,3,1,1,2,2,4,4,5,5];
    
    let score = [0,0,0];
    
    answers.forEach((number, index) => {
        student.forEach((student_number, student_index) => {
            if(number == student_number[index % student_number.length]){
                score[student_index]++;
            }     
        })
    });
    
    let high_score = Math.max(...score);
    let high_score_student = [];
    score.forEach((score, index) => {
        if(score == high_score)high_score_student.push(index + 1);
    });
    
    return high_score_student;
}