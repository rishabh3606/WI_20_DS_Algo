#include <iostream>
#include<vector>
using namespace std;
int main()
{
		int arr[] = { 1,1,3,3,5,5,7,8,8,9,9 };
		int size = sizeof(arr) / sizeof(int);
		int ans = arr[0];
		for (int i = 1; i < size; i++)
		{
			ans = ans ^ arr[i];
		}
		cout << ans;
		return 0;
	
}
