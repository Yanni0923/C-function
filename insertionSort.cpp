// int array 的選擇排序法

void insertionSort(int array[], const int n)
{
	// 假如 n = 1，不需要排

	// 用遞迴
	// insertionSort(array + 1, n - 1);放在第一行
	// 你可以假裝覺得前面都已經靠遞迴排好了，不用多擔心
	// 你現在只要想著左邊都是有序的數字，那你要插哪裡
	if (n > 1)
	{
		insertionSort(array + 1, n - 1);	// 傳入除了最左邊的數字以外的，右邊部分的array
		int num1 = array[0];				// 先把第一個數字儲存起來
		int i = 1;
		for (; i < n; i++)
		{
			if(num1 > array[i])
			{
				array[i-1] = array[i];
			}
			else
			{
				break;
			}
			array[i - 1] = num1;
		}
	}
}

