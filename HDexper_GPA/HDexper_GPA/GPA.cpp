#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	char input;
	int sum=0 ;
	int count = 0;
	int flag = 1;
	while (cin.get(input))
	{
		if (input != ' '&&flag!=4)
		{
			switch (input)
			{
			case 'A':
				sum += 4;
				flag = 3;
				count++;
				break;
			case 'B':
				sum += 3;
				flag = 3;
				count++;
				break;
			case 'C':
				sum += 2;
				flag = 3;
				count++;
				break;
			case 'D':
				sum += 1;
				flag = 3;
				count++;
				break;
			case 'F':
				sum += 0;
				flag = 3;
				count++;
				break;
			case '\n':
				flag = 1;
				break;
			default:
				flag = 0;
				break;
			}
		}
		if (1 == flag)
		{
			float avg = (sum*1.0) / count;
			cout << setprecision(2) << setiosflags(ios::fixed ) << avg << endl;
			sum = 0;
			count = 0;
		}
		else if(0==flag)
		{
			cout << "Unknown letter grade in input" << endl;
			flag = 4;
			//cin.ignore(n); 输入缓冲区刷新n个字符，但是得直到达到n才结束函数
		}
	}
	return 0;
}

/*
#include<stdio.h>
#include<string.h>
int main(){
int m,i,g,sum,f;
float GPA;
char a[1000];
while(gets(a)!=NULL){ //EOF不可以。
f = 1; //scanf()读到空格停止，gets()不会。
g = 0;
sum = 0;
m = strlen(a)-1;
for(i = 0;i<=m;i++){
if(a[i]=='A'||a[i]=='B'||a[i]=='C'||a[i]=='D'){
sum = sum+4-(a[i]-'A');
g++;
}
else if(a[i]=='F')
g++;

else if(a[i]==' ')
sum = sum;
else{
printf("Unknown letter grade in input\n");
f = 0;
break;
}
}
if(f==1){
GPA = sum*1.0/g;
printf("%.2f\n",GPA);
}
}
return 0;
}
*/