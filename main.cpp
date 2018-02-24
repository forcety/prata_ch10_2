#include <QCoreApplication>
#include "iostream"
#include "person.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {
        Person one;
    }
    
    return a.exec();
}
