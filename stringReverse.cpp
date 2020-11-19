// 把字串內容前後顛倒
// 會改到傳入的字串的內容
// 因為是傳入一個address

void stringReverse(char p[])
{
	size_t n = strlen(p);
	char* temp = new char[n];
	for (int i = 0; i < n; i++)		// 新增一個反轉後的array
	{
		temp[i] = p[n - 1 - i];
	}

	for (int i = 0; i < n; i++)		// 把反轉的樣子弄進傳來的char array
	{
		p[i] = temp[i];
	}
	delete [] temp;
}