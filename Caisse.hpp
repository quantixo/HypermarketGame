#ifndef CAISSE_HPP
#define CAISSE_HPP

#include <string>

using namespace std;

class Caisse{
private:
    uint16_t clientsEnCaisse;
    bool ouverte;
    bool etatAChanger;
    
public:

    Caisse();


    string afficheInfoCaisse();

    bool estOuverte();

    void sortirClient();
    void ajouterClientEnCaisse();
    int sortirTousLesClients();

    void ouvrirCaisse();
    void fermerCaisse();
    void changerCaisse();

    int getClientsEnCaisse();
    void resetClientsEnCaisse();

    void changerEtat();
    void resetChangement();
    bool aChanger();
    string getChangement();

};


#endif // CAISSE_HPP