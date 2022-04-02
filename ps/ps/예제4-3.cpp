#include <string>
#include <iostream>

using namespace std;

string input;

int dx[] = { -2,-2,-1,1, 2 , 2, 1, -1};
int dy[] = { -1,1,2,2, 1 ,-1, -2, -2};

int ans = 0;

int main()
{

	getline(cin, input);

	char y = input[0];
	char x = input[1];

	int iy = y - 'a';
	int ix = x - '1';

	for (int i = 0; i < 8; i++)
	{
		int nx = ix - dx[i];
		int ny = iy - dy[i];
		if (nx < 0 || nx >= 8 || ny < 0 || ny >= 8)continue;
		ans++;
	}

	cout << ans << endl;
}