import fs from "fs";
fs.readFile("./message_01.txt", (err, msg) => {
	let set = {};
	msg.toString().toLowerCase().trim().split(" ").map((word) => {
		set[word] = (set[word] ?? 0) + 1;
	});
	console.log(Object.keys(set).map(w => w+set[w] ).join(''));
});