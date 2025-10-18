#define almacen

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Declaraciones previas de las clases que se usarán
class Usuario;
class Artista;

class UdeATunes {
private:
    vector<Usuario*> usuarios;
    vector<Artista*> artistas;
public:
    UdeATunes() {}
    void almacenarUsuario(string nombre, Usuario* u) {
        usuarios.push_back(u);
        cout << "Usuario agregado: " << nombre << endl;
    }
    void almacenarArtista(string nombre, Artista* a) {
        artistas.push_back(a);
        cout << "Artista agregado: " << nombre << endl;
    }
    void mostrarUsuarios() {
        cout << "Lista de usuarios:" << endl;
        for (Usuario* u : usuarios) {
            // Aquí podrías llamar a un método dentro de Usuario, por ejemplo:
            // cout << u->getNombre() << endl;
            cout << " - Usuario en lista" << endl;
        }
    }
};

class Usuario {
private:
    string nickname;
    string ciudad;
    string pais;
    string fecha;
    bool esVIP;
public:
    Usuario(string nickname, string ciudad, string pais, string fecha);
    string getNombre() {
        return nickname;
    }
    bool getEsVIP() {
        return esVIP;
    }

    void reproducir(Cancion* c) {
        cout << nickname << " está reproduciendo una canción..." << endl;
    }
};

class Artista {
private:
    int documento;
    int edad;
    string nombre;
    string Pais;
public:
    Artista(int documento,int edad,string nombre,string Pais);
    string getnombre();
};

class Album {
private:
    string nombre;
    string patrocinador;
    float duracion;
public:
    Album(string nombre,string patrocinador,float duracion);
    string genombre();
};

class cancion {
private:
    string nombre;
    float duracion;
    string genero;
    vector<patrocinador*> patrocinador;
public:
    cancion(string nombre,float duracion,string genero);
    void agregarpatrocinador()
    void reproducir()
};

