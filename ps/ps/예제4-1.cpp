#include <string>
#include <iostream>

using namespace std;

string input;
//			R  L  U D
int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };

char command[4] = { 'L', 'R', 'U', 'D' };

int x = 1;
int y = 1;

int main()
{

	int N;
	cin >> N;

	char c;
	cin.ignore(); // 위에서 했던 cin에 \n 제거
	getline(cin, input);

	int size = input.size();

	for (int i = 0; i < input.size(); i++)
	{
		char in = input[i];

		int nx = 0;
		int ny = 0;
		for (int j = 0; j < 4; j++)
		{
			if (command[j] == in)
			{
				nx = x + dx[j];
				ny = y + dy[j];
				break;
			}
		}
		if (nx <= 0 || nx > N || ny <= 0 || ny > N)continue;
		x = nx;
		y = ny;
	}

	cout << x << ' ' << y << endl;
}