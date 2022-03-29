#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	int ans = 0;

	int arr[] = { 3,13,23,33,43,53, 30, 31,32,34,35,36,37,38,39 };

	for (int i = 0; i <= N; i++) 
	{
		for (int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				if (i % 10 == 3 || j % 10 == 3 || k % 10 == 3 || j / 10 == 3 || k / 10 == 3)ans++;

				/*
				for (int l = 0; l < 15; l++)
				{
					if(arr[l]==k || arr[l] == j || arr[l] == i)ans++;
				}*/
					
			}
		}
	}
	std::cout << ans;
}