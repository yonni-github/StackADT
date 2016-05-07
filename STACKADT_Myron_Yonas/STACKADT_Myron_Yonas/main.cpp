#include <iostream>
#include "Stacks.h"
#include "money.h"
#include <string>
using namespace std;
 
void main()
{
	
	Stack<string> mystack;
	Stack<int> myIntStack;
	Stack<Currency> myCurrencyStack;
	
	US usMoney;
	UK ukMoney;
	China chMoney;
	
	usMoney.setbill(10);
	usMoney.setcoin(150);
	ukMoney.setbill(80);
	ukMoney.setcoin(25);
	chMoney.setbill(56);
	chMoney.setcoin(185);
	chMoney.Normalize();

	cout << " Pushing 3 strings into stack..." << endl;
	mystack.insert("firstnode", 0);//doesnt matter what the second parameter is since it is only required for the base class
	mystack.insert("2node", 0);//2nd parameter is supposed to be position to insert or delete, but stack always does it in position 1 
	mystack.insert("3node", 0);
	cout << "calling isempty()..." << endl;
	if (mystack.listlength()==0)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Stack has information." << endl;
	}
	cout << "Popping 3 strings from stack..." << endl;
	mystack.print();
	cout << "calling isempty()..." << endl;
	if (mystack.listlength() == 0)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Stack has information." << endl;
	}

	cout << "\n**************************************************************************\n";
	cout << " Pushing 3 ints into stack..." << endl;
	myIntStack.insert(10, 0);//doesnt matter what the second parameter is since it is only required for the base class
	myIntStack.insert(20, 0);//2nd parameter is supposed to be position to insert or delete, but stack always does it in position 1 
	myIntStack.insert(30, 0);
	cout << "calling isempty()..." << endl;
	if (myIntStack.listlength() == 0)
	{
		cout << "stack is empty" << endl;
	}
	else
	{
		cout << "Stack has information." << endl;
	}
	cout << "Popping 3 ints from stack..." << endl;
	myIntStack.print();
	cout << "calling isempty()..." << endl;
	if (myIntStack.listlength() == 0)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Stack has information." << endl;
	}

	cout << "\n**************************************************************************\n";
	cout << " Pushing 3 currencies into stack..." << endl;
	myCurrencyStack.insert(usMoney, 0);//doesnt matter what the second parameter is since it is only required for the base class
	myCurrencyStack.insert(ukMoney, 0);//2nd parameter is supposed to be position to insert or delete, but stack always does it in position 1 
	myCurrencyStack.insert(chMoney, 0);
	myCurrencyStack.printlist();
	cout << "calling isempty()..." << endl;
	if (myCurrencyStack.listlength() == 0)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Stack has information." << endl;
	}
	cout << "Popping 3 currencies from stack..." << endl;
	myCurrencyStack.print();
	
	cout << "calling isempty()..." << endl;
	if (myCurrencyStack.listlength() == 0)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Stack has information." << endl;
	}

	system("pause");

}