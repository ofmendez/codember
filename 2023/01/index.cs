using System.IO;
using System.Linq;
using System.Collections.Generic;
using static System.Console;
class Codember {
    static void Main(string[] args) {
        Dictionary<string,int> set = new Dictionary<string,int>();
        File.ReadAllText("./message_01.txt").Trim().ToLower().Split(' ').ToList().ForEach(n => {
            set[n]= set.ContainsKey(n) ? set[n]+1:1;
        });
        set.ToList().ForEach(n => Write(n.Key+n.Value) );
        WriteLine();
    }
}