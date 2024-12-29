#include "client.h"
#include <string>
#include <iostream>
client::client(std::string id,std::string nom,std::string prenom ){_id=id ; _nom=nom ; _prenom=prenom;}
std::string client::id() const{return _id;}
std::string client::nom() const{return _nom;}
std::string client::prenom() const{return _prenom;}
void client::updateId(std::string id){_id=id;}
void client::updateNom(std::string nom){_nom=nom;}
void client::updatePrenom(std::string prenom){_prenom=prenom;}
bool clientExiste(const client& c,const std::string& id){
    if (c.id()==id) return true;
    else return false;
}
std::string afficheInfoClient(const client& c){
    std::string ch="l'id du client est " +c.id() + " le nom de client est " +c.nom() +" le prenom du client est " +c.prenom();
    return ch;
}
