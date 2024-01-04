#include <iostream>

/* 
El programa muestra dos numeros consecutivos usando una variable estatica
*/


using namespace std;
void test(){
    // var es una variable estatica
    static int var = 0;
    ++var;
    cout << var << endl;
}
int main(){
    test();
    test();
    return 0;
}