word = (high << 8) | low 	//(1)
if ((a | b) && (a & c)) 	//(2)
if ((a | b) < (c & d)) 		//(3)
//如果书写为
word = high << 8 | low		//(1)
if (a | b && a & c) 		//(2)
if (a | b < c & d)			//(3)
/*
由于
high << 8 | low 等价于 ( high << 8) | low,
a | b && a & c 等价于 (a | b) && (a & c)
(1)(2)不会出错，但语句不易理解；
但是
a | b < c & d 等价于 a | (b < c) & d，
造成了(3)判断条件出错。
*/
