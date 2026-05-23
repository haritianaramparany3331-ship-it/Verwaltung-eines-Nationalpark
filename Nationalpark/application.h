#ifndef APPLICATION_H
#define APPLICATION_H
#include "tierliste.h"

class Application
{
private:
    Tierliste animalList;
public:
    Application(){};
    ~Application(){};
    void userInterfaceAnzeigen();
};

#endif // APPLICATION_H
