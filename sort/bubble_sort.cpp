#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int ar[] = {43, 35, 12, 9, 3, 99};	// n = 6
	for (int i = 5; i > 0; i--)	// 一共扫描n - 1 次
	{
		for (int j = 0; j < i; j++)	// 比较互换次数
		{
			if (ar[j] > ar[j+1])
			{
				int temp;
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}
		cout << "第" << 6 - i << " 次排序后的结果是: ";
		for (int j = 0; j < 6; j++)
			cout << setw(3) << ar[j];
		cout << endl;
	}

	return 0;
}
