/**
 * Project Untitled
 */


#ifndef _VOLUME_H
#define _VOLUME_H

#include "Document.h"


class Volume: public Document {
protected: 
    string auteur;
    
boolean estEmpruntable();
};

#endif //_VOLUME_H