string is for ={"zero ones", two ones, three ones, string goes onnn....}
string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
string ths[]={"","M","MM","MMM"};
​
​
return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
​
if number is 2550
​
=> ths[2550/1000]= 2.5 round it down to == 2 ths  (thousands) or MM.
=> hrns[(2550 %1000)/100]= hrns[550/100] == 5.5 round it down to == 5hrns (hunderds) or D
=>tens[(2550%100)/10]=tens[50/10]= 5 tens or L