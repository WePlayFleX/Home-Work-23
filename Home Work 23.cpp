#include <iostream>
#include <ctime>

using namespace std;

const int nMatr = 5;

void InitMatrInt(int matr[][nMatr],
			     int sizeN = nMatr);

void OutputMatrInt(int matr[][nMatr],
				   int sizeN = nMatr);

int MaxElementInt(int matr[][nMatr],
			      int sizeN = nMatr);

int MinElementInt(int matr[][nMatr],
			      int sizeN = nMatr);

void InitMatrDouble(double matr[][nMatr],
					int sizeN = nMatr);

void OutputMatrDouble(double matr[][nMatr],
					  int sizeN = nMatr);

double MaxElementDouble(double matr[][nMatr],
					    int sizeN = nMatr);

double MinElementDouble(double matr[][nMatr],
					    int sizeN = nMatr);

void InitMatrChar(char matr[][nMatr],
				  int sizeN = nMatr);

void OutputMatrChar(char matr[][nMatr],
					int sizeN = nMatr);

char MaxElementChar(char matr[][nMatr],
				    int sizeN = nMatr);

char MinElementChar(char matr[][nMatr],
				    int sizeN = nMatr);


int main()
{
	srand(time(0));

	int matrInt[nMatr][nMatr];
	int iMinInt = 0, iMaxInt = 0;
	InitMatrInt(matrInt);
	OutputMatrInt(matrInt);
	cout << endl;
	iMaxInt = MaxElementInt(matrInt);
	cout << "The maximum element of the matrix is - " << iMaxInt << endl;
	iMinInt = MinElementInt(matrInt);
	cout << "The minimum element of the matrix is - " << iMinInt << endl << endl;

	double matrDouble[nMatr][nMatr];
	double iMinDouble = 0, iMaxDouble = 0;
	InitMatrDouble(matrDouble);
	OutputMatrDouble(matrDouble);
	cout << endl;
	iMaxDouble = MaxElementDouble(matrDouble);
	cout << "The maximum element of the matrix is - " << iMaxDouble << endl;
	iMinDouble = MinElementDouble(matrDouble);
	cout << "The minimum element of the matrix is - " << iMinDouble << endl << endl;

	char matrChar[nMatr][nMatr];
	char iMinChar = 0, iMaxChar = 0;
	InitMatrChar(matrChar);
	OutputMatrChar(matrChar);
	cout << endl;
	iMaxChar = MaxElementChar(matrChar);
	cout << "The maximum element of the matrix is - " << iMaxChar << " , whose serial number in the ASCII table is " << static_cast<int>(iMaxChar) << endl;
	iMinChar = MinElementChar(matrChar);
	cout << "The minimum element of the matrix is - " << iMinChar << " , whose serial number in the ASCII table is " << static_cast<int>(iMinChar) << endl << endl;

	system("pause");
	return 0;
}

void InitMatrInt(int matr[][nMatr],
			     int sizeN)
{
	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			matr[i][j] = rand() % 50 - 25;
		}
	}
}

void OutputMatrInt(int matr[][nMatr],
				   int sizeN)
{
	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			cout << '\t' << matr[i][j] << " ";
		}
		cout << endl;
	}
	return;
}

int MaxElementInt(int matr[][nMatr],
				  int sizeN)
{
	int maxElement = matr[0][0];

	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			if (matr[i][j] > maxElement)
			{
				maxElement = matr[i][j];
			}
		}
	}
	return maxElement;
}


int MinElementInt(int matr[][nMatr],
			      int sizeN)
{
	int minElement = matr[0][0];

	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			if (matr[i][j] < minElement)
			{
				minElement = matr[i][j];
			}
		}
	}
	return minElement;
}

void InitMatrDouble(double matr[][nMatr],
				    int sizeN)
{
	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			matr[i][j] = (rand() % 500 - 250) * 0.1;
		}
	}
}

void OutputMatrDouble(double matr[][nMatr],
					  int sizeN)
{
	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			cout << '\t' << matr[i][j] << " ";
		}
		cout << endl;
	}
	return;
}

double MaxElementDouble(double matr[][nMatr],
						int sizeN)
{
	double maxElement = matr[0][0];

	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			if (matr[i][j] > maxElement)
			{
				maxElement = matr[i][j];
			}
		}
	}
	return maxElement;
}


double MinElementDouble(double matr[][nMatr],
					    int sizeN)
{
	double minElement = matr[0][0];

	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			if (matr[i][j] < minElement)
			{
				minElement = matr[i][j];
			}
		}
	}
	return minElement;
}

void InitMatrChar(char matr[][nMatr],
				  int sizeN)
{
	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			matr[i][j] = rand() % 127;
		}
	}
}

void OutputMatrChar(char matr[][nMatr],
					int sizeN)
{
	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			cout << '\t' << matr[i][j] << " ";
		}
		cout << endl;
	}
	return;
}

char MaxElementChar(char matr[][nMatr],
				    int sizeN)
{
	char maxElement = matr[0][0];

	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			if (matr[i][j] > maxElement)
			{
				maxElement = matr[i][j];
			}
		}
	}
	return maxElement;
}


char MinElementChar(char matr[][nMatr],
				    int sizeN)
{
	char minElement = matr[0][0];

	for (int i = 0; i < sizeN; i++)
	{
		for (int j = 0; j < sizeN; j++)
		{
			if (matr[i][j] < minElement)
			{
				minElement = matr[i][j];
			}
		}
	}
	return minElement;
}


