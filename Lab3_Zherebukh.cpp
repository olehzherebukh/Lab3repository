

#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

void Vvid(int arr[5][5])
{
	int x, k, i, j, a;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
		cout << endl;
	}
}

void Sort(int arr[5][5])
{
	int x, k, i, j, a;
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			int maxIndex = k;
			x = arr[i][k];
			for (int j = k + 1; j < 5; j++) {
				if (arr[i][j] > x)
				{
					maxIndex = j;
					x = arr[i][j];
				}
			}
			arr[i][maxIndex] = arr[i][k];
			arr[i][k] = x;
		}
	}

}

void rah(int arr[5][5])
{
	int i;
	Sort(arr);
	float f;
	double s = 0;
	for (int j = 0; j < 5; j++)
	{
		float d = 1.0;
		for (i = 0; i < 5; i++)
		{
			d = d * arr[i][j];
		}
		f = pow(d, (1.0 / 5.0));
		cout << f << "\t";
		s = s + f;

	}
	cout << endl;
	cout << endl;
	cout << s;
}

void Vyvid(int arr[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}



int main()

{
	int arr[5][5];
	Vvid(arr);
	Sort(arr);
	Vyvid(arr);
	rah(arr);
}

