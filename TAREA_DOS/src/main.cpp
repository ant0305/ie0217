#include <iostream>
#include <vector>
#include <algorithm> // Para std::sort
#include "MaterialOrdenado.hpp"
#include "MaterialPrecio.hpp"


void agregarLibro(MaterialOrdenado& materialOrdenado, MaterialPrecio& materialPrecio) {
    Libro* libro = new Libro(); // Crear objeto dinamico
    std::cout << "Ingrese el precio del libro: $";
    std::cin >> libro->precio;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer del teclado
    std::cout << "Ingrese el titulo del libro: ";
    std::getline(std::cin, libro->titulo);
    std::cout << "Ingrese la cantidad de hojas del libro: ";
    std::cin >> libro->cantidadHojas;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer del teclado
    std::cout << "Ingrese el grupo del libro: ";
    std::getline(std::cin, libro->grupo);
    std::cout << "Ingrese el autor del libro: ";
    std::getline(std::cin, libro->autor);
    std::cout << "Ingrese un breve resumen del libro: ";
    std::getline(std::cin, libro->resumenContenido);
    std::cout << "Ingrese tipos de libros similares escribalos separados por [,]: ";
    std::getline(std::cin, libro->materialRelacionado);
    std::cout << "Ingrese el genero del libro: ";
    std::cin >> libro->genero;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer del teclado

    materialOrdenado.agregarMaterial(libro); // Almacenar objeto dinamico
    materialPrecio.agregarMaterialLectura(libro); // Almacenar objeto dinamico en MaterialPrecio
}


void agregarNoticia(MaterialOrdenado& materialOrdenado, MaterialPrecio& materialPrecio) {
    Noticia* noticia = new Noticia(); // Crear objeto dinamico
    std::cin.ignore();  // Limpiar el buffer del teclado
    std::cout << "Ingrese el titulo de la noticia: ";
    std::getline(std::cin, noticia->titulo);
    std::cout << "Ingrese el grupo de la noticia: ";
    std::getline(std::cin, noticia->grupo);
    std::cout << "Ingrese el tipo de material de la noticia: ";
    std::getline(std::cin, noticia->tipoMaterial);
    std::cout << "Ingrese el autor de la noticia: ";
    std::getline(std::cin, noticia->autor);
    std::cout << "Ingrese el genero de la noticia: ";
    std::getline(std::cin, noticia->genero);
    std::cout << "Ingrese un breve resumen de la noticia: ";
    std::getline(std::cin, noticia->resumenContenido);
    std::cout << "Ingrese tipos de noticias similares escribalos separados por [,]: ";
    std::getline(std::cin, noticia->materialRelacionado);
    std::cout << "Ingrese el estado de la noticia: ";
    std::getline(std::cin, noticia->estado);
    std::cout << "Ingrese la cantidad de hojas de la noticia: ";
    std::cin >> noticia->cantidadHojas;
    std::cout << "Ingrese el precio de la noticia: $";
    std::cin >> noticia->precio;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer del teclado

    materialOrdenado.agregarMaterial(noticia); // Almacenar objeto dinamico
    materialPrecio.agregarMaterialLectura(noticia); // Almacenar objeto dinamico en MaterialPrecio
}

void agregarPelicula(MaterialOrdenado& materialOrdenado, MaterialPrecio& materialPrecio) {
    Pelicula* pelicula = new Pelicula(); // Crear objeto dinamico
    std::cin.ignore();  // Limpiar el buffer del teclado
    std::cout << "Ingrese el titulo de la pelicula: ";
    std::getline(std::cin, pelicula->titulo);
    std::cout << "Ingrese el grupo de la pelicula: ";
    std::getline(std::cin, pelicula->grupo);
    std::cout << "Ingrese el autor de la pelicula: ";
    std::getline(std::cin, pelicula->autor);
    std::cout << "Ingrese el tipo de material de la pelicula: ";
    std::getline(std::cin, pelicula->tipoMaterial);
    std::cout << "Ingrese el genero de la pelicula: ";
    std::getline(std::cin, pelicula->genero);
    std::cout << "Ingrese la duracion de la pelicula en minutos: ";
    std::cin >> pelicula->duracion;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer del teclado
    std::cout << "Ingrese un breve resumen de la pelicula: ";
    std::getline(std::cin, pelicula->resumenContenido);
    std::cout << "Ingrese tipos de peliculas similares escribalos separados por [,]: ";
    std::getline(std::cin, pelicula->materialRelacionado);
    std::cout << "Ingrese el estado de la pelicula: ";
    std::getline(std::cin, pelicula->estado);
    std::cout << "Ingrese el precio de la pelicula: $";
    std::cin >> pelicula->precio;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer del teclado

    materialOrdenado.agregarPelicula(pelicula); // Almacenar objeto dinamico en MaterialPrecio
    materialPrecio.agregarMaterialAudiovisual(pelicula); // Almacenar objeto dinamico
}

