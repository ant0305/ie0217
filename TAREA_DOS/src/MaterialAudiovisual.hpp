#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP

#include <iostream>
#include <string>

// Declaracion previa de MaterialLectura para evitar confusion
class MaterialLectura;

/**
 * @brief Clase base abstracta para materiales audiovisuales.
 */
class MaterialAudiovisual {
public:
//Atributos de la clase
    std::string titulo; 
    std::string grupo; 
    std::string autor; 
    std::string tipoMaterial; 
    std::string genero; 
    int duracion; 
    std::string resumenContenido; 
    std::string materialRelacionado; 
    std::string estado; 
    double precio; 

    /**
     * @brief Obtiene el titulo del material audiovisual.
     * @return Titulo del material
     */
    virtual std::string getTitulo() const = 0;

    /**
     * @brief Funcion virtual pura
     */
    virtual void dummyFunction() const = 0;

    /**
     * @brief Destructor virtual por defecto
     */
    virtual ~MaterialAudiovisual() = default;
};

/**
 * @brief Clase derivada para representar una pelicula.
 */
class Pelicula : public MaterialAudiovisual {
public:
    std::string resumenContenido; /**< Resumen de la pelicula */
    std::string materialRelacionado; /**< Material relacionado a la pelicula */

    /**
     * @brief Obtiene el titulo de la pelicula.
     * @return Titulo de la pelicula
     */
    std::string getTitulo() const override;

    /**
     * @brief Obtiene la longitud de la pelicula
     * @return Longitud de la pelicula
     */
    std::string longitudPelicula();

    /**
     * @brief Imprime la informacion de la pelicula
     */
    void imprimirInformacion();

    /**
     * @brief Funcion dummy especifica para la clase Pelicula
     */
    void dummyFunction() const override {
        std::cout << "DummyFunction en Pelicula" << std::endl;
    }
};

/**
 * @brief Clase derivada para representar un podcast.
 */
class Podcast : public MaterialAudiovisual {
public:
    std::string resumenContenido; /**< Resumen del podcast */
    std::string materialRelacionado; /**< Material relacionado al podcast. */

    /**
     * @brief Obtiene el titulo del podcast.
     * @return Titulo del podcast.
     */
    std::string getTitulo() const override;

    /**
     * @brief Obtiene la longitud del podcast
     * @return Longitud del podcast
     */
    std::string longitudPodcast();

    /**
     * @brief Imprime la informacion del podcast
     */
    void imprimirInformacion();

    /**
     * @brief Funcion dummy especifica para la clase Podcast
     */
    void dummyFunction() const override {
        std::cout << "DummyFunction en Podcast" << std::endl;
    }
};

#endif
