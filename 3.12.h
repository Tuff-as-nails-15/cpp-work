//Ian Cronizer 9-26-22
//3.12 header
#include <string>
#include <limits>

//Making a class to use for main function
class date
{
//Making an acess specifier so our main can use the template
public:
    //function to use for calling later in main
    date (int cMonth, int cDay, int cYear)
    {
        setMonth(cMonth);
        setDay(cDay);
        setYear(cYear);
    }
//Set function to store local variable
void setDay(int cDay)
    {
        day = cDay;
        if(day > 31)
            day = 1;
    }
//get function to allow callback and finish the set functions purpose
    int getDay()
    {
        return day;
    }
//Set function to store local variable
void setMonth(int cMonth)
    {
        month = cMonth;
        if(month > 12)
            month = 1;
    }
//get function to allow callback and finish the set functions purpose
    int getMonth()
    {
        return month;
    }
//Set function to store local variable
void setYear(int cYear)
    {
        year = cYear;
        if(year > 2030)
            year = 2002;
    }
//get function to allow callback and finish the set functions purpose
    int getYear()
    {
    return year;
    }

    //setting up variables in class to be called later in main
    void displayDate()
    {
        std::cout << getMonth();
        std::cout << "/" << getDay();
        std::cout << "/" << getYear();
    }
//Making an acess specifier to hide data from user
private:
    int day, month, year;
};
