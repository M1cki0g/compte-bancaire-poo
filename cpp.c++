#include "compte.h"

void compte::debiter(double mt){
    if(solde>mt)
        solde -= mt;
    }

void compte::crediter(double mt){
solde +=mt;
}

void compte::virverser(double mt , compte& a){
debiter(mt);
a.crediter(mt);
}

double compte::getsolde(){
return solde;
}

int compte::getnum(){
return num_compte;
}

compte::compte(){
num_compte = 0;
solde = 0;
}

compte::compte(int num_compte , double solde){
this->num_compte = num_compte;
this->solde = solde;
}

void compte::afficher(){
cout<<"le solde: "<<solde<<endl;
cout<<"le num: "<<num_compte<<endl;

}

int main(){
compte a(1 , 10000);
compte b(2 , 20000);
a.afficher();
cout<<a.getsolde()<<endl;
cout<<a.getnum()<<endl;
a.crediter(500);
a.afficher();
a.debiter(500);
a.afficher();
return 0;
}


