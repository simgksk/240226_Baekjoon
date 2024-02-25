#include <iostream>

using namespace std;

	int main()
	{
#pragma region 7595. Triangles

		/*int n;

		while (true)
		{
			cin >> n;

			if (n == 0)
				break;

			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= i; j++)
					printf("*");
				printf("\n");
			}
		}*/

#pragma endregion

#pragma region 9772. Quadrants

		/*float x, y;

		while (true)
		{
			cin >> x >> y;

			if ((x < 0 && y == 0) || (x > 0 && y == 0))
				cout << "AXIS" << endl;
			else if ((x == 0 && y < 0) || (x == 0 && y > 0))
				cout << "AXIS" << endl;
			else if (x > 0 && y > 0)
				cout << "Q1" << endl;
			else if (x < 0 && y > 0)
				cout << "Q2" << endl;
			else if (x < 0 && y < 0)
				cout << "Q3" << endl;
			else if (x > 0 && y < 0)
				cout << "Q4" << endl;
			else if (x == 0 && y == 0)
			{
				cout << "AXIS";
				break;
			}
		}*/

#pragma endregion

#pragma region 11549. Identifying tea

		int t;
		int abcde;
		int n = 0;

		cin >> t;

		for (int i = 0; i < 5; i++)
		{
			cin >> abcde;
			if (abcde == t)
				n++;
		}

		cout << n;

#pragma endregion


		
		return 0;
	}
