#include "chambre.h"
#include "hotel.h"
#include <string>
#include <vector>
#include <iostream>

hotel::hotel(std::string id, std::string nom, std::string ville, std::vector<chambre> tabch)
    : _id(id), _nom(nom), _ville(ville), _tabch(tabch) {}

std::string hotel::id() const { return _id; }
std::string hotel::nom() const { return _nom; }
std::string hotel::ville() const { return _ville; }
std::vector<chambre> hotel::tabch() const { return _tabch; }

void hotel::updateId(std::string id) { _id = id; }
void hotel::updateNom(std::string nom) { _nom = nom; }
void hotel::updateVille(std::string ville) { _ville = ville; }

void hotel::updateTabch(chambre ch, int i) {
    while (i > _tabch.size() - 1) {
        int j;
        std::cout << "La chambre n'existe pas. Entrer un nouvel indice : ";
        std::cin >> j;
        i = j;
    }
    _tabch[i] = ch;
}

void hotel::ajoutChambre(chambre ch) {
    _tabch.push_back(ch);
}

void hotel::supprimerChambre(chambre ch) {
    for (int i = 0; i < _tabch.size(); i++) {
        if (_tabch[i].id() == ch.id()) {
            _tabch.erase(_tabch.begin() + i);
            break; 
        }
    }
}

std::string infoHotel(const hotel& h) {
    std::string ch = "L'id de l'hôtel est " + h.id() + "\n"
                     + "Le nom de l'hôtel est " + h.nom() + "\n"
                     + "La ville de l'hôtel est " + h.ville() + "\n"
                     + "Le nombre de chambres de l'hôtel est " + std::to_string(h.tabch().size()) + "\n";
    return ch;
}

void hotel::afficheDetailsChambre(const hotel& h) {
    for (int i = 0; i < h.tabch().size(); i++) {
        std::cout << h.tabch()[i].infochambre() << std::endl;
    }
}
