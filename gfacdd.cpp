// gfactor.cpp : Defines the entry point for the console application.
//
//Written by Laurence, Apr. 2018
#include<iostream>
#include<string>
#include<math.h>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
	//int a[9][9];
	//int b[9][9] ;
	int bosnum;
	int i = 0, j = 0;
	int n = 0, m = 0;
	int cons = 0;
	int p = 0, d = 0;
	int nocons = 0;
	int bn;
	long t;
	double x = 0, y = 0;
	int im1, im2, im3, ip1, ip2, ip3, jm1, jm2, jm3, jp1, jp2, jp3;
	cout << "Please enter the number of boson:" << endl;
	cin >> bosnum;
	srand((int)time(NULL));
	double cons2, bosnum1, n1;
	for (t = 0; t < 10000000; t++)
	{
		m = 0;
		n = 0;
		int a[10][10] = { 0 };
		for (bn = 0; bn < bosnum; bn++)
		{
			i = rand() % 10;
			j = rand() % 10;
			//n = i;
			//m = j;
			a[i][j] = a[i][j] + 1;
		}
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				im1 = i - 1;
				im2 = i - 2;
				im3 = i - 3;
				ip1 = i + 1;
				ip2 = i + 2;
				ip3 = i + 3;
				jm1 = j - 1;
				jm2 = j - 2;
				jm3 = j - 3;
				jp1 = j + 1;
				jp2 = j + 2;
				jp3 = j + 3;
				if (i == 0)
				{
					im1 = 8;
					im2 = 7;
					im3 = 6;
				}
				if (i == 1)
				{
					im2 = 8;
					im3 = 7;
				}
				if (i == 2)
				{
					im3 = 8;
				}
				if (i == 9)
				{
					ip1 = 1;
					ip2 = 2;
					ip3 = 3;
				}
				if (i == 8)
				{
					ip2 = 1;
					ip3 = 2;
				}
				if (i == 7)
				{
					ip3 = 1;
				}
				if (j == 0)
				{
					jm1 = 8;
					jm2 = 7;
					jm3 = 6;
				}
				if (j == 1)
				{
					jm2 = 8;
					jm3 = 7;
				}
				if (j == 2)
				{
					jm3 = 8;
				}
				if (j == 9)
				{
					jp1 = 1;
					jp2 = 2;
					jp3 = 3;
				}
				if (j == 8)
				{
					jp2 = 1;
					jp3 = 2;
				}
				if (j == 7)
				{
					jp3 = 1;
				}

				if (a[i][j] == 1\
					&&a[i][jp1] == 0\
					&&a[i][jp2] == 0\
					&&a[i][jm1] == 0\
					&&a[i][jm2] == 0\
					&&a[ip1][j] == 0\
					&&a[ip1][jp1] == 0\
					&&a[ip1][jm1] == 0\
					&&a[ip2][j] == 0\
					&&a[im1][j] == 0\
					&&a[im1][jp1] == 0\
					&&a[im1][jm1] == 0\
					&&a[im2][j] == 0)
				{
					m++;

				}

			}
		}
		if (m == bosnum)
		{
			nocons++;
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
				{
					if (a[i][j] == 1)
					{
						im1 = i - 1;
						im2 = i - 2;
						im3 = i - 3;
						ip1 = i + 1;
						ip2 = i + 2;
						ip3 = i + 3;
						jm1 = j - 1;
						jm2 = j - 2;
						jm3 = j - 3;
						jp1 = j + 1;
						jp2 = j + 2;
						jp3 = j + 3;
						if (i == 0)
						{
							im1 = 8;
							im2 = 7;
							im3 = 6;
						}
						if (i == 1)
						{
							im2 = 8;
							im3 = 7;
						}
						if (i == 2)
						{
							im3 = 8;
						}
						if (i == 9)
						{
							ip1 = 1;
							ip2 = 2;
							ip3 = 3;
						}
						if (i == 8)
						{
							ip2 = 1;
							ip3 = 2;
						}
						if (i == 7)
						{
							ip3 = 1;
						}
						if (j == 0)
						{
							jm1 = 8;
							jm2 = 7;
							jm3 = 6;
						}
						if (j == 1)
						{
							jm2 = 8;
							jm3 = 7;
						}
						if (j == 2)
						{
							jm3 = 8;
						}
						if (j == 9)
						{
							jp1 = 1;
							jp2 = 2;
							jp3 = 3;
						}
						if (j == 8)
						{
							jp2 = 1;
							jp3 = 2;
						}
						if (j == 7)
						{
							jp3 = 1;
						}

						if (a[im1][jp2] == 1 || \
							a[im1][jp3] == 1 || \
							a[im2][jp1] == 1 || \
							a[im2][jp2] == 1 || \
							a[im3][jp1] == 1)
						{
							n++;
						}
					}


				}
			}
		}
		if (n != 0)
		{
			cons++;
		}
		n1 = n;
		bosnum1 = bosnum;
		x = n1 / bosnum1;
		//cons2 = cons2+2*x/(1+x);
		cons2 = cons2 + x;
	}

	double nocons1 = nocons;
	double cons1 = cons;
	double g = (nocons1 - cons1) / nocons1;
	double g1 = (nocons1 - cons2) / nocons1;

	cout << "nocons is:" << nocons << endl;
	cout << "cons is:" << cons << endl;
	cout << "g factor is :" << g << endl;
	cout << "g1 factor is :" << g1 << endl;
}
