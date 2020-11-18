// 印出2維陣列的內容
// 在printArray2D()中呼叫多次printArray1D()


void printArray1D (int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArray2D (int** arr, int r)
{
	for (int i = 0; i < r; i++)
	{
		printArray1D(arr[i], i + 1);   // 只印出lower triangle的位置
	}
}