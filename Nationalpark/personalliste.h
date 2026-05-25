#ifndef PERSONALLISTE_H
#define PERSONALLISTE_H
#include "angestellter.h"
#include <vector>

class Personalliste
{
private:
    std::vector<Angestellter*> personal;
public:
    Personalliste();
    void insertPersonal(Angestellter* angestellter);
    int sizePersonalList();
    std::vector<Angestellter*> getPersonal() const;
    void csvSpeichern();
    void csvLaden();
};

#endif // PERSONALLISTE_H
