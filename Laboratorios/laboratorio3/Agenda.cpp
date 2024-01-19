#include "Agenda.hpp"

template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto) {
    typename std::list<Contacto<T>>::const_iterator it;

    for (it = Contactos.begin(); it != Contactos.end(); ++it) {
        if (it->getTelefono() == contacto.getTelefono()) {
            throw std::invalid_argument("Ya existe este contacto");
        }
    }

    Contactos.push_back(contacto);
}

template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono) {
    typename std::list<Contacto<T>>::iterator it;

    for (it = Contactos.begin(); it != Contactos.end(); ++it) {
        if (it->getTelefono() == telefono) {
            Contactos.erase(it);
            return;
        }
    }

    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

template <typename T>
void Agenda<T>::mostrarContactos() const {
    typename std::list<Contacto<T>>::const_iterator it;

    for (it = Contactos.begin(); it != Contactos.end(); ++it) {
        std::cout << "Nombre: " << it->getNombre() << " "
                  << "Telefono: " << it->getTelefono() << " "
                  << "Email: " << it->getEmail() << std::endl;
    }
}


template <typename T>
std::list<Contacto<T> > Agenda<T>::buscarContactos(const std::string& patron) const{
    //Se guarda el resultado de la busqueda
    std::list<Contacto<T> > resultados;
    //Se almacena la posicion
    std::string::size_type pos;
    typename std::list<Contacto<T>>::const_iterator it;
    //Recorremos la lista
    for (it= Contactos.begin();it != Contactos.end(); ++it){
        //Se busca la coincidencia
        pos = it->getNombre().find(patron);
        if (pos != std::string::npos){
            //Agregamosel contacto a los resultados
            resultados.push_back(*it);
        }else{
            //Buscamos el correo
            pos = it->getEmail().find(patron);
            if (pos != std::string::npos){
                resultados.push_back(*it);
            }
        }
    }
    //Retornamos la lista
    return resultados;
}
