#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main() {
/*
    int n = 5;
    int arr[n];
    cout << "Ingresas 5 numero a tu eleccion: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "El orden de los numeros ingresados es: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }    return 0;
}*/

    const int n_arreglos = 10;
    int searchArray[n_arreglos] = {324, 457, 6789, 541345, 7, 6, 8965, 12, 32, 4815};


    int Busqueda_array, location;

    while(1) {
        cout << endl << "Ingresa un numero: " << endl;
        cin >> Busqueda_array;


        if(Busqueda_array == -1) break;


        for(int i=0; i < n_arreglos; i++) {
            if(searchArray[i] == Busqueda_array) {
                location = i;
                break;
            }

        }


        if(location != -1) {
            cout << Busqueda_array << " esta en la posicion [" << location << "] del arreglo." << endl;
        }
        else {
            cout << Busqueda_array << " no existe en el arreglo." << endl;
        }
    }

}


