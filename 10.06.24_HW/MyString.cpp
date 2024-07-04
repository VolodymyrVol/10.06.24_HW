#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString()
{
	length = 80;
	str = new char[length];
}

MyString::MyString(int size)
{
	length = size;
	str = new char[length];
}

MyString::MyString(const char* Str)
{
	length = strlen(Str);

	str = new char[length];
	strcpy_s(str, length, Str);
}

MyString::~MyString()
{
	delete[] str;
}

void MyString::Input(const char* Str, int len)
{
	str = new char[len];
	strcpy_s(str, len, Str);
	length = len;
}

void MyString::Show()
{
	cout << str << "\t" << length << endl;
}

int MyString::MyChr(char c)
{
	for (int i = 0; i < length; i++)
	{
		if (str[i] == c)
		{
			return i;
		}
	}
	return -1;
}

int MyString::MyStrLen()
{
	length = strlen(str);
	return length;
}

void MyString::MyDelChr(char c)
{
	int index = 0;
	for (int i = 0; i < length; i++)
	{
		if (str[i] == c)
		{
			index = i;
		}
	}
	char* ptr = new char[length - 1];

}

int MyString::MyStrCmp(MyString& b)
{
	if (strlen(this->str) > strlen(b.str))
	{
		return 1;
	}
	else if (strlen(this->str) < strlen(b.str))
	{
		return -1;
	}
	else 
	{
		return 0;
	}
}
