#include <iostream>
using namespace std;

int main() {
    int n=0, primo_n=1, secondo_n=1, terzo_n;

    do{
        cout << "Quanto vuoi lunga la serie numerica di Fibonacci?" << endl;
        cin >> n;
        if(n<2){
            cout << "errore" << endl;
        }else{
           cout << primo_n << "\n" << secondo_n << endl;
        }
    }while(n<2);

    for(int variabile=0;variabile<n;variabile++){
        terzo_n=primo_n+secondo_n;
        secondo_n=primo_n;
        primo_n=terzo_n;
        cout << terzo_n << "\n";
    }

    return 0;
}
