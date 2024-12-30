#ifndef RESERVATION_H
#define RESERVATION_H
#include <string>
#include "date.h"
#include "client.h"
#include "date.h"
#include "hotel.h"

class Reservation{
public:
    reservation(date date_debut , int nombre_de_nuit=1,std::string id_hotel="",std::string id_chambre="",std::string id_client="",float montant_tot=0.0);
    date dateDebut() const;
    std::string nombreDeNuit() const;
    std::string idHotel() const;
    std::string idChamrbe() const;
    std::string idClient() const;
    float montantTotal() const;
    void updateDate(date d);
    void updateNombreDeNuit(int n);
    void updateIdHotel(std::string id);
    void updateIdChambre(std::string id);
    void updateIdClient(std::string id);
    void updateMontantTotal(float m);
    float claculMontantTotal();
private:
    date _date_debut;
    int _nombre_de_nuit;
    std::string _id_hotel;
    std::string _id_chambre;
    std::string _id_client;
    float _montant_total;


};
bool estReservation(int nombre_de_nuit,float montant_total);
std::string afficheInfoReservation(Reservation& r const);
