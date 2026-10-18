#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    int segundos = 0;
    int ovni = 0;
    int planetas = 0;
    int total_ovnis = 0;
    int total_planetas = 0;
    cout << "\033[0;31m\033[2J\033[H";
    cout << "===============================================================================================================================" << endl;
    cout << "welcome to attack of lumix" << endl;
    cout << "===============================================================================================================================" << endl;
    cout << "segundos para el lanzamiento: ";
    cin >> segundos;
    for(int a = segundos; a >= 0; a--){
        cout << a << "...{^]" << endl;
    }
    cout << "exitoso lanzamiento [^}" << endl;
    cout << "cuantos ovnis quieres crear: ";
    cin >> ovni;
    total_ovnis += ovni;
    for(int b = ovni; b >= 0; b--){
        cout << b << "... _^_" << endl;
    }
    cout << "se crearon: " << ovni << " ovnis" << endl;
    cout << "ataque hacia los planetas, numero de planetas: ";
    cin >> planetas;
    total_planetas += planetas;
    for(int c = planetas; c >= 0; c--){
        cout << c << "... _^_ |=+=" << endl;
    }
    cout << "se mataron: " << planetas << " planetas" << endl;
    int material = total_ovnis + total_planetas;
    cout << "Tienes un total de " << material << " materiales acumulados por tus naves." << endl;
    int meteoritos = 0;
    cout << "cuantos meteoritos quieres crear adicionales: ";
    cin >> meteoritos;
    for(int d = meteoritos; d >= 0; d--){
        cout << d << " ({}) ..." << endl;
    }
    int cohetes = material + meteoritos;
    cout << "cuantos cohetes quieres mandar a atacar (Max 100): ";
    cin >> cohetes;
    if(cohetes > 100){ 
         cohetes = 100; 
    }
    for(int e = cohetes; e >= 0; e--){
        cout << e << "...{^)" << endl;
    }
    int maquinas;
    cout << "hackea la mayoria de las maquinas de el govierno: ";
    cin >> maquinas;
    if(maquinas > 100){
        maquinas = 100;
    }
    for(int k = maquinas; k >= 0; k--){
        cout << k << " .=>=>=><hacking><=>=<=<=<. " << endl;
    }
    for(int m = 0; m <= 10; m++){
        cout << " =0><=0<> destruyendo maquinas <>0><=0<= " << endl;
    }
    for(int z = 0; z <= 5; z++){
        cout << " 09.068.32,41.14214.954.032.0111 " << endl;
    }
    cout << "se detectaron: " << maquinas << endl;
    int escape = 0;
    cout << "a cuantos km quieres escapar del gobierno: ";
    cin >> escape;
    for(int r = escape; r >= 0; r--){
        cout << r << "...{^}" << endl;
    }
    if(escape >= 100){
        cout << "lograste escapar" << endl;
    } else {
        cout << "te atraparon" << endl;
    }
    int sputnik = 0;
    cout << " lanza a sputnik1: ";
    cin >> sputnik;
    for(int t = sputnik; t >= 0; t--){
        cout << t << "{!}..." << sputnik << "km" << endl;
    }
    cout << "\033[44m\033[37m\033[2J\033[H" << endl;
    for(int x = 0; x <= 10; x++){
        cout << "macro dosbox shutdowm menu 001 002012" << endl;
    }
    std::cout << "\033[1;33m";
    std::cout << "------------------------------------" << std::endl;
    std::cout << "  fin de la operacion" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    cout << "adios" << endl;
    string respuesta;
    cout << "sobrevivste?: ";
    cin >> respuesta;
    std::cout << "\033[1;32m";
    cout << "operacion realizada" << endl;
    for(int x = 0; x <= 50; x++){
        cout << "boot system shutdown" << endl;
    }
    std::cout << "\033[0;31m\033[2J\033[H dos system dos" << endl;
    cout << "██████████████████████████" << endl;
    cout << "███dos machine 1.0 -/*-/*- ███" << endl;
    cout << "██████████████████████████" << endl;
    return 0;
}