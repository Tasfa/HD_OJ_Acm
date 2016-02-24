#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int A=1;
	bitset<8>b;
	while (cin>>A)
	{
		if (0 != A)
		{
			b = A;
			for (int i = 0; i < 8; i++)
			{
				if (b.test(i))
				{
					int j = i + 1;
					for (; j < 8; j++)
						b.reset(j);
					break;
				}
			}
			cout << b.to_ulong() << endl;//Å£±ÆµÄÀà£¡
		}
		else
		{
			break;
		}
	}
	return 0;
}