/**
 * Project Untitled
 */


#ifndef _ADHÉRENT_H
#define _ADHÉRENT_H

#include "Bibliothèque.h"
#include "Volume.h"
#include "Volume.h"


class Adhérent: public Bibliothèque {
public: 
    Volume 0...4;
    Volume 0..4;
protected: 
    string nom;
    string prenom;
    string adressePostale;
    string adresseMail;
    date dateAdhesion;
    
/**
 * @param Emprunt
 */
void emprunterVolume(emprunt Emprunt);
    
/**
 * @param Restituer
 */
void restituerVolume(restituer Restituer);
};

#endif //_ADHÉRENT_H