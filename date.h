#ifndef DATE_H
#define DATE_H
namespace date{
    class date {
        public :
            date(int jour=1,int mois=1,int annee=1900);
            int jour() const;
            int mois() const;
            int annee() const;
            void updatejour(int j);
            void updatemois(int m);
            void updateannee(int a);
            void next();
            void back();
        private:
            int _jour;
            int _mois;
            int _annee;
    }
    bool isDate(int jour,int mois,int annee);
    int getDayinmonth(int month,int annee);
    int dayOfTheYear(Date d);
    std::string toString(Date d);
} // date


#endif //date_h
