#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <string>
class chambre{
    public:
        chambre(int num=0, std::string type="single",float prix=100.0);
        int num() const;
        std::string type() const;
        float prix() const;
        void updateNum(int num);
        void updateType(std::string type);
        void updatePrix(float prix);
        private:
            int _num;
            std::string _type;
            float _prix;

};
bool estChambre(int num,std::string type,float prix);
std::string infoChambre(const chambre& ch );
#endif
