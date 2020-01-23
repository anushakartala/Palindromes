#include <iostream>
#include "functions.h"
#include <cctype> // needed for tolower(char) and toupper(char) functions
#include <cstring> // needed for strcpy()

using namespace std;

void printUsageInfo(char programName[]) {
    cout << "Usage: ./mimir.out [-c] [-s] string ..." << endl << "-c: turn on case sensitivity" << endl << "-s: turn off ignoring spaces" << endl;
    exit(1); // exits from program from any function
}

bool isPalindromeR(char inputString[])
{
char newString[500];
int count;
count = strlen(inputString);

if (count<2)
{

	return true;
}
else
{
	if(inputString[0]==inputString[count-1])
	{

		for(int i=0; i<=count-3; i++)
		{
			newString[i]=inputString[i+1];
		}
		newString[count-2] = '\0';

		return isPalindromeR(newString);
	}
	else
		return false;
}

//return true;
}

bool isPalindrome(char inputString[], bool ignoreCase, bool ignoreSpace)
{
	int i=0;
	int j=0;
	int countFinal;
	bool isP;
	char temp[500];
	char temp2[500];
	char temp3[500];
	if (ignoreCase == true)
	{

		while (inputString[i] != '\0')
		{
			temp3[i] = tolower(inputString[i]);
			i++;
		}
		temp3[i] = '\0';

	}
	else
		strcpy(temp3, inputString);
	i=0;


	if (ignoreSpace == true)
	{

		while (temp3[i] != '\0')
		{
			if (isalnum(temp3[i]) == true)
			{
				temp[j] = temp3[i];
				j++;
			}
			i++;
		}
		temp[j] = '\0';
	}
	else
		strcpy(temp, temp3);

countFinal = strlen(temp);
if(temp[countFinal-1] == '.')
	temp[countFinal-1]='\0';
isP = isPalindromeR(temp);

if (isP==true)
	cout << "\""<<inputString << "\"" <<" is a palindrome." <<endl;
else
	cout << "\""<<inputString << "\"" <<" is not a palindrome." <<endl;
}


