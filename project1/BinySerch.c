#include<stdio.h>
int BinySerch(int*arr, int key, int lengh)
{
int left= 0, right= lengh+ 1;
int mid;
	while(left<= right)
	{
		mid = left + (right - left) / 2;
		if(key<arr[mid])
		{
			right= mid- 1;
		}
		else if(key>arr[mid])
		{
			left= mid+ 1;
		}
        else
        {
	        return mid;
        }
	}
	return- 1;
}
int main()
{
	int key= 7;
	int arr[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int lengh = sizeof(arr) / sizeof(arr[0]);
	printf("%d", BinySerch(arr, key, lengh));
	system("pause");
	return 0;
}