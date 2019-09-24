#include<stdio.h>
#include<string.h>
int main()
{
	char S[1001];
	scanf("%s", S);

	//char a = 'Z';//A : 65 //  Z : 90
	//printf("%d\n", a);

	int size = strlen(S);
	for (int i = 0; i < size; i++)
	{
		char c = S[i];
		if (c < 'D')
		{
			S[i] = S[i] - 3 + 26;
		}
		else
		{
			S[i] = S[i] - 3;
		}
	}

	for (int i = 0; i < size; i++)
	{
		printf("%c", S[i]);
	}
}