const readline = require("readline");
var sum = 0;
var str = ""
var avg = 0;
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

rl.on("line", function(line) {
	
	arr = line.split(" ");
	for(i in arr){
	
		sum += parseInt(arr[i]);
	}
	
	avg = sum / 3
	
	var point = avg.toFixed(2);
	
	if(point >= 90){
		console.log(point+" A");
	}
	else if(point < 90 && point >= 80){
		console.log(point+" B");
	}
	else if (point < 80 && point >= 70){
		console.log(point + " C");
	}
	else if (point < 70 && point >= 60){
		console.log(point + " D");
	}
	else{
		console.log(point + " F");
	}
	
	
	rl.close();
}).on("close", function() {
	process.exit();
});
