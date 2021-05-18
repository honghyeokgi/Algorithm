const readline = require("readline");
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

rl.on("line", function(line) {
	
	var same = line.split("").reverse().join("")
	if(line == same){
		console.log('Palindrome');
	}else{
		console.log('Not Palindrome');
	}
	rl.close();
}).on("close", function() {
	process.exit();
});
