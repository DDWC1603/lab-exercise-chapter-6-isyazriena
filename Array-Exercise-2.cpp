//student name: intan syazriena binti mohd. shahidon
//student id:a17dw2281
//this is not a complete program. please finish the program. thank you.


#include <iostream>
using namespace std;

int mark[5]={19,10,8,17,9};
int main()
{
	int value;
	
	//insert different value to the third element
	//tukar third element tu dengan value lain
	mark[2]=7;/*your valie*/

	//get user input and insert sub the third element
	//tukar the third element yang baru ditukar tu dengan input dari user
	cout << "Enter a value to replace 3rd element" << endl;
	cin >> value;
	mark[2]=value;

	//print the first element of the array
	cout << "The first element in array is: " << mark[0] << endl;

	//print the xth element of the array
	cout << "The xth element of array is: " << mark[4] << endl;

}
