#include "declarations.h"

// Remember I cannot made an object of base class but i can made a  pointer to a base class to achieve  polymorphism. i.e Complier * cmp=new Scanner;
// Or I can also make a reference to a base class to achieve polymorphism. like i.e first made obj of scanner, then Compiler & cmp=obj
int main()
{
	string syntax = "hiIamInshal ==1214423414543616356= fdisgalifadsgbfalydasilfDSKJFlskfADSAGVSGNDVJFCS MCHSVHJVDIUSKFB==========";
	Compiler* cmp = new Scanner;
	int cntEqOpt = 0; // I have to count equal operators so that I can identify how many assignment or comparison operators can be.
	if (cmp->verify(syntax, cntEqOpt))
	{
		cout << cmp->makeTokensOfChar(syntax) << endl;
		cout << cmp->makeTokensOfCompOpt(syntax, cntEqOpt) << endl; // I am passing the count of equal opt if their are only(comp opt) the count will be minus and then we don't have to check assignment opt bcz count is 0.
		if (cntEqOpt != 0)
			cout << cmp->makeTokensOfAssignmentOpt(syntax) << endl;
		cout << cmp->makeTokenOfNumbers(syntax) << endl;
	}




}