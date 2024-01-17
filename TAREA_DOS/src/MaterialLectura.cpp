#include "MaterialLectura.hpp"
#include <iostream>

using namespace std;

// Implementacion de MaterialLectura

/**
 * @brief Constructor por defecto
 */
MaterialLectura::MaterialLectura() {}

/**
 * @brief Obtiene el titulo del material de lectura.
 * @return El titulo del material de lectura.
 */
std::string MaterialLectura::getTitulo() const {
    return titulo;  // Saber si el titulo es de tipo string
}

/**
 * @brief Imprime la informacion basica
 */
void MaterialLectura::imprimirInformacion() const {
    cout << "Informacion basica de Material de Lectura\n";
    cout << "Titulo: " << titulo << " - Precio: $" << precio << std::endl;
}

/**
 * @brief Obtiene la longitud del libro
 * @return La longitud del libro.
 */
std::string Libro::longitudLibro() const {
    if (cantidadHojas <= 100)
        return "Corto";
    else if (cantidadHojas <= 200)
        return "Mediano";
    else
        return "Largo";
}

/**
 * @brief Imprime la informacion del libro.
 */
void Libro::imprimirInformacion() const {
    cout << "Libro: " << titulo << " - Precio: $" << precio << std::endl;
    cout << "Resumen: " << resumenContenido << std::endl;
    cout << "Material Relacionado: " << materialRelacionado << std::endl;
    cout << "Cantidad de Hojas: " << cantidadHojas << " - " << longitudLibro() << std::endl;
}

/**
 * @brief Obtiene la longitud de la noticia
 * @return La longitud de la noticia
 */
std::string Noticia::longitudNoticia() const {
    if (cantidadHojas <= 5)
        return "Corta";
    else if (cantidadHojas <= 10)
        return "Mediana";
    else
        return "Larga";
}

/**
 * @brief Imprime la informacion de la noticia.
 */
void Noticia::imprimirInformacion() const {
    cout << "Noticia: " << titulo << " - Precio: $" << precio << std::endl;
    cout << "Resumen: " << resumenContenido << std::endl;
    cout << "Material Relacionado: " << materialRelacionado << std::endl;
    cout << "Cantidad de Hojas: " << cantidadHojas << " - " << longitudNoticia() << std::endl;
}
