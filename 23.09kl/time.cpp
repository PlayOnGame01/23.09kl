#include "time.h"
#include <iostream>
#include <time.h>
#include <stack>
using namespace std;

template<class T, int size>

class Stack
{
	int x = 1, y = 2, z = 3;
	string str1 = "({x-y-z-}*[[x+2y]-(z+4x))";
	string str2 = "({x-y-z-)8[[x+2y]-(z+4x)]";
	// ������ � ������� ������� �����
	enum { EMPTY = -1, FULL = 20 };
	// ������ ��� �������� ������
	char st[FULL + 1];
	// ��������� �� ������� �����
	int top;
};

void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));
	Stack ST;
	char c;
	// ���� ���� �� ����������
	while (!ST.IsFull())
	{
		c = rand() % 100;
		ST.Push(c);
	}
	ST.Output();
	// ���� ���� �� �����������
	int i = 0;
	while (i < 5)
	{
		c = ST.Pop();
		cout << c << " ";
		i++;
	}
	cout << "\n\n";
	ST.Output();


	system("pause");
}

