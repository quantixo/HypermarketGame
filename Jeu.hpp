#ifndef JEU_HPP
#define JEU_HPP

#include <vector>

#include "Caisse.hpp"
#include "Devis.hpp"

using namespace std;

#define NB_CAISSES 10
#define STARTING_CREDITS 1000
#define STARTING_CLIENTS_EN_COURSE 100
#define STARTING_CLIENTS_EN_ATTENTE 0


class Jeu{
private:

    int credits;
    bool hypermarcheVide;
    int tour;
    
    uint16_t clientsEnCourses;
    uint16_t clientsEnAttente;

    Caisse *caisses[NB_CAISSES];

    char changementsCaisse[NB_CAISSES];

    string errorMessage;

    Devis devis;

    vector<int> getCaissesOuvertes();
    string formaterChangement(char c);

public:

    Jeu();
    ~Jeu();

    bool getHypermarcheVide();

    bool hypermarcheEstVide();

    int getTour();
    void setTour(int tourActuel);
    
    int getCredits();

    void reset();

    void sortirClientsDesCaisses();

    int mettreClientsEnAttente();
    int metttreClientsEnCaisses();

    bool actionsSurCaisses();
    void changerCaisses();

    void facturation();

    void afficheEtatsCaisses();
    void afficheBudget();
    void affichePositionClients(); 
    void afficheDevis();
    
    
};


#endif // JEU_HPP