#include <iostream>

/*
El programa utiliza ennumeraciones para mantener le codigo
oredenado y legible, similar a las estructuras
*/

using namespace std;

enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};
int main() {
seasons s;
s = summer;
cout << "Summer = " << s << endl;
return 0;
}