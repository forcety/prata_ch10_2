#include <QCoreApplication>
#include "iostream"
#include "person.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {
        Person one;
        Person two("Smythecraft");
        Person three("Dimwiddy", "Sam") ;

        //one.Show();
    }
    
    return a.exec();
}
