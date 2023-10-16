#include <iostream>
using namespace std;

int main() {
    
    float nota1, nota2, nota3, nota4;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    cout << "Digite a quarta nota: ";
    cin >> nota4;

    float media = (nota1 + nota2 + nota3 + nota4) / 4;
    float weighted_media = (nota1 * 0.5 + nota2 * 0.1 + nota3 * 0.1 + nota4 * 0.3);

    
    cout << "Notas inseridas: " << nota1 << ", " << nota2 << ", " << nota3 << ", " << nota4 << endl;
    cout << "Media das notas: " << media << endl;
    cout << "Média ponderada das notas: " << weighted_media << endl;

    return 0;
}

