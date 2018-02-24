#include <QCoreApplication>
#include "iostream"
#include "person.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {
        Person one;                       // constructor #1 (default constructor)
        Person two("Smythecraft");        // constructor #2 with 1 default argument
        Person three("Dimwiddy", "Sam");  // constructor #2 without default arguments

        one.Show();
        one.FormalShow();

        two.Show();
        two.FormalShow();

        three.Show();
        three.FormalShow();
    }
    
    return a.exec();
}
