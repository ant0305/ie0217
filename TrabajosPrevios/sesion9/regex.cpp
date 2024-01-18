#include <iostream>
#include <regex>

/**
 * @file main.cpp
 * @brief Programa nos dice que variables regex hay en el codigo
 *
 * Este programa nos muestra que  tipo de dato es el que estamos utilizando se puede hacer
 * porque es de tipo regex
 *
 * @author ant0305
 * @date 17/01/2024
 */

int main(){

    auto const regex = std::regex("(my|your) regex");
    //Texto de ejemplo que posee la expresion regular
    auto const myText = std::string ("A piece of ytext that contains my regex");
    //Busqueda de la expresion regular
    bool const myTextContainsRegex = std::regex_search(myText, regex);

    //Texto de ejemplo que posee la expresion regular
    auto const yourText= std::string("A oiece of text that contains your regex.");
    //Busqueda de la expresion regular
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);

    //Texto de ejemplo que posee la expresion regular
    auto const theirText = std::string("A piece of text that contains their regex");
    //Busqueda de la expresion regular
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);

    std::cout << std::boolalpha
    << myTextContainsRegex<<'\n'
    <<yourTextContainsRegex<<'\n'
    <<theirTextContainsRegex<<'\n';

    return 0;
}