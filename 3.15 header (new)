//Ian Cronizer 9-26-22
//3.15 header
#include <string>
#include <limits>

//Making a class to use for main function
class name
{
//Making an acess specifier so our main can use the template
public:
    //function to use for calling later in main
    name (std::string cFName, std::string cLName)
    {
        setFName(cFName);
        setLName(cLName);
    }
//Set function to store local variable
void setFName(std::string cFName)
    {
        fName = cFName;

    }
//get function to allow callback and finish the set functions purpose
    std::string  getFName()
    {
        return fName;
    }
//Set function to store local variable
void setLName(std::string  cLName)
    {
        lName = cLName;
    }
//get function to allow callback and finish the set functions purpose
    std::string  getLName()
    {
        return lName;
    }

    //setting up variables in class to be called later in main
    void displayName()
    {
        std::cout << "Name: "<< getFName();
        std::cout << " " << getLName() << std:: endl;
    }
//Making an acess specifier to hide data from user
private:
    std::string lName, fName;
};

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
        std::cout << "Date: " << getMonth();
        std::cout << "/" << getDay();
        std::cout << "/" << getYear() << std::endl;
    }
    //displays age
    void displayAge()
    {
        std::cout << "Age: " << 2022-getYear() << std::endl;
    }
    //calculates heartrate and displays it
    void displayHeartRate()
    {
    std::cout << "Minimum Heart Rate: " << (220-(2022-getYear()))*50/100 << std:: endl;
    std::cout << "Maximum Heart Rate: " << 220-(2022-getYear());
    }
//Making an acess specifier to hide data from user
private:
    int day, month, year;
};
