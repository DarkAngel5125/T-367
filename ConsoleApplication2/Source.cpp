#include<iostream>
using namespace std; 

int main()
{
	int a[30][30], n, m, i, j, k, p, q, v[60], d[60];
	cin >> n >> m >> p >> q;
	k = 0;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	for (i = 1; i <= m; i++)
	{
		if(i==q)
		for (j = 1; j <= n; j++)
		{
				k++;
				v[k] = a[i][j];
		}
	}
	k = 0;
	for (i = 1; i <= m; i++)
	{
		if (i == p)
		for (j = 1; j <= n; j++)
		{
			k++;
			d[k] = a[i][j];
		}
	}
    for (i = 1; i <= m; i++)
	{
		if (i == q)
			for (j = 1; j <= n; j++)
			{
				a[i][j] = d[j];
			}
	}
	for (i = 1; i <= m; i++)
	{
		if (i == p)
			for (j = 1; j <= n; j++)
			{
				a[i][j] = v[j];
			}
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " ";
			cout << endl;
	}
	_sleep(5000);
	return 0;
}