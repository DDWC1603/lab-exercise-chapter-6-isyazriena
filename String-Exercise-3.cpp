//student name: intan syazriena binti mohd. shahidon
//student id: a17dw2281
//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char strPswd[80]="passwordsendiri";
	char strPswd2[80];

	cout<<"Enter password: ";
	cin >> strPswd2[80];
	//get the strPswd
	
	//make an if else that check the password(strPswd)
	//(string compare function (strPswd,"Check")) 
		if (strPswd2!=strPswd)
		{
		cout<<"invalid password "<<endl;
		}
	 	else
	 	{
		cout<<"Logged in "<<endl;
		}
		
		strcmp (strPswd, "Check");
	

	return 0;
}
