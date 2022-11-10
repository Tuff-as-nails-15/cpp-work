//Ian Cronizer 9-26-22
#include<iostream>
#include<string>
class HeartRates

{
public:
	HeartRates(string first, string last, int m, int d, int y)
	{
		fName = first;
		lName = last;
		bMonth = m;
		bDay = d;
		bYear = y;
	}
	void setfName(string first)
	{
		fName = first;
	}
	string getfName()
	{
		return fName;
	}

	void setlName(string last)
	{
		lName = last;
	}
	string getlName()
	{
		return lName;
	}

	void setbMonth(int m)
	{
		bMonth = m;
	}
	int getbMonth()
	{
		return bMonth;
	}

	void setbDay(int d)
	{
		bDay = d;
	}
	int getbDay()
	{
		return bDay;
	}

	void setbYear(int y)
	{
		bYear = y;
	}
	int getbYear()
	{
		return bYear;
	}

	void setcYear(int c)
	{
		cYear = c;
	}
	int getcYear()
	{
		return cYear;
	}

	void setcMonth(int cm)
	{
		cMonth = cm;
	}
	int getcMonth()
	{
		return cMonth;
	}

	void setcDay(int cd)
	{
		cDay = cd;
	}
	int getcDay()
	{
		return cDay;
	}

	int calcAge()
	{
	
		if (cMonth < bMonth) {
			return cYear - bYear - 1;
		}
		else if (cDay > bDay) {
			return cYear - bYear;
		}
		else if (cDay < bDay) {
			return cYear - bYear - 1;
		}
		else if (cDay == bDay) {
			return cYear - bYear;
		}

		return cYear - bYear;
	}

	int maxRate()
	{
		return 220 - calcAge();
	}

	void targerHR()
	{
		std::cout << "Target range is: " << .5 * maxRate() << " - " << .85 * maxRate() << endl;
	}

private:
	string fName, lName;
	int bMonth, bDay, bYear, cYear, cMonth, cDay;
};
