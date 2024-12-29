#ifndef _CLIENT_H
#define _CLIENT_H
#include <string>
class client {
public:
    client(std::string id="",std::string nom="",std::string prenom="");
    std::string id() const;
    std::string nom() const;
    std::string prenom() const;
    void updateId(std::string id);
    void updateNom(std::string nom);
    void updatePrenom(std::string prenom);
private:
    std::string _id;
    std::string _nom;
    std::string _prenom;       
};
bool clientExiste(const client& c,const std::string& id);
std::string afficheInfoClient(const client& c);
#endif