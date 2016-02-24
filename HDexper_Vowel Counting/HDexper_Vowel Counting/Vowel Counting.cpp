#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string str;
	while (n--)
	{
		cin >> str;
		for (int i = 0; i < str.length();i++)
		{
			bool flag = (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' \
				||str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u');
			if (flag)
			{
				str[i]=toupper(str[i]);
			}
			else
			{
				str[i] = tolower(str[i]);//这里是函数返回才是大写
			}
		}
		cout << str << endl;
	}
	return 0;
}