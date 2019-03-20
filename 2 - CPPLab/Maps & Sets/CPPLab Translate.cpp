#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <cstdlib>

using namespace std;


int main()
{
    //map to hold English->Spanish word associations
    map<string, string> translations;

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    //read in 45 pairs and add to the map
translations["a"]="una";
translations["computer"]="ordenador";
translations["virus"]="virus";
translations["all"]="todas";
translations["the"]="la";
translations["memory"]="memoria";
translations["is"]="es";
translations["corrupt"]="contaminado";
translations["open"]="abierto";
translations["door"]="puerta";
translations["today"]="hoy";
translations["holiday"]="vacaciones";
translations["she"]="ella";
translations["happy"]="feliz";
translations["birthday"]="cumpleaños";
translations["inside"]="adentro";
translations["goodbye"]="adiós";
translations["where"]="adónde";
translations["airport"]="el aeropuerto";
translations["outside"]="afuera";
translations["agent"]="el agente";
translations["pleasant"]="agradable";
translations["water"]="el agua";
translations["needle"]="la aguja";
translations["now"]="ahora";
translations["mayor"]="el alcalde";
translations["bedroom"]="la alcoba";
translations["trunk"]="el baúl";
translations["beautiful"]="bello";
translations["kiss"]="el beso";
translations["library"]="la biblioteca";
translations["well"]="bien";
translations["welcome"]="bienvenido";
translations["blouse"]="la blusa";
translations["mouth"]="la boca";
translations["wedding"]="la boda";
translations["ticket"]="el boleto";
translations["pocket"]="el bosillo";
translations["pretty"]="bonito";
translations["bed"]="la cama";
translations["camera"]="la cámera";
translations["waiter"]="el camarero";
translations["road"]="el camino";
translations["shirt"]="la camisa";
translations["bell"]="la campana";


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    cout << translations["a"] << " ";
    cout << translations["computer"] << " ";
    cout << translations["virus"] << endl;

    cout << translations["all"] << " ";
    cout << translations["the"] << " ";
    cout << translations["memory"] << " ";
    cout << translations["is"] << " ";
    cout << translations["corrupt"] << endl;

    return 0;
}
