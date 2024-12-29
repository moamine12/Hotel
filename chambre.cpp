#include "chambre.h"
#include<string>
#include<iostream>
#include<cassert>

chambre::chambre(int num,std::string type,float prix):_num(num),_type(type),_prix(prix){
    assert(estChambre(num,type,prix) && "chambre n'est  pas valide");
}
int chambre::num() const{return _num;}
std::string chambre::type()const{return _type;}
float chambre::prix() const{return _prix;}
void chambre::updateNum(int num){_num=num;}
void chambre::updateType(std::string type){_type=type;}
void chambre::updatePrix(float prix){_prix=prix;}
bool estChambre(int num,std::string type,float prix){
    bool test=true;
    if (num<0) test=false;
    else if (prix<0) test=false;
    else if (type!="single" && type!="double" &&type!="suite") test=false;
    return test;}
