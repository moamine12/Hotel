#include "reservation.h"
#include <string>
#include <ostream>
#include "date.h"
#include <cassert>
#include "chambre.h"
reservation::reservation(date date_debut,int nombre_de_nuit,std::string id_hotel,int id_chambre, std::string id_client,float montant_total):_date_debut(date_debut),_nombre_de_nuit(nombre_de_nuit),_id_hotel(id_hotel),_id_chambre(id_chambre),_id_client(id_client),_montant_total(montant_total){
    assert(estReservation(nombre_de_nuit, montant_total)&& "cette reservation n'est pas valide");
};
date reservation::dateDebut() const{return _date_debut};
int reservation::nombreDeNuit() const{return _nombre_de_nuit};
std::string reservation::idHotel() const{return _id_hotel};
int reservation::idChambre() const{return _id_chambre};
std::string reservation::idClient() const{return _id_client};
float reservation::montantTotal() const{return _montant_total};
void reservation::updateDate(date d){_date_debut=d};
void reservation::updateNombreDeNuit(int n){_nombre_de_nuit=n};
void reservation::updateIdHotel(std::string id){_id_hotel=id};
void reservation::updateIdChambre(int id){_id_chambre=id};
void reservation::updateIdClient(std::string id){_id_client=id};
void reservation::updateMontantTotal(float m){_montant_total=m};
float reservation::calculMontantTotal(){
    _montant_total=_nombre_de_nuit* (trouveChambre(_id_chambre, _tabch).prix());
    return _montant_total;
};
bool estReservation(int nombre_de_nuit,float montant_total){
    bool test=true;
    if ((nombre_de_nuit<0)||(montant_total<0)) {
        test=false;
    }
    return test;
};
std::string afficheInfoReservation(const reservation& r){
    std::string ch="le nombre de nuit est "+ std::to_string(r.nombreDeNuit()) +"\n"
    "la date de debut de reservation est  "+ r.dateDebut().toString() +"\n"
    "l'identifiant de l'hotel est  "+ r.idHotel() +"\n"
    "l'identifiant de la chambre est  "+ std::to_string(r.idChambre()) +"\n"
    "l'identifiant du client est  "+ r.idClient() +"\n"
    "le montant total de la reservation est "+std::to_string(r.montantTotal()) +"\n"
    return ch;
    };
