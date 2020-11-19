#include <cstring>

// 直接把兩個字串交換位置
// 是傳入address，所以會改到真實記憶體內的內容
void swapString(char* str1, char* str2)
{
	char temp[LEN] = {0};
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
}