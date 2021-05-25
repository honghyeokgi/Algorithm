const readline = require("readline");
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

rl.on("line", function(line) {
	for(var i = 1 ; i <= line ; i++){
		if(i % 3 == 0){
			process.stdout.write(`X `);
		}else{
			process.stdout.write(`${i} `);
		}
	}
	rl.close();
}).on("close", function() {
	process.exit();
});
