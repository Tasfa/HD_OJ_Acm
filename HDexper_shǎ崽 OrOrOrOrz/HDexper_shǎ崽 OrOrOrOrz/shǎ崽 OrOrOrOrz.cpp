#include <iostream>

using namespace std;

int main()
{
	int n;
	int a[10000];
	int b[10000];
	while (cin >> n)
	{

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

	}
		//冒泡排序法
		for (int j = 1; j < n - 1; j++)//进行n-1次循环，n-i趟比较
		{
			for (int i = 0; i < n - j; i++)//每趟进行n-i-j次比较
			{
				if (a[i] > a[i + 1])//相邻两数进行比较
				{
					int t = a[i];
					a[i] = a[i + 1];
					a[i + 1] = t;
				}
			}
		}

		//输出(先输出最后再输出最前)
		for (int i = 0; i < n; i++)
		{
			b[i] = a[i];
		}

		int mod1 = n % 2;  int mid = (n / 2) + 1;
		if (!mod1)//偶数个数字但由于从0开始所以算奇数个
		{
			for (int i = 0; i < (mid - 1); i++)
			{
				cout << a[n - i - 1] << ' ' << b[i] << ' ';
			}
			cout << endl;
		}
		else//偶数个
		{
			for (int i = 0; i < mid; i++)
			{
				if (i != (mid - 1))
				{
					cout << a[n - i - 1] << ' ' << b[i] << ' ';
				}
				else
					cout << b[i];
			}
			cout << endl;
		}
	
	return 0;
}
/*
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int cmp(const void *a,const void *b)
{
return (*(int *)a-*(int*)b);
}

int main()
{
int n,i,num[10005],a[10005];
while(cin >> n)
{
int flag,flag2;
flag = n/2;
flag2 = n-flag;
memset(a,0,sizeof(a));
memset(num,0,sizeof(num));
for(i = 0;i<n;i++)
cin >> num[i];
qsort(num,n,sizeof(int),cmp);
int k = 0;
for(i = n-1;flag2--;i--)
{
a[k] = num[i];
k+=2;
}
k = 1;
for(i = 0;flag--;i++)
{
a[k] = num[i];
k+=2;
}
cout << a[0];
for(i = 1;i<n;i++)
{
cout << " " << a[i];
}
cout << endl;
}

return 0;
}
*/