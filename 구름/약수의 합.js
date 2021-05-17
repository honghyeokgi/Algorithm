
const readline = require("readline");
var str = "";
var sum = 0;
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

rl.on("line", function(line) {
		for( var i=2; i <= line ; i++){
		if(line % i == 0){
			str += " "+i
			
		}
	}
str = "1"+str;
	var a = str.split(" ");
	
	for(var j = 0 ; j <= a.length-1; j++){
		sum += Number(a[j])
	}
	console.log(sum);
	rl.close();
}).on("close", function() {
	process.exit();
});
