#include "date.h"
#include <cassert>
#include <string>
#include <iostream>

date::date(int jour, int mois, int annee) : _jour(jour), _mois(mois), _annee(annee) {
    assert(isDate(jour, mois, annee) && "date n'est pas valide");
}

int date::jour() const {
    return _jour;
}

int date::mois() const {
    return _mois;
}

int date::annee() const {
    return _annee;
}

void date::updatejour(int jour) {
    _jour = jour;
}

void date::updatemois(int mois) {
    _mois = mois;
}

void date::updateannee(int annee) {
    _annee = annee;
}

void date::next() {
    if (_jour != getDayinmonth(_mois, _annee)) {
        _jour++;
    } else if (_mois == 12) {
        _jour = 1;
        _mois = 1;
        _annee++;
    } else {
        _jour = 1;
        _mois++;
    }
}

void date::before() {
    if (_jour == 1) {
        if (_mois == 1) {
            _mois = 12;
            _annee--;
        } else {
            _mois--;
        }
        _jour = getDayinmonth(_mois, _annee);
    } else {
        _jour--;
    }
}

bool isDate(int jour, int mois, int annee) {
    bool test = true;
    if (mois < 1 || mois > 12) {
        test = false;
    } else if (annee < 1900) {
        test = false;
    } else if ((mois == 1 && (jour > 31 || jour < 1)) || (mois == 3 && (jour > 31 || jour < 1)) ||
               (mois == 5 && (jour > 31 || jour < 1)) || (mois == 7 && (jour > 31 || jour < 1)) ||
               (mois == 8 && (jour > 31 || jour < 1)) || (mois == 10 && (jour > 31 || jour < 1)) ||
               (mois == 12 && (jour > 31 || jour < 1))) {
        test = false;
    } else if ((mois == 4 && (jour > 30 || jour < 1)) || (mois == 6 && (jour > 30 || jour < 1)) ||
               (mois == 9 && (jour > 30 || jour < 1)) || (mois == 11 && (jour > 30 || jour < 1))) {
        test = false;
    } else if (mois == 2) {
        if (annee % 4 == 0 && (jour > 29 || jour < 1)) {
            test = false;
        } else if (annee % 4 != 0 && (jour > 28 || jour < 1)) {
            test = false;
        }
    }
    return test;
}

int getDayinmonth(int mois, int annee) {
    if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12) {
        return 31;
    } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        return 30;
    } else if (mois == 2) {
        if (annee % 4 == 0) {
            return 29;
        } else {
            return 28;
        }
    }
    return 0;
}

int dayOfTheYear(date d) {
    int day = 0;
    for (int i = 1; i < d.mois(); i++) {
        day += getDayinmonth(i, d.annee());
    }
    day += d.jour();
    return day;
}

std::string toString(date d) {
    return std::to_string(d.jour()) + "/" + std::to_string(d.mois()) + "/" + std::to_string(d.annee());
}
