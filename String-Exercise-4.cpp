//student name: intan syazriena binti mohd. shahidon
//student id: a17dw2281
//convert string to uppercase
//complete the fragment code below using the string to uppercase function.

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	char lowerToUpper[80];
	int i;

	strcpy(lowerToUpper, "This is a check");

	for(i=0;i<80;i++)
	{
		lowerToUpper[i] = /*uppercase function*/toupper(lowerToUpper[i]);

	}

	cout<<lowerToUpper<<endl;
}
	
