#ifndef RESERVATION_H
#define RESERVATION_H
#include <string>
#include "date.h"
#include "client.h"
#include "hotel.h"

class reservation{
public:
    reservation(date date_debut , int nombre_de_nuit=1,std::string id_hotel="",int id_chambre=1,std::string id_client="",float montant_tot=0.0);
    date dateDebut() const;
    int nombreDeNuit() const;
    std::string idHotel() const;
    int idChambre() const;
    std::string idClient() const;
    float montantTotal() const;
    void updateDate(date d);
    void updateNombreDeNuit(int n);
    void updateIdHotel(std::string id);
    void updateIdChambre(int id);
    void updateIdClient(std::string id);
    void updateMontantTotal(float m);
    float calculMontantTotal();
private:
    date _date_debut;
    int _nombre_de_nuit;
    std::string _id_hotel;
    std::string _id_chambre;
    std::string _id_client;
    float _montant_total;


};
bool estReservation(int nombre_de_nuit,float montant_total);
std::string afficheInfoReservation(const reservation& r );
