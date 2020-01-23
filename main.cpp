
#include <iostream>
#include "functions.h"

using namespace std;






int main(int argc, char* argv[]) {
    int start = 1;
    bool ignoreCase = true;
    bool ignoreSpaces = true;
    // check if enough arguments and output usage statement if not
    if (argc < 2) {
        printUsageInfo(argv[0]);
    }
    //check flags
    int i=1;
    if(argv[1][0]=='-')
    {

    	start++;
    	while (argv[1][i] != '\0')
    	{
    			if(tolower(argv[1][i]) == 'c')
    				ignoreCase = false;
    			else if (tolower(argv[1][i]) == 's')
    				 ignoreSpaces = false;
    			else printUsageInfo(argv[0]);
    			i++;
    	}
    }
i=1;

if(argc > 2)
{
    if(argv[2][0]=='-')
      {

      	start++;
      	while (argv[2][i] != '\0')
      	{
      			if(tolower(argv[2][i]) =='c')
      				ignoreCase = false;
      			else if (tolower(argv[2][i]) == 's')
      				 ignoreSpaces = false;
      			else printUsageInfo(argv[0]);
      			i++;
      	}
      }
}

if(start==argc)
	printUsageInfo(argv[0]);

for (int k=start; k<=argc-1; k++)

    isPalindrome(argv[k], ignoreCase, ignoreSpaces);

}
