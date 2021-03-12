/**
 * Project Untitled
 */


#ifndef _BIBLIOTHÈQUE_H
#define _BIBLIOTHÈQUE_H

class Bibliothèque {
protected: 
    
/**
 * @param Adherent
 */
void addAdherent(adherent Adherent);
    
/**
 * @param Document
 */
void addDocument(document Document);
    
/**
 * @param Adherent
 */
void removeAdherent(adherent Adherent);
    
/**
 * @param Document
 */
void removeDocument(document Document);
};

#endif //_BIBLIOTHÈQUE_H