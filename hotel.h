#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#include "chambre.h"
#include <vector>
class hotel{
public:    
    hotel(std::string id="",std::string nom="",std::string ville="",std::vector<chambre> tabch);
    std::string id()const;
    std::string nom() const;
    std::string ville()const;
    std::vector<chambre> tabch()const;
    void updateId(std::string id );
    void updateNom(std::string nom);
    void updateVille(std::string ville);
    void updateTabch(chambre ch);
    void ajoutChambre(chambre ch);
    void supprimerChambre(chambre ch);
private:
    std::string _id;
    std::string _nom;
    std::string _ville;
    std::vector<chambre> _tabch;
};
std::string infoHotel(const hotel& h);
std::string afficheDetailsChambre(const hotel& h);
#endif
