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
	// Нижняя и верхняя границы стека
	enum { EMPTY = -1, FULL = 20 };
	// Массив для хранения данных
	char st[FULL + 1];
	// Указатель на вершину стека
	int top;

public:
	// Конструктор
	Stack() 
	{
		clear();
	}
	// Добавление элемента
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
	// Извлечение элемента
	char Pop()
	{
		T val = data->value;
		MyData<T>* temp = data;
		data = data->next;
		delete temp;
		top--;
		return val;
	}
	// Очистка стека
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
	//Проверка размера в стэк
	int GetSize
	{
		return top;
	}
	// Проверка существования элементов в стеке
	bool IsEmpty() 
	{
		return top == 0;
	}
	// Проверка на переполнение стека
	bool IsFull()
	{
		return top == size;
	}
	// Количество элементов в стеке
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
