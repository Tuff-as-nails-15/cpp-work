//Ian Cronizer Project 3.10 - 10/14/22
#include<iostream>
#include<string>
#include"3.10.h"

int main()
{
	Invoice Invoice("three", "Pc", 3, 150, 0.02, 0);
	Invoice.getInvoiceAmount(Invoice.getPrice(), Invoice.getQuantity());
}
