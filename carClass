//Ian Cronizer 9-13-22
//Car Class
#include<iostream>

using namespace std;

//Making a class to use for main function
class car
{
//Making an acess specifier so our main can use the template
public:
    //function to use for calling later in main
    car (string cMake, string cModel, string cColor, int cYear, int cMilage)
    {
        setMake(cMake);
        setModel(cModel);
        setColor(cColor);
        setYear(cYear);
        setMilage(cMilage);
    }
//Set function to store local variable
void setMake(string cMake)
    {
        make = cMake;
        if(year < 1998)
            cout << "Classic Car " << endl;
    }
//get function to allow callback and finish the set functions purpose
    string getMake()
    {
        return make;
    }
//Set function to store local variable
void setModel(string cModel)
    {
        model = cModel;
    }
//get function to allow callback and finish the set functions purpose
    string getModel()
    {
        return model;
    }
//Set function to store local variable
void setColor(string cColor)
    {
        color = cColor;
    }
//get function to allow callback and finish the set functions purpose
    string getColor()
    {
    return color;
    }
//Set function to store local variable
void setMilage(int cMilage)
    {
        milage = cMilage;
    }
//get function to allow callback and finish the set functions purpose
    int getMilage()
    {
    return milage;
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
    void printCar()
    {
        cout << getMake() << endl;
        cout << getModel() << endl;
        cout << getColor() << endl;
        cout << getYear() << endl;
        cout << getMilage() << endl;
    }
//Making an acess specifier to hide data from user
private:
    string make, model, color;
    int year, milage;
};

//main function
int main()
{
    //initializing car template
    car myCar("VW", "Beetle", "Brown", 1976, 198233);
    myCar.printCar();

    //makes blank line space for readability
    cout << endl;

    //initializing car template
    car yourCar("Porche", "Green", "911", 1994, 240131);
    yourCar.printCar();
}
