#ifndef STAND_H_INCLUDED
#define STAND_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;
class stand
{
  int id_stand;
  string emplacement;
  public :
     stand();
     stand(int,string);
     void setId(int);
     int getId();
     void  setEmplacement(string);
     void editerStand();
     void supprimerStand();
     void afficherStand();
     string getEmplacement();

};


#endif // STAND_H_INCLUDED
