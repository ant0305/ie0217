#ifndef MATERIALLECTURA_HPP
#define MATERIALLECTURA_HPP

#include <iostream>
#include <string>

// Declaracion anticipada de MaterialAudiovisual para evitar inclusion circular
class MaterialAudiovisual;

/**
 * @brief Clase base para materiales de lectura.
 */
class MaterialLectura {
public:
    /**
     * @brief Constructor
     */
    MaterialLectura();
    
    /**
     * @brief Destructor virtual.
     */
    virtual ~MaterialLectura() = default;

    /**
     * @brief Obtiene el titulo del material de lectura.
     * @return El titulo del material de lectura.
     */
    std::string getTitulo() const;

    // Atributos de la clase
    std::string titulo;
    std::string grupo;
    std::string tipoMaterial;
    std::string autor;
    std::string editorial;
    std::string genero;
    std::string resumenContenido;
    std::string materialRelacionado;
    std::string estado;
    int cantidadHojas;
    double precio;

    /**
     * @brief Funcion pura virtual.
     */
    virtual void imprimirInformacion() const = 0;
};

/**
 * @brief Clase derivada de MaterialLectura que representa un libro.
 */
class Libro : public MaterialLectura {
public:
    /**
     * @brief Obtiene la longitud del libro
     * @return La longitud del libro.
     */
    std::string longitudLibro() const;

    /**
     * @brief Imprime la informacion del libro.
     */
    void imprimirInformacion() const override;
};

/**
 * @brief Clase derivada de MaterialLectura que representa una noticia.
 */
class Noticia : public MaterialLectura {
public:
    /**
     * @brief Obtiene la longitud de la noticia
     * @return La longitud de la noticia.
     */
    std::string longitudNoticia() const;

    /**
     * @brief Imprime la informacion de la noticia.
     */
    void imprimirInformacion() const override;
};

#endif
