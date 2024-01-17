#include "MaterialPrecio.hpp"
#include <algorithm> 
#include <iostream>

void MaterialPrecio::dummyFunction() const {
    // Implementacion de la funcion virtual
}

/**
 * @brief Verifica si hay materiales en las listas de lectura o audiovisuales.
 * @return true si hay materiales, false si no hay materiales.
 */
bool MaterialPrecio::tieneMateriales() const {
    return !materialesLectura.empty() || !materialesAudiovisual.empty();
}

/**
 * @brief Obtiene el titulo del primer material de la lista o "Sin titulo" si no hay materiales.
 * @return Titulo del material.
 */
std::string MaterialPrecio::getTitulo() const {
    if (!materialesLectura.empty()) {
        return materialesLectura[0]->getTitulo();
    } else if (!materialesAudiovisual.empty()) {
        return materialesAudiovisual[0]->getTitulo();
    } else {
        return "Sin titulo";
    }
}

/**
 * @brief Constructor por defecto.
 */
MaterialPrecio::MaterialPrecio() {}

/**
 * @brief Elimina los materiales nulos de las listas de lectura y audiovisuales.
 */
void MaterialPrecio::eliminarMaterialesEliminados() {
    materialesLectura.erase(std::remove_if(materialesLectura.begin(), materialesLectura.end(),
        [](MaterialLectura* material) { return material == nullptr; }),
        materialesLectura.end());

    materialesAudiovisual.erase(std::remove_if(materialesAudiovisual.begin(), materialesAudiovisual.end(),
        [](MaterialAudiovisual* material) { return material == nullptr; }),
        materialesAudiovisual.end());
}

/**
 * @brief Implementacion del algoritmo de ordenamiento de burbuja para materiales.
 * @tparam T Tipo de material (MaterialLectura o MaterialAudiovisual).
 * @param materiales 
 * @param ascendente 
 */
template <typename T>
void MaterialPrecio::bubbleSort(std::vector<T*>& materiales, bool ascendente) {
    int n = materiales.size();
    bool var;
    do {
        var = false;
        for (int i = 0; i < n - 1; ++i) {
            bool condicion = (ascendente) ? materiales[i]->precio > materiales[i + 1]->precio : materiales[i]->precio < materiales[i + 1]->precio;
            if (condicion) {
                std::swap(materiales[i], materiales[i + 1]);
                var = true;
            }
        }
        --n;
    } while (var);
}

/**
 * @brief Ordena los materiales de forma ascendente.
 * @return true si hay materiales despues de ordenar o false si no hay materiales.
 */
bool MaterialPrecio::ordenarPorPrecioAscendente() {
    bubbleSort(materialesLectura, true);
    bubbleSort(materialesAudiovisual, true);
    eliminarMaterialesEliminados();
    return tieneMateriales();
}

/**
 * @brief Ordena los materiales de forma descendente.
 * @return true si hay materiales despues de ordenar o false si no hay materiales.
 */
bool MaterialPrecio::ordenarPorPrecioDescendente() {
    bubbleSort(materialesLectura, false);
    bubbleSort(materialesAudiovisual, false);
    eliminarMaterialesEliminados();
    return tieneMateriales();
}

/**
 * @brief Agrega un material de lectura a la lista.
 * @param material 
 * Puntero al material de lectura a agregar.
 */
void MaterialPrecio::agregarMaterialLectura(MaterialLectura* material) {
    materialesLectura.push_back(material);
}

/**
 * @brief Agrega un material audiovisual a la lista.
 * @param material 
 * Puntero al material audiovisual a agregar.
 */
void MaterialPrecio::agregarMaterialAudiovisual(MaterialAudiovisual* material) {
    materialesAudiovisual.push_back(material);
}

/**
 * @brief Verifica si un titulo no esta vacio.
 * @param titulo 
 * @return true si el titulo no esta vacio o false si esta vacio.
 */
bool MaterialPrecio::tituloNoVacio(const std::string& titulo) const {
    return !titulo.empty();
}

/**
 * @brief Imprime la informacion de los materiales en las listas.
 */
void MaterialPrecio::imprimirInformacion() const {
    imprimirMaterial("Material Precio (Lectura)", materialesLectura);
    imprimirMaterial("Material Precio (Audiovisual)", materialesAudiovisual);
}

/**
 * @brief Imprime la informacion de los materiales en una lista especifica.
 * @tparam T Tipo de material (MaterialLectura o MaterialAudiovisual).
 * @param tipo Tipo de material (Lectura o Audiovisual).
 * @param materiales Vector de punteros a materiales.
 */
template <typename T>
void MaterialPrecio::imprimirMaterial(const std::string& tipo, const std::vector<T*>& materiales) const {
    std::cout << tipo << ":\n";
    for (const auto& material : materiales) {
        if (material && tituloNoVacio(material->getTitulo())) {
            std::cout << "Titulo: " << material->getTitulo() << " - Precio: $" << material->precio << std::endl;
        }
    }
}

/**
 * @brief Imprime la informacion de los materiales en las listas.
 * @details Version no constante de la funcion para poder modificar los materiales.
 */
void MaterialPrecio::imprimirMaterial() {
    std::cout << "Materiales Lectura:\n";
    for (const auto& material : materialesLectura) {
        if (tituloNoVacio(material->getTitulo())) {
            std::cout << "Titulo: " << material->getTitulo() << " - Precio: $" << material->precio << std::endl;
        }
    }

    std::cout << "\nMateriales Audiovisual:\n";
    for (const auto& material : materialesAudiovisual) {
        if (tituloNoVacio(material->getTitulo())) {
            std::cout << "Titulo: " << material->getTitulo() << " - Precio: $" << material->precio << std::endl;
        }
    }
}
