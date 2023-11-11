import fs from "fs";
fs.readFile("./message_01.txt", (err, f) => {
    let ss = f.toString().toLowerCase().trim().split(" ").reduce((a, b) => {
        a[b] = a[b] + 1 || 1
        return a;
    }, {});
    console.log(Object.keys(ss).map((i) => i + ss[i]).join(""));
});