#include<iostream>
#include<string>
using namespace std;

class Invoice
{
public:
	Invoice(string PartNumber, string Description, int Quantity, int Price, double cVAT, double Discount)
	{
		setPart(PartNumber);
		setDescription(Description);
		setQuantity(Quantity);
		setPrice(Price);
		setcVAT(cVAT);
		setDiscount(Discount);
	}
	void setPart(string PartNumber)
	{
		part = PartNumber;
	}
	string getPartNumber()
	{
		return part;
	}
	void setDescription(string Description)
	{
		description = Description;
	}
	string getDescription()
	{
		return description;
	}
	void setQuantity(int Quantity)
	{
		quantity = Quantity;
	}
	int getQuantity()
	{
		return quantity;
	}
	void setPrice(int Price)
	{
		price = Price;
	}
	int getPrice()
	{
		return price;
	}
	void setcVAT(double cVAT)
	{
		VAT = cVAT;
	}
	double getcVAT()
	{
		return VAT;
	}
	void setDiscount(double Discount)
	{
		discount = Discount;
	}
	double getDiscount()
	{
		return discount;
	}
	void Verify()
	{
		string part, description;
		int quantity, price;
		double VAT, discount;
	}
	void getInvoiceAmount(int price, int quantity){
		if (price > 0 && quantity > 0) 
			{
				cout << price + quantity + VAT - discount;
			}
		else
		{
			cout << "Please Enter a Valid Price and or Quantity";
		}
		}
private:
	string part, description;
	int quantity, price;
	double VAT, discount;
};
