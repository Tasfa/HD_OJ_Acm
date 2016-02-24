//strrevh函数可以进行字符串反序
//运用递归进行反序
/*
#include <iostream>
#include <string>
using namespace std;

void reverse(char *str)
{
	if (*str)
		reverse(str + 1);
	else
		return;
	cout << *str;
}
int main()
{
	int n;
	char str[1024] = { NULL };
	cin >> n;
	getchar();
	while (n--)
	{
		cin.getline(str,1024,'\n');
		reverse(str);
		cout << endl;
	}
	return 0;
}
*/
//运用栈进行反序
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int n;
	cin >> n;
	getchar();
	char str[1024];
	stack<char>sta;
	while (n--)
	{
		cin.getline(str,1024,'\n');
		for (int i = 0; i < strlen(str); )
		{
			for (; i < strlen(str); i++)
			{
				sta.push(str[i]);
			}
			for (; !sta.empty(); sta.pop())
			{
				cout << sta.top();
			}
			i++;
		}
		cout << endl;
	}
	return 0;
}
