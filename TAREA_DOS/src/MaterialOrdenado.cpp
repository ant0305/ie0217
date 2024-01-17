#include "MaterialOrdenado.hpp"
#include <algorithm>
#include <iostream>

/**
 * @brief Constructor por defecto de la clase MaterialOrdenado.
 */
MaterialOrdenado::MaterialOrdenado() {}

/**
 * @brief Destructor virtual de la clase MaterialOrdenado.
 * @details Libera la memoria de los materiales de lectura y audiovisuales.
 */
MaterialOrdenado::~MaterialOrdenado() {
    // Limpiar y liberar memoria de materiales de lectura
    for (auto& material : materialesLectura) {
        delete material;
        material = nullptr;
    }

    // Limpiar y liberar memoria de materiales audiovisuales
    for (auto& material : materialesAudiovisual) {
        delete material;
        material = nullptr;
    }

    // Limpiar vectores
    materialesLectura.clear();
    materialesAudiovisual.clear();
}

/**
 * @brief Agrega un material de lectura al vector de materiales de lectura.
 * @param material Puntero al material de lectura a agregar.
 */
void MaterialOrdenado::agregarMaterial(MaterialLectura* material) {
    materialesLectura.push_back(material);
}

/**
 * @brief Agrega una pelicula al vector de materiales audiovisuales.
 * @param pelicula Puntero a la pelicula a agregar.
 */
void MaterialOrdenado::agregarPelicula(Pelicula* pelicula) {
    materialesAudiovisual.push_back(pelicula);
}

/**
 * @brief Agrega un podcast al vector de materiales audiovisuales.
 * @param podcast Puntero al podcast a agregar.
 */
void MaterialOrdenado::agregarPodcast(Podcast* podcast) {
    materialesAudiovisual.push_back(podcast);
}

/**
 * @brief Elimina un material por su titulo.
 * @param titulo 
 * @details Elimina materiales de los vectores de lectura y audiovisuales.
 */
void MaterialOrdenado::eliminarMaterial(const std::string& titulo) {
    // Eliminar materiales de lectura
    auto itLectura = std::remove_if(materialesLectura.begin(), materialesLectura.end(),
        [titulo](MaterialLectura* material) {
            if (material->getTitulo() == titulo) {
                delete material;
                return true;
            }
            return false;
        });

    materialesLectura.erase(itLectura, materialesLectura.end());

    // Eliminar materiales audiovisuales
    auto itAudiovisual = std::remove_if(materialesAudiovisual.begin(), materialesAudiovisual.end(),
        [titulo](MaterialAudiovisual* material) {
            if (material->getTitulo() == titulo) {
                delete material;
                return true;
            }
            return false;
        });

    materialesAudiovisual.erase(itAudiovisual, materialesAudiovisual.end());
}

/**
 * @brief Busca un material de lectura por su titulo.
 * @param titulo 
 * @return Puntero al material de lectura encontrado o nullptr si no se encuentra.
 */
MaterialLectura* MaterialOrdenado::buscarMaterialLecturaPorTitulo(const std::string& titulo) {
    for (auto material : materialesLectura) {
        if (material->getTitulo() == titulo) {
            return material;
        }
    }
    return nullptr;
}

/**
 * @brief Busca un material audiovisual por su titulo.
 * @param titulo 
 * @return Puntero al material audiovisual encontrado o nullptr si no se encuentra.
 */
MaterialAudiovisual* MaterialOrdenado::buscarMaterialAudiovisualPorTitulo(const std::string& titulo) {
    for (auto material : materialesAudiovisual) {
        if (material->getTitulo() == titulo) {
            return material;
        }
    }
    return nullptr;
}

/**
 * @brief Obtiene una copia del vector de materiales de lectura.
 * @return Vector de materiales de lectura.
 */
std::vector<MaterialLectura*> MaterialOrdenado::obtenerMaterialesLectura() {
    return materialesLectura;
}

/**
 * @brief Obtiene una copia del vector de materiales audiovisuales.
 * @return Vector de materiales audiovisuales.
 */
std::vector<MaterialAudiovisual*> MaterialOrdenado::obtenerMaterialesAudiovisual() {
    return materialesAudiovisual;
}
