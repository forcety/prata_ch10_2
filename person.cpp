#include "person.h"
#include <iostream>
#include <cstring>


Person::Person()
{
    lname = "";
    fname[0] = '\0';
    std::cout << "Default constructor called\n" ;
}

Person::Person(const std::string & ln, const char * fn)
{
    std::cout << "Main constructor called "
              << "with arguments " << ln << " and " << fn << "\n";
    lname = ln;
    strcpy(fname, fn) ;
}

void Person::Show() const
{
    std::cout << fname << " " << lname << "\n";
}

void Person::FormalShow() const
{
    std::cout << lname << ", " << fname << "\n";
}
