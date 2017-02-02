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
#include <queue>
#include <limits.h>
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

class cityNode
{
public:
    string name;
    int totalCost;
    int currentCost;
    list<string> path;
    
    cityNode(string name, int cost, int currentCost, list<string> path)
    {
        this->name = name;
        this->totalCost = cost;
        this->currentCost = currentCost;
        this->path = path;
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
list<city> Tarragona = { {city("Barcelona", 99), city("Castellon", 187)} };
list<city> Barcelona = { {city("Lleida", 163), city("Gerona", 103), city("Tarragona", 99)} };
list<city> Lleida = { {city("Gerona", 229), city("Huesca", 112), city("Zaragoza", 152), city("Barcelona", 163)} };
list<city> Cuenca = { {city("Albacete", 144), city("Valencia", 199), city("Teruel", 148), city("Madrid", 168)} };
list<city> CiudadReal = { {city("Toledo", 118), city("Cordoba", 195)} };
list<city> Zaragoza = { {city("Huesca", 74), city("Pamplona", 178), city("Soria", 159), city("Guadalajara", 256), city("Teruel", 171), city("Lleida", 152)} };
list<city> Pamplona = { {city("Huesca", 165), city("Zaragoza", 178)} };
list<city> Madrid = { {city("Jaen", 331), city("Albacete", 257), city("Cuenca", 168), city("Guadalajara", 60), city("Burgos", 245), city("Segovia", 92), city("Avila", 109), city("Caceres", 301), city("Toledo", 72)} };
list<city> Salamanca = { {city("Avila", 109), city("Caceres", 202), city("Zamora", 66)} };
list<city> Avila = { {city("Segovia", 66), city("Madrid", 109), city("Salamanca", 109)} };
list<city> Valladolid = { {city("Segovia", 115), city("Leon", 136), city("Zamora", 100), city("Palencia", 51)} };
list<city> Palencia = { {city("Burgos", 92), city("Valladolid", 51)} };
list<city> Soria = { {city("Burgos", 142), city("Guadalajara", 171), city("Logrono", 101), city("Zaragoza", 159)} };
list<city> Vitoria = { {city("Logrono", 94), city("Burgos", 118), city("SanSebastian", 100), city("Bilbao", 62)} };
list<city> Bilbao = { {city("SanSebastian", 101), city("Santander", 100), city("Vitoria", 62)} };
list<city> Burgos = { {city("Santander", 181), city("Madrid", 245), city("Palencia", 92), city("Soria", 142), city("Vitoria", 118)} };
list<city> Santander = { {city("Oviedo", 192), city("Bilbao", 100), city("Burgos", 181)} };
list<city> Leon = { {city("Zamora", 141), city("Lugo", 223), city("Oviedo", 125), city("Valladolid", 136)} };
list<city> Lugo = { {city("Oviedo", 227), city("Coruna", 98), city("Pontevedra", 195), city("Leon", 223)} };
list<city> Oviedo = { {city("Coruna", 287), city("Santander", 192), city("Leon", 125), city("Lugo", 227)} };
list<city> Santiago = { {city("Coruna", 75), city("Pontevedra", 64)} };
list<city> Pontevedra = { {city("Orense", 119), city("Lugo", 195), city("Santiago", 64)} };
list<city> Orense = { {city("Zamora", 259), city("Pontevedra", 119)} };
list<city> Albacete = { {city("Murcia", 146), city("Alicante", 167), city("Cuenca", 144), city("Madrid", 257)} };
list<city> Jaen = { {city("Granada", 92), city("Cordoba", 120), city("Madrid", 331)} };
list<city> Sevilla = { {city("Malaga", 206), city("Cadiz", 121), city("Cordoba", 140), city("Merida", 192)} };
list<city> Huelva = { {city("Cadiz", 210)} };
list<city> Badajoz = { {city("Merida", 64)} };
list<city> Caceres = { {city("Merida", 75), city("Madrid", 301), city("Salamanca", 202)} };
list<city> Gerona = { {city("Barcelona", 103), city("Lleida", 229)} };
list<city> Huesca = { {city("Lleida", 112), city("Zaragoza", 74), city("Pamplona", 165)} };
list<city> Toledo = { {city("CiudadReal", 118), city("Madrid", 72)} };
list<city> Guadalajara = { {city("Zaragoza", 256), city("Madrid", 60), city("Soria", 171)} };
list<city> Segovia = { {city("Madrid", 92), city("Avila", 66), city("Valladolid", 115)} };
list<city> Zamora = { {city("Salamanca", 66), city("Valladolid", 100), city("Leon", 141), city("Orense", 259)} };
list<city> Logrono = { {city("Soria", 101), city("Vitoria", 94)} };
list<city> SanSebastian = { {city("Vitoria", 100), city("Bilbao", 101)} };
list<city> Coruna = { {city("Lugo", 98), city("Oviedo", 287), city("Santiago", 75)} };


map<string, list<city>> neighbours = {
    {"Almeria", Almeria}, {"Murcia", Murcia}, {"Alicante", Alicante}, {"Granada", Granada}, {"Malaga", Malaga}, {"Cadiz", Cadiz}, {"Cordoba", Cordoba}, {"Merida", Merida}, {"Valencia", Valencia}, {"Castellon", Castellon}, {"Teruel", Teruel}, {"Tarragona", Tarragona}, {"Barcelona", Barcelona}, {"Lleida", Lleida}, {"Cuenca", Cuenca}, {"CiudadReal", CiudadReal}, {"Zaragoza", Zaragoza}, {"Pamplona", Pamplona}, {"Madrid", Madrid}, {"Salamanca", Salamanca}, {"Avila", Avila}, {"Valladolid", Valladolid}, {"Palencia", Palencia}, {"Soria", Soria}, {"Vitoria", Vitoria}, {"Bilbao", Bilbao}, {"Burgos", Burgos}, {"Santander", Santander}, {"Leon", Leon}, {"Lugo", Lugo}, {"Oviedo", Oviedo}, {"Santiago", Santiago}, {"Pontevedra", Pontevedra}, {"Orense", Orense}, {"Albacete", Albacete}, {"Jaen", Jaen}, {"Sevilla", Sevilla}, {"Huelva", Huelva}, {"Badajoz", Badajoz}, {"Caceres", Caceres}, {"Gerona", Gerona}, {"Huesca", Huesca}, {"Toledo", Toledo}, {"Guadalajara", Guadalajara}, {"Segovia", Segovia}, {"Zamora", Zamora}, {"Logrono", Logrono}, {"SanSebastian", SanSebastian}, {"Coruna", Coruna}
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

list<cityNode>::iterator it1;

list<string> GreedyBFS(string startCity, string endCity);
cityNode AStar(string startCity, string endCity);
list<cityNode> removeFromList(list<cityNode> unexplored, cityNode currentBest)
{
    it1 = unexplored.begin();
    bool removed = false;
    while(!removed) {
        if(it1->name.compare(currentBest.name) == 0) {
            unexplored.erase(it1);
            removed = true;
        }
        ++it1;
    }
    return unexplored;
}

int main(int argc, const char * argv[]) {
    
    list<string> path = GreedyBFS("Malaga", "Valladolid");
    
    
    cout << "Through the cities:" << endl;
    for (string n : path) {
        cout << n << '\n';
    }
    
    cout << "\n\n" << endl;
    
    cityNode stopCity = AStar("Malaga", "Valladolid");
    
    cout << "The path had a distance of: " << stopCity.currentCost << endl;
    for (string n : stopCity.path) {
        cout << n << endl;
    }
    cout << "\n" << endl;
    
    return 0;
}

list<string> GreedyBFS(string startCity, string endCity)
{
    list<string> path = {};
    int pathCost = 0;
    queue <string> nodes;
    nodes.push(startCity);
    
    while (!nodes.empty()) {
        string currentCity = nodes.front();
        nodes.pop();
        path.push_back(currentCity);
        
        if(currentCity.compare(endCity) != 0){
            list<city> currentNeighbours = neighbours[currentCity];
        
            string nextCity = "";
            int currentBest = INT_MAX;
            int currentPathCost = 0;
        
            for (city n : currentNeighbours) {
                int currentCost = distanceToGoal[n.name];
                if (currentCost < currentBest) {
                    nextCity = n.name;
                    currentBest = currentCost;
                    currentPathCost = n.cost;
                }
            }
            pathCost += currentPathCost;
            nodes.push(nextCity);
        }
    }
    cout << "--- Greedy BFS ---" << endl;
    cout << "The path had a distance of: " << pathCost << endl;
    
    return path;
}

cityNode AStar(string startCity, string endCity)
{
    queue<cityNode> nodes;
    cityNode first(startCity, distanceToGoal[startCity], 0, {startCity});
    list<cityNode> unexplored;
    nodes.push(first);
    cityNode currentCity("", 0, 0, {});
    
    while(!nodes.empty()) {
        currentCity = nodes.front();
        nodes.pop();
        
        if(currentCity.name.compare(endCity) != 0) {
            list<city> currentNeighbours = neighbours[currentCity.name];
            for (city n : currentNeighbours) {
                list<string> path = currentCity.path;
                path.push_back(n.name);
                cityNode i(n.name, distanceToGoal[n.name], n.cost+currentCity.currentCost, path);
                unexplored.push_back(i);
            }
            
            cityNode currentBest("a", INT_MAX, 0, {});
            for(cityNode n : unexplored) {
                if((n.totalCost+n.currentCost) < (currentBest.totalCost+currentBest.currentCost)) {
                    currentBest = n;
                }
            }
            
            unexplored = removeFromList(unexplored, currentBest);
            nodes.push(currentBest);
        }
    }
    cout << "--- A* ---" << endl;
    return currentCity;
}









