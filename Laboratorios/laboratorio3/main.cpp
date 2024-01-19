#include "Agenda.hpp"
#include <iostream>


int main(){

    Contacto<std::string> contacto1("Juan Mora", "9374572773", "dj.juanito@gmail.com");
    Contacto<std::string> contacto2("William Walker", "864372773", "willywal@gmail.com");
    Contacto<std::string> contacto3("Juan Santamaria", "2274578343", "adiosmezon@gmail.com");

    
    Agenda<std::string> agenda;

    try
    {
        agenda.agregarContacto(contacto1);
        agenda.agregarContacto(contacto2);
        agenda.agregarContacto(contacto3);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error" <<e.what() << std::endl;
    }
    std::cout << "Contactos en la agenda"<< std::endl;
    agenda.mostrarContactos();

    std::string patron = "William";
    std::list<Contacto<std::string>> resultados = agenda.buscarContactos(patron);

    std::cout << "\nResultados de la busqueda para '" << patron << "':" << std::endl;
    for (const auto& contacto : resultados) {
        std::cout << "Nombre: " << contacto.getNombre() << ", Telefono: " << contacto.getTelefono()
        << ", Email: " << contacto.getEmail() << std::endl;
    }

    try
    {
        agenda.eliminarContacto("864372773");
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Error al eliminar" << e.what() << '\n';
    }

    std::cout << "Contactos en la agenda"<< std::endl;
    agenda.mostrarContactos();

    return 0;
}