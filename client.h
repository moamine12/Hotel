#ifndef _CLIENT_H
#define _CLIENT_H
#include <string>
class client {
public:
    client(std::string id="",std::string nom="",std::string prenom="")
    std::string id() const;
    std::string nom() const;
    std::string prenom() const;
    void updateid(std::string id);
    void updatenom(std::string nom);
    void updateprenom(std::string prenom);
    
    
    
    
    
    
    
}
