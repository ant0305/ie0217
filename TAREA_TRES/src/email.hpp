#ifndef EMAIL_HPP
#define EMAIL_HPP

#include <regex>
#include <stdexcept>
#include <string>
/**
 * @brief Clase para validar direcciones de correo electronico utilizando expresiones regulares.
 */
class ValidadorEmail {
public:
    /**
     * @brief Valida si una direccion de correo electronico tiene un formato correcto.
     * 
     * @param email La direccion de correo electronico a validar.
     * @throws std::invalid_argument si la direccion de correo no contiene '@'.
     * @return true si la direccion de correo electronico es valida.
     */
    bool esEmailValido(const std::string& email) {
        // Verificar si contiene '@'
        if (email.find('@') == std::string::npos) {
            throw std::invalid_argument("El email no contiene '@'");
        }

        // Expresion regular para validar el email
        std::regex patron(R"(^[a-zA-Z0-9]([a-zA-Z0-9\.-]{0,13}[a-zA-Z0-9])?@[a-zA-Z]+\.[a-zA-Z]{2,4}$)");

        // Devuelve true si el email coincide con el patron
        return std::regex_match(email, patron);
    }
};

#endif