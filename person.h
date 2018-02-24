#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
private:
     static const int LIMIT = 25;
     std::string lname;  // фамилия
     char fname[LIMIT];  // имя

public:
     Person(); // #1
     Person(const std::string & ln, const char * fn ="Heyyou");  // #2

     void Show() const;        // format: fname lname
     void FormalShow() const;  // format: lname, fname
};

#endif // PERSON_H
