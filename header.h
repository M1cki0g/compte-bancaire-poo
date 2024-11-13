#include<iostream>

using namespace std;

class compte{
double solde;
int num_compte;
public:
    void debiter(double);
    void crediter(double);
    void virverser(double , compte&);
    double getsolde();
    int getnum();
    compte();
    compte(int,double);
    void afficher();
};
