#include <iostream>
#include <vector>
using namespace std;

void rotate(vector < vector <char> >& inp, int num){
	vector <vector<char>> temp(num, (vector <char>(num)));

	temp = inp;
	int x, y;

	for (int i = 0; i < num; ++i)
	{
		for (int j = 0; j < num; ++j)
		{
			x = j;
			y = (num - 1) - i;

			inp[x][y] = temp[i][j];
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int m, n, a, b;

	while (cin >> n >> m) {

		if (m == 0 and n == 0)
			break;

		vector < vector <char> > fi(n, (vector <char>(n)));
		vector < vector <char> > se(m, (vector <char>(m)));
		vector <int> res(4);


		int t = 0;

		cin.ignore();

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> fi[i][j];
			}
		}

		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> se[i][j];
			}
		}

		int k = 0;
		while (k < 4) {

			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					t = 0;
					if (fi[i][j] == se[0][0]) {

						for (int x = i, a = 0; x < n && a < m; x++, a++)
						{
							for (int y = j, b = 0; y < n && b < m; y++, b++)
								if (fi[x][y] == se[a][b]) t++;
						}
						if (t == (m * m)) res[k]++;
					}
				}
			}
			rotate(se, m);
			k++;
		}
		cout << res[0] << ' ' << res[1] << ' ' << res[2] << ' ' << res[3] << '\n';
	}
}