void agregarPodcast(MaterialOrdenado& materialOrdenado, MaterialPrecio& materialPrecio) {
    Podcast* podcast = new Podcast(); // Crear objeto dinamico
    std::cin.ignore();  // Limpiar el buffer del teclado
    std::cout << "Ingrese el titulo del podcast: ";
    std::getline(std::cin, podcast->titulo);
    std::cout << "Ingrese el grupo del podcast: ";
    std::getline(std::cin, podcast->grupo);
    std::cout << "Ingrese el autor del podcast: ";
    std::getline(std::cin, podcast->autor);
    std::cout << "Ingrese el tipo de material del podcast: ";
    std::getline(std::cin, podcast->tipoMaterial);
    std::cout << "Ingrese la duracion del podcast en minutos: ";
    std::cin >> podcast->duracion;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer del teclado
    std::cout << "Ingrese un breve resumen del podcast: ";
    std::getline(std::cin, podcast->resumenContenido);
    std::cout << "Ingrese tipos de podcasts similares escribalos separados por [,]: ";
    std::getline(std::cin, podcast->materialRelacionado);
    std::cout << "Ingrese el estado del podcast: ";
    std::getline(std::cin, podcast->estado);
    std::cout << "Ingrese el precio del podcast: $";
    std::cin >> podcast->precio;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer del teclado

    materialOrdenado.agregarPodcast(podcast); // Almacenar objeto dinamico
    materialPrecio.agregarMaterialAudiovisual(podcast); // Almacenar objeto dinamico en MaterialPrecio
}

void eliminarMaterial(MaterialOrdenado& materialOrdenado) {
    std::string titulo;
    std::cout << "Precione la tecla espacio e ingrese el nombre del meterial a eliminar: ";
    std::cin.ignore();  // Limpiar el buffer del teclado
    std::getline(std::cin, titulo);

    materialOrdenado.eliminarMaterial(titulo);
}



// Funcion principal (main)
int main() {
    int opcion;
    MaterialOrdenado materialOrdenado;
    MaterialPrecio materialPrecio;
    int tipoMaterial = 0;  // Valor predeterminado

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Agregar material\n";
        std::cout << "2. Mostrar materiales en MaterialPrecio\n";
        std::cout << "3. Eliminar material\n";  // Nueva opcion
        std::cout << "4. Salir\n";
        std::cout << "Ingrese la opcion: ";
        std::cin >> opcion;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (opcion) {
            case 1: {
                std::cout << "Ingrese el tipo de material:\n";
                std::cout << "1. Libro\n";
                std::cout << "2. Noticia\n";
                std::cout << "3. Pelicula\n";
                std::cout << "4. Podcast\n";
                std::cin >> tipoMaterial;  // No cambiar aqui

                switch (tipoMaterial) {
                    case 1: {
                        agregarLibro(materialOrdenado, materialPrecio);
                        break;
                    }
                    case 2: {
                        agregarNoticia(materialOrdenado, materialPrecio);
                        break;
                    }
                    case 3: {
                        agregarPelicula(materialOrdenado, materialPrecio);
                        break;
                    }
                    case 4: {
                        agregarPodcast(materialOrdenado, materialPrecio);
                        break;
                    }
                    default:
                        std::cout << "Opcion no valida\n";
                        break;
                }
                break;
            }
            case 2: {
                std::cout << "\nMateriales en MaterialPrecio:\n" << std::endl;
                // materialPrecio.imprimirMaterial();
                    // Prueba de ordenamiento ascendente y descendente
                    std::cout << "\nOrdenando por precio ascendente:\n";
                    if (!materialPrecio.ordenarPorPrecioAscendente()) {
                        std::cout << "No hay elementos para ordenar.\n";
                    }
                    materialPrecio.imprimirMaterial();

                    std::cout << "\nOrdenando por precio descendente:\n";
                    if (!materialPrecio.ordenarPorPrecioDescendente()) {
                        std::cout << "No hay elementos para ordenar.\n";
                    }
                    materialPrecio.imprimirMaterial();

                    break;
                    }
            case 3: {
                eliminarMaterial(materialOrdenado);
                break;
            }
            case 4:
                std::cout << "Saliendo del programa\n";
                break;
            default:
                std::cout << "Opcion no valida\n";
                break;
        }

    } while (opcion != 4);

    return 0;
}