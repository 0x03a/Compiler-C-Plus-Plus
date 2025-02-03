// definitions
#include "declarations.h"

bool Scanner::verify(string str, int& cntEqOpt) // In this I am verifying the given syntax that the given code is according to the words i defined.
{
	int st = 0;
	int end = str.length() - 1;

	while (st <= end)
	{
		if (str[st] >= 'A' && str[st] <= 'z') {// do nothing
			st++;continue;
		}

		if (str[st] >= '0' && str[st] <= '9') { // do nothing
			st++;continue;
		}
		else if (str[st] == '=')
			cntEqOpt++;
		else if (str[st] == ' ')
		{
			st++; continue;
		}
		else
			return false;
		st++;

	}

	return true;
}

string Scanner::makeTokensOfChar(string str) {

	int start = 0;
	int end = str.length() - 1;
	string temp = "\0";
	while (start <= end)
	{

		if (str[start] >= 'A' and str[start] <= 'z')
		{
			temp += str[start];
		}

		start++;
	}
	return temp;
}

string Scanner::makeTokenOfNumbers(string str) {
	int start = 0;
	int end = str.length() - 1;
	string temp = "\0";
	while (start <= end)
	{

		if (str[start] >= '0' and str[start] <= '9')
		{
			temp += str[start];
		}

		start++;
	}
	return temp;
}

string Scanner::makeTokensOfAssignmentOpt(string str)
{

	int st = 0;
	int end = str.length() - 1;
	string temp = "\0";
	while (st <= end)
	{
		if (str[st] == '=')
		{
			temp += "'";
			temp += str[st];
			temp += str[st + 1];
			temp += "', ";
			str[st] = '-';
			str[st + 1] = '-';
		}


		st++;
	}
	return temp;
}
string Scanner::makeTokensOfCompOpt(string& str, int& eqOpt)
{

	int st = 0;
	int end = str.length() - 1;
	string temp = "\0";
	while (st <= end)
	{
		if (st + 1 <= end && str[st] == '=' && str[st + 1] == '=')
		{
			temp += "'";
			temp += str[st];
			temp += str[st + 1];
			temp += "', ";
			str[st] = '-';
			str[st + 1] = '-';
		}


		st++;
	}
	return temp;
}