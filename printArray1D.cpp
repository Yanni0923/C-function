// 印出1維陣列的內容
// 參數 int* arr ： 1維陣列的整數指標(address指向arr[0])
// 參數 int n ： 1維陣列的長度


void printArray1D (int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}