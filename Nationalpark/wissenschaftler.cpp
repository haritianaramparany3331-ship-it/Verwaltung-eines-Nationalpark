#include "wissenschaftler.h"

std::string Wissenschaftler::getInfo(){
    return "Vorname: " + m_vorname+
           "\nNachname: " + m_nachname+
           "\nBeruf: Wissenschaftler"+
           "\nPersonalnummer: " + std::to_string(m_personalnummer)+
           "\nStundenzahl: " + std::to_string(m_stundenzahl)+
           "\nGehalt: " + std::to_string(m_gehalt)+
           "\nFachgebiet: " + m_fachgebiet+
           "\nAnzahl von Studien: " + std::to_string(m_anzahlStudien);
}
