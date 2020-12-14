#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
//prototyping funtions
void enter(int a[][10], int b[][10], int row, int col, int num = 2);
void add(int a[][10], int b[][10], int row, int col);
void sub(int a[][10], int b[][10], int row, int col);
void transpose(int arr[][10], int row, int col);
void scalar_mult(int arr[][10], int row, int col, int x);
void print();

main()
{
	int row, col, choice, cont, x;

	//making three matrix and the last one is for the result
	int a[10][10], b[10][10], res[10][10];

	do
	{
		system("cls");
		//welcoming
		cout << "Welcome to our program , we provide these services" << endl;
		cout << "1-Matrix addition" << endl;
		cout << "2-Matrix Subtraction" << endl;
		cout << "3-Matrix Scalar multiplication" << endl;
		cout << "4-Matrix Transpose" << endl;
		cout << "Choose: ";
		
		if (!(cin >> choice) == 0) 
		{
			switch (choice)
			{
			case 1:
				cout << "Enter Number of rows and columns for the matrix: ";
				cin >> row >> col;
				if ((row > 10 || row < 1) || (col > 10 || col < 1))
				{
					cout << "Error! rows or columns should be between 1 and 10 only";
					break;
				}
				else
				{
	
					enter(a, b, row, col);
					add(a, b, row, col);
					break;
				}
	
			case 2:
				cout << "Enter Number of rows and column for the matrix: ";
				cin >> row >> col;
				if ((row > 10 || row < 1) || (col > 10 || col < 1))
				{
					cout << "Error! rows or columns should be between 1 and 10 only";
					break;
				}
				else
				{
	
					enter(a, b, row, col);
					sub(a, b, row, col);
					break;
				}
	
			case 3:
				cout << "Enter Number of rows and column for the matrix: ";
				cin >> row >> col;
				if ((row > 10 || row < 1) || (col > 10 || col < 1))
				{
					cout << "Error! rows or columns should be between 1 and 10 only";
					break;
				}
				else
				{
					cout << "Enter Scalar:";
					cin >> x;
					enter(a, b, row, col, 1);
					scalar_mult(a, row, col, x);
					break;
				}
	
			case 4:
				cout << "Enter Number of rows and column for the matrix: ";
				cin >> row >> col;
				if ((row > 10 || row < 1) || (col > 10 || col < 1))
				{
					cout << "Error! rows or columns should be between 1 and 10 only";
					break;
				}
				else
				{
					enter(a, b, row, col, 1);
					transpose(a, row, col);
					break;
				}
	
			default:
				cout << "what are you doing? you have 4 options only bye!";
			}
			cout << endl << endl;
			cout << "Wanna continue ? " << endl;
			cout << "0-No" << "\t 1-Yes" << endl;
			cin >> cont;
		}
			
		else 
		{
			cout << "Wrong input.\nPlease choose a number in the correct range\n";
			cout << endl << endl;
			cout << "Wanna continue ? " << endl;
			cout << "0-No" << "\t 1-Yes" << endl;
			cin >> cont;	
		}
			
	
		} while (cont == 1);
	}
	
//	else if (typeid(choice).name != "i")
//	{
//		cout << "The type of your input is wrong. Please choose a number in the correct range\n";	
//	}		



// ENTER DATA

void enter(int a[][10], int b[][10], int row, int col, int num)
{
	int i, j;
	switch (num)
	{
	case 1:

		cout << endl
			 << "Enter elements of  the matrix:" << endl;
		for (i = 0; i < row; ++i)
		{
			for (j = 0; j < col; ++j)
			{
				cout << "Enter elements a" << i + 1 << j + 1 << ": ";
				cin >> a[i][j];
			}
		}
		break;
	case 2:

		cout << endl
			 << "Enter elements of matrix 1:" << endl;
		for (i = 0; i < row; ++i)
		{
			for (j = 0; j < col; ++j)
			{
				cout << "Enter elements a" << i + 1 << j + 1 << ": ";
				cin >> a[i][j];
			}
		}

		cout << endl
			 << "Enter elements of matrix 2:" << endl;
		for (i = 0; i < row; ++i)
		{
			for (j = 0; j < col; ++j)
			{
				cout << "Enter elements b" << i + 1 << j + 1 << ": ";
				cin >> b[i][j];
			}
		}
		break;
	}
}

//addition
void add(int a[][10], int b[][10], int row, int col)

{
	int res[row][col];
	//add
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			res[i][j] = a[i][j] + b[i][j];
		}
	}
	//print
	cout << "Addition";
	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < col; j++)
		{
			cout << res[i][j] << "  ";
		}
	}
}
// Subtraction
void sub(int a[][10], int b[][10], int row, int col)

{
	int res[row][col];
	//sub
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			res[i][j] = a[i][j] - b[i][j];
		}
	}
	//print
	cout << "Subtraction";
	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < col; j++)
		{
			cout << res[i][j] << "  ";
		}
	}
}

//Scalar multiplication
void scalar_mult(int arr[][10], int row, int col, int x)

{
	int res[row][col];
	//sca_multi
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			res[i][j] = arr[i][j] * x;
		}
	}
	//print
	cout << "Scalar Multiplication";
	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < col; j++)
		{
			cout << res[i][j] << "  ";
		}
	}
}

void transpose(int arr[][10], int row, int col)
{

	int res[row][col];
	//Transpose
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			res[i][j] = arr[j][i];
		}
	}
	//print
	cout << "Transpose";
	for (int i = 0; i < col; i++)
	{
		cout << endl;
		for (int j = 0; j < row; j++)
		{
			cout << res[i][j] << "  ";
		}
	}
}
