#include <iostream>
#include <vector>
#include <string>
using namespace std;
void uebungMitVector(string Antwort,vector<string> &nocheinArray) {
    string *Antwort2 = &Antwort;
    int array[10];
    array[2] = 3;
    array[6] = 99;
    cout << "array[2] is: " << array[2] << endl;
    cout << "array[6] is: " << array[6] << endl;
    cout << "Dein Name ist: " << Antwort << "\n";
    for(int i = 0; i < nocheinArray.size(); i++){
        cout << nocheinArray[i] << endl;
    }
}

void ArraySchleife() {
    int arrayy[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        cout << "Spalte: " << "\t" << arrayy[i] << endl;
    }
}
int main() {
    vector<string> a = {"Hallo","mein", "name", "ist",};
    cout << "Was ist dein Name?" << "\n";
    string pagy;
    cin >> pagy;
    uebungMitVector(pagy,a);
    ArraySchleife();
}
