//============================================================================
// Name        : class.cpp
// Author      : Muhammad Ibrahim Balooch
// Version     :latest
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

/*******************************************************************************************************/ ///
class String
{

	char Str[50];

	/*********************************************************************************************************/
	char get_at(int i)
	{

		return Str[i];
	};
	/*************************************************************************************************************/
	void set_at(int i, char c)
	{

		Str[i] = c;
	};
	/**************************************************************************************************************/
  public:
	String()
	{

		Str[50] = '\0';
	};
	/***************************************************************************************************************/
	String(char *str)
	{

		int j = 0;

		while (*(str + j) != '\0')
		{

			j++;
		}
		for (int i = 0; i <= j; i++)
		{

			Str[i] = *(str + i);
		}
	};
	/********************************************************************************************************************/
	char getAt(int i)
	{

		return get_at(i + 1);
	};
	/*********************************************************************************************************************/
	void setAt(int i, char c)
	{

		set_at(i - 1, c);
	};
	/***********************************************************************************************************************/
	String substr(int pos, int len = 0)
	{

		char s[len];

		for (int i = pos; i < len; i++)
		{

			cout << Str[i];
		}

		return s;
	};
	/***************************************************************************************************************************/

	//String substr(int pos);// returns substring from the given position to the end.

	/***************************************************************************************************************************/
	void append(char a)
	{

		int i = 0;

		while (Str[i] ! = '\0')
		{

			i++;
		}

		Str[i] = a;

		Str[i + 1] = '\0';
	};
	/*******************************************************************************************************************************/
	void append(String str)
	{

		int i = 0, j = 0, l = 0;

		while (Str[i] ! = '\0')
		{

			i++;
		}

		while (str.Str[j] ! = '\0')
		{

			j++;
		}

		while (j > -1)
		{

			Str[i] = str.Str[l];

			l++;
			j--;
			i++;
		}
	};
	/**************************************************************************************************************************************/
	void append(char *str)
	{

		int i = 0, j = 0, l = 0;

		while (Str[i] ! = '\0')
		{

			i++;
		}

		while (str[j] ! = '\0')
		{

			j++;
		}
		while (j > -1)
		{

			Str[i] = str[l];
			l++;
			j--;
			i++;
		}

	}; /*************************************************************************************************************************************/
	int length()
	{

		int i = 0;

		while (Str[i] ! = '\0')
		{

			i++;
		}

		return i;
	};
	/*****************************************************************************************************************************************/
	//char* tocstring();// converts a String to c-string
	/*****************************************************************************************************************************************/
	void display()
	{

		cout << Str << endl;
	};
	/************************************************************************************************************************************/
	bool isEmpty()
	{

		if (Str[0] = = '\0')

			return 1;

		else

			return 0;
	};
	/**************************************************************************************************************************************/
	//void copy(const String& str){};// Copy one string to another ...
	//void copy(const char *);// copy cstring to String...
	//int find(char c){

	//for()

	//};// returns the index of character being searched.
	//bool equal(String);// should return true if both strings are same
	//int stoi();// function for converting a string to integer.
	~String(){};
};
/******************************************************************************************************/
int main()
{

	return 0;
}
