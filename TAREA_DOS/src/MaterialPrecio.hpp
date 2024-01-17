#ifndef MATERIALPRECIO_HPP
#define MATERIALPRECIO_HPP

#include <iostream>
#include <vector>
#include "MaterialLectura.hpp"
#include "MaterialAudiovisual.hpp"

/**
 * @brief Clase MaterialPrecio que hereda de MaterialLectura y MaterialAudiovisual.
 * @details Esta clase representa un material que tiene tanto caracteristicas de lectura como audiovisuales,
 * y proporciona funciones para ordenar y imprimir informacion sobre estos materiales.
 */
class MaterialPrecio : public MaterialLectura, public MaterialAudiovisual {
public:
    /**
     * @brief Constructor por defecto.
     */
    MaterialPrecio();

    /**
     * @brief Destructor virtual por defecto.
     */
    ~MaterialPrecio() override = default;

    /**
     * @brief Ordena los materiales por precio de forma ascendente.
     * @return true si hay materiales despues de ordenar o false si no hay materiales.
     */
    bool ordenarPorPrecioAscendente();

    /**
     * @brief Ordena los materiales por precio de forma descendente.
     * @return true si hay materiales despues de ordenar o false si no hay materiales.
     */
    bool ordenarPorPrecioDescendente();

    /**
     * @brief Imprime la informacion de los materiales.
     */
    void imprimirMaterial();

    /**
     * @brief Verifica si hay materiales en las listas de lectura o audiovisuales.
     * @return true si hay materiales o false si no hay materiales.
     */
    bool tieneMateriales() const;

    /**
     * @brief Agrega un material de lectura a la lista.
     * @param material 
     * Puntero al material de lectura a agregar.
     */
    void agregarMaterialLectura(MaterialLectura* material);

    /**
     * @brief Agrega un material audiovisual a la lista.
     * @param material 
     * Puntero al material audiovisual a agregar.
     */
    void agregarMaterialAudiovisual(MaterialAudiovisual* material);

    // Implementacion de las funciones virtuales puras
    std::string getTitulo() const override;
    void dummyFunction() const override;
    void imprimirInformacion() const override;

private:
    std::vector<MaterialLectura*> materialesLectura; //Lista de materiales de lectura
    std::vector<MaterialAudiovisual*> materialesAudiovisual; // Lista de materiales audiovisuales

    /**
     * @brief Implementacion del algoritmo de ordenamiento de burbuja para materiales.
     * @tparam T Tipo de material 
     * @param materiales
     * Vector de punteros a materiales.
     * @param ascendente 
     * Indica si se debe ordenar de forma ascendente o descendente.
     */
    template <typename T>
    void bubbleSort(std::vector<T*>& materiales, bool ascendente);

    /**
     * @brief Elimina los materiales nulos de las listas de lectura y audiovisuales.
     */
    void eliminarMaterialesEliminados();

    /**
     * @brief Imprime la informacion de los materiales en una lista especifica.
     * @tparam T Tipo de material 
     * @param tipo Tipo de material 
     * @param materiales Vector de punteros a materiales.
     */
    template <typename T>
    void imprimirMaterial(const std::string& tipo, const std::vector<T*>& materiales) const;

    /**
     * @brief Verifica si un titulo no esta vacio.
     * @param titulo 
     * @return true si el titulo no esta vacio o false si esta vacio.
     */
    bool tituloNoVacio(const std::string& titulo) const;
};

#endif
