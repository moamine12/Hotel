#include <iostream>
#include "date.h"
#include "client.h"
#include "chambre.h"
int main(){
    date d(20,1,2004);
    std::cout<<toString(d)<<std::endl;
    client c("123","Doe","john");
    std::cout<<c.id()<<std::endl;
    std::cout<<clientExiste(c,"124")<<std::endl;
    c.updateId("1234");
    std::cout<<c.id()<<std::endl;
    std::cout<<afficheInfoClient(c)<<std::endl;
    chambre ch(100,"single",100);
    std::cout<<ch.type()<<std::endl;

}