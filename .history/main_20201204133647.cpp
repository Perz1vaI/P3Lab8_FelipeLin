#include <iostream>
#include <cstlib>
using namespace std;
int main()
{
    Persona p("Felipe", "Lin", Persona::TipoGenero::MASCULINO);
    cout << p.obtenerNombre() << " (";
    cout << (p.obtenerGenero() == 0 ? "Hombre" : "Mujer") << ")" << endl; //c
    Maestro m("Martin", "Cuellar", Persona::TipoGenero::MASCULINO, "12345");
    cout << m.obtenerNombre() << " #" << m.obtenerNumero() << " (";
    cout << (m.obtenerGenero() == Persona::TipoGenero::MASCULINO ? "Hombre" : "Mujer") << ")" << endl;
    Alumno a("Gabriel", "Vazsquez", Persona::TipoGenero::MASCULINO, "67890");
    cout << a.obtenerNombre() << " #" << a.obtenerNumero() << endl;
}