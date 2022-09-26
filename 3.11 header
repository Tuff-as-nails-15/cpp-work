//Ian Cronizer 9-26-22
//3.11 header
#include <string>
#include <limits>

//Making a class to use for main function
class car
{
//Making an acess specifier so our main can use the template
public:
    //function to use for calling later in main
    car (std::string cMake, std::string cfuelType, int cYear,std::string cColor,  int cEngineCapacity)
    {
        setMake(cMake);
        setFuelType(cfuelType);
        setYear(cYear);
        setColor(cColor);
        setEngineCapacity(cEngineCapacity);
    }
//Set function to store local variable
void setMake(std::string cMake)
    {
        make = cMake;
    }
//get function to allow callback and finish the set functions purpose
    std::string getMake()
    {
        return make;
    }
//Set function to store local variable
void setFuelType(std::string cfuelType)
    {
        fuelType = cfuelType;
    }
//get function to allow callback and finish the set functions purpose
    std::string getFuelType()
    {
        return fuelType;
    }
//Set function to store local variable
void setColor(std::string cColor)
    {
        color = cColor;
    }
//get function to allow callback and finish the set functions purpose
    std::string getColor()
    {
    return color;
    }
//Set function to store local variable
void setEngineCapacity(int cEngineCapacity)
    {
        engineCapacity = cEngineCapacity;
    }
//get function to allow callback and finish the set functions purpose
    int getEngineCapacity()
    {
    return engineCapacity;
    }
//Set function to store local variable
void setYear(int cYear)
    {
        year = cYear;
    }
//get function to allow callback and finish the set functions purpose
    int getYear()
    {
    return year;
    }

    //setting up variables in class to be called later in main
    void displayCarDetails()
    {
        std::cout << "Make: " << getMake() << std::endl;
        std::cout << "Year: " << getYear() << std::endl;
        std::cout << "FuelType: " << getFuelType() << std::endl;
        std::cout << "Color: " << getColor() << std::endl;
        std::cout << "Engine Capacity: " << getEngineCapacity() << std::endl;
    }
//Making an acess specifier to hide data from user
private:
    std::string make, fuelType, color;
    int year, engineCapacity;
};
