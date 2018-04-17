#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int ar[] = {43, 35, 12, 9, 3, 99};	// n = 6
	cout << "原数列为: ";
	for(int i = 0; i < 6; i++)
		cout << ar[i] << ' ';
	cout << endl;

	// i 为有序区的末尾位置
	for (int i = 0; i < 5; i++)	// 一共扫描n - 1 次
	{
		int min = i;
		
		// j 为无序区的起始位置
		for (int j = i + 1; j < 6; j++)	// 比较互换次数
		{
			if (ar[min] > ar[j])
			{
				min = j;
			}
		}

		// 若min != i, 则交换a[i] 和a[min]
		if (min != i)
		{
			int tmp = ar[i];
			ar[i] = ar[min];
			ar[min] = tmp;
		}

		cout << "第" << i + 1 << " 次排序后的结果是: ";
		for (int j = 0; j < 6; j++)
			cout << setw(3) << ar[j];
		cout << endl;
	}

	return 0;
}
