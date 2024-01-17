#ifndef MATERIALORDENADO_HPP
#define MATERIALORDENADO_HPP

#include <iostream>
#include <vector>
#include "MaterialLectura.hpp"
#include "MaterialAudiovisual.hpp"

/**
 * @brief Clase que representa un contenedor ordenado de materiales.
 */
class MaterialOrdenado {
public:
    /**
     * @brief Constructor por defecto.
     */
    MaterialOrdenado();

    /**
     * @brief Destructor virtual
     * @details Libera la memoria de los materiales de lectura y audiovisuales.
     */
    virtual ~MaterialOrdenado();

    /**
     * @brief Agrega un material de lectura al contenedor.
     * @param material Puntero al material de lectura a agregar.
     */
    void agregarMaterial(MaterialLectura* material);

    /**
     * @brief Agrega una pelicula al contenedor de materiales audiovisuales.
     * @param pelicula Puntero a la pelicula a agregar.
     */
    void agregarPelicula(Pelicula* pelicula);

    /**
     * @brief Agrega un podcast al contenedor de materiales audiovisuales.
     * @param podcast Puntero al podcast a agregar.
     */
    void agregarPodcast(Podcast* podcast);

    /**
     * @brief Elimina un material por su titulo.
     * @param titulo Titulo del material a eliminar.
     * @details Elimina materiales de los vectores de lectura y audiovisuales segun el titulo proporcionado.
     */
    void eliminarMaterial(const std::string& titulo);

    /**
     * @brief Busca un material de lectura por su titulo.
     * @param titulo Titulo del material a buscar.
     * @return Puntero al material de lectura encontrado o nullptr si no se encuentra.
     */
    MaterialLectura* buscarMaterialLecturaPorTitulo(const std::string& titulo);

    /**
     * @brief Busca un material audiovisual por su titulo.
     * @param titulo Titulo del material audiovisual a buscar.
     * @return Puntero al material audiovisual encontrado o nullptr si no se encuentra.
     */
    MaterialAudiovisual* buscarMaterialAudiovisualPorTitulo(const std::string& titulo);

    /**
     * @brief Obtiene una copia del vector de materiales de lectura.
     * @return Vector de materiales de lectura.
     */
    std::vector<MaterialLectura*> obtenerMaterialesLectura();

    /**
     * @brief Obtiene una copia del vector de materiales audiovisuales.
     * @return Vector de materiales audiovisuales.
     */
    std::vector<MaterialAudiovisual*> obtenerMaterialesAudiovisual();

private:
    std::vector<MaterialLectura*> materialesLectura; /**< Vector de materiales de lectura */
    std::vector<MaterialAudiovisual*> materialesAudiovisual; /**< Vector de materiales audiovisuales */
};

#endif
