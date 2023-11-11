use std::collections::HashMap;
use std::fs;

fn main() {
	let msg = fs::read_to_string("./message_01.txt").expect("Should read file").to_lowercase();
	let mut map:HashMap<&str, i32> = HashMap::new();
	let mut order: Vec<&str> = Vec::new();

	for i in msg.trim().split(' ') {
		if map.contains_key(i) {
			map.insert(i, map.get(i).unwrap() + 1);
		}else {
			map.insert(i, 1);
			order.push(i);
		}
	}
	for i in order {
		print!("{}{}", i, map.get(i).unwrap());
	}
	println!();
}