#ifndef DATE_H
#define DATE_H
#include <string>

class date {
public:
    date(int jour = 1, int mois = 1, int annee = 1900);
    int jour() const;
    int mois() const;
    int annee() const;
    void updatejour(int j);
    void updatemois(int m);
    void updateannee(int a);
    void next();
    void before(); 
private:
    int _jour;
    int _mois;
    int _annee;
};

// Fonctions globales
bool isDate(int jour, int mois, int annee);
int getDayinmonth(int mois, int annee);
int dayOfTheYear(date d);
std::string toString(date d); 

#endif // DATE_H
