#include <iostream>

using namespace std;


int main(){
    float num, prom, sum = 0.0;
    int i, n;
    cout << "Numero maximo de entras: "; cin >> n;
    for(i = 1; i <= n; ++i)
        {
        cout << "Entrada n" << i << ":"; 
        cin >> num;
    if(num < 0.0){
        // Control of the program move to jump:
        goto jump;
        } 

    sum += num;

    }
    jump:
    prom = sum / (i - 1);
    cout << "\nPromedio = "<< prom;
return 0;
}