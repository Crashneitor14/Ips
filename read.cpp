#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string Ip;
    int paquete;
    string Archivo = "ip.txt";
    ifstream archivo(Archivo.c_str());
    cout<<"ingrese cantidad de paquetes:  ";
    cin>>paquete;
    string CantPaq = to_string(paquete);
    if(!archivo){
    cout << "No existe txt para hacer ping";
    exit(EXIT_FAILURE);
    }else{

        while (getline(archivo,Ip)) {
           string instruccion = "ping -q -c " + CantPaq +" "+ Ip;
           cout << "Ping con: " << Ip << "\n";
           system(instruccion.c_str());
        }
    }
}
