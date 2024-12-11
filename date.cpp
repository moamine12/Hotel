#include "date.h"

date::date(int jour=1,int mois=1,int annee=1900):_jour(jour),_mois(mois),_annee(annee){
    assert(isDate(jour,mois,annee) && "date n'est pas valide")
}
int date::jour() const{
    return _jour;
}
int date::mois() const{
    return _mois;
}
int date::annee() const{
    return _annee;
}
void date::updatejour(int jour){
    _jour=jour;
}
void date::updatemois(int mois){
    _mois=mois;
}
void date::updateannee(int annee){
    _annee=annee;
}
void date::next(){
    if (_jour!=getdaysinmonth(_mois)){
        _jour++;
    }
    else if (_jour=31 && month=12){
        _jour=1;
        _mois=1;
        _annee++;    
    }
    else{
        _mois++;
        _jour=1;
    }
}
void date::before(){
    if (_jour==1){
        _month--;
        _jour=getdaysinmonth(_month);
    }
    else if (_jour=1 && month=1){
        _jour=31;
        _mois=12;
        _annee--;    
    }
    else{
        _jour--;
    }
}
bool isDate(int jour,int mois,int annee){
    bool test=true;
    if (12<mois||mois<1){
        test=false;
    }
    elif(annee<1900){
        test=false;
    }
    elif((mois=1 && (jour>31||jour<1))||(mois=3 && (jour>31||jour<1))||(mois=5 && (jour>31||jour<1))||(mois=7 && (jour>31||jour<1))||(mois=8 && (jour>31||jour<1))||(mois=10 && (jour>31||jour<1))||(mois=12 && (jour>31||jour<1))){
        test=false;
    }
    elif((mois=4 && (jour>30||jour<1))||(month=6 && (jour>30||jour<1))||(month=9 && (jour>30||jour<1))||(month=11 && (jour>30||jour<1))){
        test=false;

    }
    elif(mois=2){
        if(annee%4==0 && (jour>29||jour<1)){
            test=false;
        }
        elif(annee%4!=0 && (jour>28||jour<1)){
            test=false;
        }
    } 
    return test;
}
int getDayinmonth(int mois ,int annee){
    int jours
    if (mois==1||mois==3||mois==5||mois==7||mois==8||mois==10||mois=12){
        jours=31;
    }
    elif (mois==4||mois==6|mois==9||mois==11){
        jours=30;
    }
    elif(annee%4==0 && mois==2){
        jours=29;
    }
    elif(annee%4!=0 && mois==2){
        jours=28;
    }
    return jours;
}
int dayOfTheYear(date d);{
    int day;
    for (int i=1 i<d.month(),i++){
        day+=getDayinmonth(i)
    }
    day+=d.jour()
    return day;
}
std::string toString(date d) {
        return std::to_string(d.jour()) + "/" + std::to_string(d.mois() + "/" to_string(d.annee())) ;
    }