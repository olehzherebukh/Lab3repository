//my comment

#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
#define size_of_matrix 5
using namespace std;




void Vvid(int arr[size_of_matrix][size_of_matrix])
{
	int x, k, i, j, a;
	for (int i = 0; i < size_of_matrix; i++)
	{
		for (int j = 0; j < size_of_matrix; j++)
		{
			cin >> arr[i][j];
		}
		cout << endl;
	}
}

void Sort_by_Vybir(int arr[size_of_matrix][size_of_matrix])
{
	int x, k, i, j;
	for (int i = 0; i < size_of_matrix; i++)
	{
		for (int k = 0; k < size_of_matrix-1; k++)
		{
			int maxIndex = k;
			x = arr[i][k];
			for (int j = k + 1; j < size_of_matrix; j++) {
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

void calculation_of_averageGeomValue_and_sumOfAverageValues(int arr[size_of_matrix][size_of_matrix])
{
	int i;
	Sort_by_Vybir(arr);
	float AverageGeomValue;
	double sumOfAverageValues = 0;
	for (int j = 0; j < 5; j++)
	{
		float dobytokOfAllElemetsInColumn = 1.0;
		for (i = 0; i < 5; i++)
		{
			dobytokOfAllElemetsInColumn = dobytokOfAllElemetsInColumn * arr[i][j];
		}
		AverageGeomValue = pow(dobytokOfAllElemetsInColumn, (1.0 / 5.0));
		cout << AverageGeomValue << "\t";
		sumOfAverageValues = sumOfAverageValues + AverageGeomValue;

	}
	cout << endl;
	cout << endl;
	cout << sumOfAverageValues;
}

void Vyvid(int arr[size_of_matrix][size_of_matrix])
{
	for (int i = 0; i < size_of_matrix; i++)
	{
		for (int j = 0; j < size_of_matrix; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}



int main()

{
	int arr[size_of_matrix][size_of_matrix];
	Vvid(arr);
	Sort_by_Vybir(arr);
	Vyvid(arr);
	calculation_of_averageGeomValue_and_sumOfAverageValues(arr);
}

