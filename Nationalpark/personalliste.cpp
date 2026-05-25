#include "personalliste.h"

Personalliste::Personalliste() {}

std::vector<Angestellter*> Personalliste::getPersonal() const{
    return personal;
}

void Personalliste::insertPersonal(Angestellter* angestellter){
    personal.push_back(angestellter);
}

int Personalliste::sizePersonalList(){
    return personal.size();
}
