#pragma once


// declarations..

#include<iostream>
#include<string>
using namespace std;
class Compiler { // Abstract classs ( it objects cannot be made) ( but in polymorphism objects can be made..)
public:
	/// <summary>
	/// compiler class is here an Abstract class with pure virtual functions.
	/// </summary>
	virtual bool   verify(string str, int& cntEqOpt) = 0;
	virtual string makeTokensOfChar(string str) = 0;
	virtual string makeTokenOfNumbers(string str) = 0;
	virtual string makeTokensOfAssignmentOpt(string str) = 0;
	virtual string makeTokensOfCompOpt(string& str, int& eqOpt) = 0;

};

class Scanner : public Compiler {
private:
public:
	/// <summary>
	/// Scanner class also include method overriding
	/// </summary>


	// Writing virtual in declarations with these functions which are override is good practice.
	// but don't write virtual in definitions(not good practice).
	virtual bool    verify(string str, int& cntEqOpt) override;
	virtual string  makeTokensOfChar(string str) override;
	virtual string  makeTokenOfNumbers(string str) override;
	virtual string  makeTokensOfAssignmentOpt(string str) override;
	virtual string  makeTokensOfCompOpt(string& str, int& eqOpt) override;


};

