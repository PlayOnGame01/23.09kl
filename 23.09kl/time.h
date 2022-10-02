#pragma once
#include<iostream>
using namespace std;

//template <class T>
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

public:
	// �����������
	Stack() 
	{
		clear();
	}
	// ���������� ��������
	void Push(char c)
	{
		if (top < size)
		{
			if (top == 0)
			{
				data = new MyData<T>;
				data->value = val;
			}
			else
			{
				MyData<T>* temp = new MyData<T>;
				temp->value = val;
				temp->next = data;
				data = temp;
			}
			top++;
		}
		else
		{
			cout << "STOP!!!" << endl;
		}
	}
	// ���������� ��������
	char Pop()
	{
		T val = data->value;
		MyData<T>* temp = data;
		data = data->next;
		delete temp;
		top--;
		return val;
	}
	// ������� �����
	void Clear()
	{
	MyData<T>* temp = data;
	while (data)
		{
		data = data->next;
		delete temp;
		temp = data;
		top--;
		}
	}
	//�������� ������� � ����
	int GetSize
	{
		return top;
	}
	// �������� ������������� ��������� � �����
	bool IsEmpty() 
	{
		return top == 0;
	}
	// �������� �� ������������ �����
	bool IsFull()
	{
		return top == size;
	}
	// ���������� ��������� � �����
	int GetCount()
	{
		return top == count;
	}


	void Output()
	{
		for (int i = 0; i < top + 1; i++)
		{
			cout << st[i] << " ";
		}
		cout << endl;
	}
};
