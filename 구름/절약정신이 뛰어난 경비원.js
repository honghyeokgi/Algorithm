const readline = require("readline");
var sum = 0;
var str = "";
var a = [];
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
	a = str.split(" ")
	for(var j = 0 ; j <= a.length-1; j++){
		sum++
		
	}
	if(sum % 2 == 0){
		console.log('no');
	}
	else if( sum == 0){
		console.log('no');
	}else{
		console.log('yes');
	}
	rl.close();
}).on("close", function() {
	process.exit();
});
