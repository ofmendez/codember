fs = open('./message_01.txt', 'r').read().lower().strip().split(' ')
{print(k+str(v), end='') for k,v in {i:fs.count(i) for i in fs}.items()}