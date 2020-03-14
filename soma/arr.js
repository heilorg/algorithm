// Run by Node.js

const readline = require("readline");
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});
let input = [];
rl.on("line", function(line) {
	input.push(line.split(" "));
}).on("close", function() {
	let length = input[0][0]; // 종 데이터의 갯수
	let group = input[0][1]; // 그룹화할 갯수 
	let datas = input[1]; // 데이터들
	let cost = null; // 최소 코스트 저장
	
	func([], 0);
	
	function func(ranges, funcCost){
		if(ranges.length === group){
			if(cost === null)cost = funcCost;
			else {
				if(cost > funcCost)cost = funcCost;
			}
			return;
		}
		let otherGroup = group - (ranges.length - 1);
		for(let i = 1; i <= length - otherGroup; i++){
			let startIndex = 0;
			for(let j = 0; j < ranges.length; j++){
				startIndex += ranges[j];
			}
			let t = datas.filter((data, idx) => idx >= startIndex && idx <= startIndex + i - 1);
			func(ranges.concat(i), funcCost + (Math.max(...t) - Math.min(...t)));
		}
	}
	console.log(cost);
	process.exit();
});