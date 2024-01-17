#include "MaterialAudiovisual.hpp"

/**
 * @brief Obtiene el titulo del material audiovisual
 * @return El titulo del material audiovisual.
 */
std::string MaterialAudiovisual::getTitulo() const {
    return titulo;  // El titulo sea de tipo std::string
}


/**
 * @brief Obtiene el titulo de la pelicula.
 * @return El titulo de la pelicula
 */
std::string Pelicula::getTitulo() const {
    return titulo;
}

/**
 * @brief Obtiene la longitud de la pelicula
 * @return La longitud de la pelicula
 */
std::string Pelicula::longitudPelicula() {
    if (duracion <= 90)
        return "Corta";
    else if (duracion <= 150)
        return "Mediana";
    else
        return "Larga";
}

/**
 * @brief Imprime la informacion de la pelicula.
 */
void Pelicula::imprimirInformacion() {
    std::cout << "Pelicula: " << titulo << " - Precio: $" << precio << std::endl;
    std::cout << "Resumen: " << resumenContenido << std::endl;
    std::cout << "Material Relacionado: " << materialRelacionado << std::endl;
    std::cout << "Duracion: " << duracion << " minutos - " << longitudPelicula() << std::endl;
    std::cout << "Estado: " << estado << std::endl;
}

/**
 * @brief Obtiene el titulo del podcast.
 * @return El titulo del podcast.
 */
std::string Podcast::getTitulo() const {
    return titulo;
}

/**
 * @brief Obtiene la longitud del podcast
 * @return La longitud del podcast.
 */
std::string Podcast::longitudPodcast() {
    if (duracion <= 30)
        return "Corto";
    else if (duracion <= 90)
        return "Mediano";
    else
        return "Largo";
}

/**
 * @brief Imprime la informacion del podcast
 */
void Podcast::imprimirInformacion() {
    std::cout << "Podcast: " << titulo << " - Precio: $" << precio << std::endl;
    std::cout << "Resumen: " << resumenContenido << std::endl;
    std::cout << "Material Relacionado: " << materialRelacionado << std::endl;
    std::cout << "Duracion: " << duracion << " minutos - " << longitudPodcast() << std::endl;
    std::cout << "Estado: " << estado << std::endl;
}
