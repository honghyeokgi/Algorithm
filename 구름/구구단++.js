const readline = require("readline");
var count = 0
const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

rl.on("line", function(line) {
	if(line == 3){
for(var i = 2; i <=9 ; i++){
	for(var j = 1; j <=9; j++){
		process.stdout.write(`${i} * ${j} = ${i*j} `);
		if(j == 3 || j == 6 || j == 9){
			console.log("");
			
		}
	}
}
	}
	
	else	if(line == 2){
for(var i = 2; i <=9 ; i++){
	for(var j = 1; j <=9; j++){
		process.stdout.write(`${i} * ${j} = ${i*j} `);
		count ++;
		if(count == 2){
			console.log("");
			count = 0;
			
		}
	}
}
	}
	else	if(line == 4){
for(var i = 2; i <=9 ; i++){
	for(var j = 1; j <=9; j++){
		process.stdout.write(`${i} * ${j} = ${i*j} `);
		count ++;
		if(count == 4){
			console.log("");
			count = 0;
			
		}
	}
}
	}
	else	if(line == 5){
for(var i = 2; i <=9 ; i++){
	for(var j = 1; j <=9; j++){
		process.stdout.write(`${i} * ${j} = ${i*j} `);
		count ++;
		if(count == 5){
			console.log("");
			count = 0;
			
		}
	}
}
	}
	else	if(line == 6){
for(var i = 2; i <=9 ; i++){
	for(var j = 1; j <=9; j++){
		process.stdout.write(`${i} * ${j} = ${i*j} `);
		count ++;
		if(count == 6){
			console.log("");
			count = 0;
			
		}
	}
}
	}
	else	if(line == 7){
for(var i = 2; i <=9 ; i++){
	for(var j = 1; j <=9; j++){
		process.stdout.write(`${i} * ${j} = ${i*j} `);
		count ++;
		if(count == 7){
			console.log("");
			count = 0;
			
		}
	}
}
	}
	else	if(line == 8){
for(var i = 2; i <=9 ; i++){
	for(var j = 1; j <=9; j++){
		process.stdout.write(`${i} * ${j} = ${i*j} `);
		count ++;
		if(count == 8){
			console.log("");
			count = 0;
			
		}
	}
}
	}
	
	else	if(line == 9){
for(var i = 2; i <=9 ; i++){
	for(var j = 1; j <=9; j++){
		process.stdout.write(`${i} * ${j} = ${i*j} `);
		count ++;
		if(count == 9){
			console.log("");
			count = 0;
			
		}
	}
}
	}
	
	else if( line == 1 ){
		for(var i = 2; i <=9 ; i++){
	for(var j = 1; j <=9; j++){
		console.log(i,"*",j,"=",i*j,"");

	}
}
	}
	rl.close();
}).on("close", function() {
	process.exit();
});
