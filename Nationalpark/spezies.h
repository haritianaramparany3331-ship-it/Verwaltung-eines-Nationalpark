#ifndef SPEZIES_H
#define SPEZIES_H
#include <iostream>

class Spezies
{
protected:
    std::string m_bezeichnung;
    bool m_gefaehrdet;
    bool m_raubtier;
    int m_anzahl;
public:
    Spezies(std::string bezeichnung, bool gefaehrdet, bool raubtier) : m_bezeichnung(bezeichnung), m_gefaehrdet(gefaehrdet), m_raubtier(raubtier){};
    virtual ~Spezies(){};
    void setAnzahl(int &anzahl);
    int getAnzahl();
    virtual void serialize(std::ofstream &out) = 0;
    virtual void display() = 0;
};

#endif // SPEZIES_H
