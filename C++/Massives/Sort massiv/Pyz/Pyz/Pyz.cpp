// Pyz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "qs.h"
using namespace std;


void puzFunc() {
    
    int arr[5] = { 1,3,4,8,4 };
    int temp;


    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

};


void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "-";
    }
    cout << endl;
};
 



int main()
{
   
    bool tr = true;
    while(tr) {
      
        cout << "1. Puzyrkovaya sortirovka\n2. Exit\n3. Quick sort massive\n" << endl;
        int a;
        cin >> a;
        switch (a) {
        case 1: {
            puzFunc();
            break;
        }
        case 2: {
            return 0;
            break;

        }
        case 3: {
            int n;

            int i;
            cout << "Array Size: ";
            cin >> n;
            cout << endl;
            int* arr = new int[n];
            for (i = 0; i < n; i++) {
                cout << "Array[" << i + 1 << "]: ";
                cin >> arr[i];
                cout << endl;
            }
            print(arr, n);
            quickSort(arr, 0, n - 1);
            print(arr, n);
            break;
          
        }

        }


    }
}





