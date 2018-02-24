#include "person.h"
#include "iostream"

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
    fname[0] = fn[0];
}
