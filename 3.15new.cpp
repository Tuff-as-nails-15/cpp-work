//Ian Cronizer 9-26-22
//3.15
#include<iostream>
#include "3.15new.h"
//main function
int main()
{
    //displays the name specified
    name name1("huey", "luareh");
    name1.displayName();

    //displays the date specified
    date date1(12, 13, 1976);
    date1.displayDate();

    //displays the age specified
    date1.displayAge();

    //displays the heart rate
    date1.displayHeartRate();
}
