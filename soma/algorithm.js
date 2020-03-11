// Run by Node.js

const readline = require("readline");
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

rl.on("line", function(line) {
	let nums = line.split(" ");
	console.log(Math.ceil((nums[0] - 1) / (nums[1] - 1)));
	rl.close();
}).on("close", function() {
	process.exit();
});