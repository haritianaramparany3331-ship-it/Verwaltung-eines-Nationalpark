#ifndef SAEUGETIER_H
#define SAEUGETIER_H
#include "spezies.h"

class Saeugetier : public Spezies
{
private:
    bool m_rudelTier;
    int m_tragzeit;
    double m_durschnittsgewicht;
public:
    Saeugetier(std::string bezeichnung, bool gefaehrdet, bool raubtier, bool rudelTier, int tragzeit, double durschnittsgewicht)
        : Spezies(bezeichnung, gefaehrdet, raubtier), m_rudelTier(rudelTier), m_tragzeit(tragzeit), m_durschnittsgewicht(durschnittsgewicht){};
    ~Saeugetier(){};
    void serialize(std::ofstream &out) override;
    static Spezies* deserialize(std::ifstream &in, std::string &bezeichnung, bool &gefaehrdet, bool &raubtier);
    void display() override;
};

#endif // SAEUGETIER_H
