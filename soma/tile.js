// Run by Node.js

const readline = require("readline");
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

let input = [];
let stack = [];

rl.on("line", function(line) {
	input.push(line.split(" "));
}).on("close", function() {
	let answerCount = input[0][0];
	let sizes = [];
	let sizeLine = 1;
	for(let i = 0; i < answerCount; i++){
		sizes.push(input[sizeLine]);
		sizeLine += Number(input[sizeLine][0]) + 1;
	}
	// console.log(sizes)
	let boards = [];
	let boardLine = 2;
	for(let i = 0; i < answerCount; i++){
		boards.push([]);
		for(let j = 0; j < sizes[i][0]; j++){
			boards[i].push(input[boardLine].map(x => {return {type: Number(x), stack:0};}));
			boardLine++;
		}
		boardLine++;
	}
	// console.log(boards);
	
	for(let num = 0; num < answerCount; num++){
		for(let x = 0; x < sizes[num][0] - 1; x++){
		for(let y = 0; y < sizes[num][1] - 1; y++){
			if(boards[num][x][y].type === 1 && boards[num][x + 1][y].type === 1 && boards[num][x][y + 1].type === 1 && boards[num][x + 1][y + 1].type === 1){ // 사각형 전부 1일 때
				boards[num][x][y].stack++;
				boards[num][x + 1][y].stack++;
				boards[num][x][y + 1].stack++;
				boards[num][x + 1][y + 1].stack++;
			}
		}	
	}	
		let flag = true;
		for(let x = 0; x < sizes[num][0]; x++){
		for(let y = 0; y < sizes[num][1]; y++){
			if(boards[num][x][y].type === 1 && boards[num][x][y].stack === 0)flag = false;
		}}
			if(flag){
				console.log("YES")
			}else{
				console.log("NO")
			}
	}
	
	process.exit();
});