#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "请输入你想查找的质数从2到多少？";
	cin >> d;
	for (a=2; a <=d; a++)
	{
		c = 1;
		for (b = 2; a > b ; b++)
		{
			c = 1;
			if (a % b == 0)
			{
				c = 0;
				break;
			}
		}
		if (c==1)
		{
			cout << a << endl;
		}
	}
	return 0;
}
