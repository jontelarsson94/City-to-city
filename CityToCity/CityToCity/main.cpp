//
//  main.cpp
//  CityToCity
//
//  Created by Jonathan Larsson on 2017-02-02.
//  Copyright © 2017 Jonathan Larsson. All rights reserved.
//

#include <iostream>
#include <list>
#include <map>
using namespace std;


class city
{
public:
    string name;
    int cost;
    
    city(string name, int cost)
    {
        this->name = name;
        this->cost = cost;
    }
};




























list<city> Almeria = { {city("Granada", 167), city("Murcia", 218)} };
list<city> Murcia = { {city("Albacete", 146), city("Alicante", 81), city("Almeria", 218)} };
list<city> Alicante = { {city("Albacete", 167), city("Murcia", 81), city("Valencia", 166)} };
list<city> Granada = { {city("Jaen", 92), city("Malaga", 124), city("Almeria", 167)} };
list<city> Malaga = { {city("Sevilla", 206), city("Cadiz", 235), city("Granada", 124)} };
list<city> Cadiz = { {city("Huelva", 210), city("Sevilla", 121), city("Malaga", 235)} };
list<city> Cordoba = { {city("Sevilla", 140), city("Jaen", 120), city("CiudadReal", 195)} };
list<city> Merida = { {city("Sevilla", 192), city("Badajoz", 64), city("Caceres", 75)} };
list<city> Valencia = { {city("Alicante", 166), city("Castellon", 74), city("Cuenca", 199)} };
list<city> Castellon = { {city("Tarragona", 187), city("Teruel", 144), city("Valencia", 74)} };
list<city> Teruel = { {city("Cuenca", 148), city("Zaragoza", 171), city("Castellon", 144)} };
list<city> Tarragona = { {city("Barcelona", 99), city("Sevilla", 121), city("Castellon", 187)} };
list<city> Barcelona = { {city("Lleida", 163), city("Gerona", 103), city("Tarragona", 99)} };
list<city> Lleida = { {city("Gerona", 229), city("Huesca", 112), city("Zaragoza", 152), city("Barcelona", 163)} };
list<city> Cuenca = { {city("Albacete", 144), city("Valencia", 199), city("Teruel", 148)} };
list<city> CiudadReal = { {city("Toledo", 118), city("Cordoba", 195)} };
list<city> Zaragoza = { {city("Huesca", 74), city("Pamplona", 178), city("Soria", 159), city("Guadalajara", 256), city("Teruel", 171), city("Lleida", 152)} };
list<city> Pamplona = { {city("Huesca", 165)} };
list<city> Madrid = { {city("Jaen", 331), city("Albacete", 257), city("Cuenca", 168), city("Guadalajara", 60), city("Burgos", 245), city("Segovia", 92), city("Avila", 109), city("Caceres", 301), city("Toledo", 72)} };
list<city> Salamanca = { {city("Avila", 109), city("Caceres", 202), city("Zamora", 66)} };
list<city> Avila = { {city("Segovia", 66)} };
list<city> Valladolid = { {city("Segovia", 115), city("Leon", 136), city("Zamora", 100), city("Palencia", 51)} };
list<city> Palencia = { {city("Burgos", 92)} };
list<city> Soria = { {city("Burgos", 142), city("Guadalajara", 171), city("Logrono", 101)} };
list<city> Vitoria = { {city("Logrono", 94), city("Burgos", 118), city("SanSebastian", 100), city("Bilbao", 62)} };
list<city> Bilbao = { {city("SanSebastian", 101), city("Santander", 100)} };
list<city> Burgos = { {city("Santander", 181)} };
list<city> Santander = { {city("Oviedo", 192)} };
list<city> Leon = { {city("Zamora", 141), city("Lugo", 223), city("Oviedo", 125)} };
list<city> Lugo = { {city("Oviedo", 227), city("Coruna", 98), city("Pontevedra", 195)} };
list<city> Oviedo = { {city("Coruna", 287)} };
list<city> Santiago = { {city("Coruna", 75), city("Pontevedra", 64)} };
list<city> Pontevedra = { {city("Orense", 119)} };
list<city> Orense = { {city("Zamora", 259)} };
list<city> Albacete = { {city("Murcia", 146), city("Alicante", 167), city("Cuenca", 144)} };
list<city> Jaen = { {city("Granada", 92), city("Cordoba", 120)} };
list<city> Sevilla = { {city("Malaga", 206), city("Cadiz", 121), city("Cordoba", 140), city("Merida", 192)} };
list<city> Huelva = { {city("Cadiz", 210)} };
list<city> Badajoz = { {city("Merida", 64)} };
list<city> Caceres = { {city("Merida", 75)} };
list<city> Gerona = { {city("Barcelona", 103), city("Lleida", 229)} };
list<city> Huesca = { {city("Lleida", 112), city("Zaragoza", 74)} };
list<city> Toledo = { {city("CiudadReal", 118)} };

map<string, list<city>> neighbours = {
    {"Almeria", Almeria}
};
map<string, int> distanceToGoal = {
    {"Almeria", 571}, {"Granada", 507}, {"Jaen", 439}, {"Cordoba", 419}, {"Malaga", 550}, {"Huelva", 525}, {"Sevilla", 487},
    {"Cadiz", 586}, {"Murcia", 510}, {"Albacete", 383}, {"Alicante", 515}, {"Valencia", 441}, {"Castellon", 435},
    {"Tarragona", 502}, {"Barcelona", 576}, {"Lleida", 445}, {"Gerona", 627}, {"Merida", 334}, {"Badajoz", 363},
    {"Caceres", 280}, {"CiudadReal", 305}, {"Toledo", 208}, {"Cuenca", 280}, {"Guadalajara", 173}, {"Zaragoza", 319},
    {"Teruel", 337}, {"Huesca", 362}, {"Logrono", 209}, {"Vitoria", 215}, {"Bilbao", 232}, {"SanSebastian", 292},
    {"Santander", 215}, {"Oviedo", 212}, {"Coruna", 357}, {"Santiago", 343}, {"Pontevedra", 335}, {"Orense", 271},
    {"Lugo", 278}, {"Madrid", 162}, {"Leon", 126}, {"Zamora", 87}, {"Salamanca", 109}, {"Segovia", 94},
    {"Valladolid", 0}, {"Burgos", 114}, {"Palencia", 43}, {"Soria", 187}, {"Pamplona", 284}, {"Avila", 110}
};

int main(int argc, const char * argv[]) {
    
    city a("first", 450);
    city b("infirst", 300);
    city c("second", 350);
    city d("insecond", 200);
    
    list<city> one = {};
    list<city> two = {};
    one.push_back(a);
    one.push_back(b);
    two.push_back(c);
    two.push_back(d);
    
    map<string, list<city>> my_map;
    my_map["First"] = one;
    
    list<city> bla = my_map["First"];
    
    for (city n : bla) {
        std::cout << n.name << '\n';
    }
    
    return 0;
}