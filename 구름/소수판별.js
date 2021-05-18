const readline = require("readline");
var str = "";
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

rl.on("line", function(line) {
	 for( var i=2; i <= line ; i++){
		if(line % i == 0){
			
			str += i+" "
		}
	}
	str = '1'+str
	var arr = str.split(" ");
	if(arr.length == 2){
		console.log('True');
	}else{
		console.log('False');
	}
	rl.close();
}).on("close", function() {
	process.exit();
});
