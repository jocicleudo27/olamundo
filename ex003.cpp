#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Filme{
    public:
        char nome[64];
        char primeiro_astro[64];
        char segundo_astro[64];
        //Esta é uma função in-line pq está definida dentro de uma classe.
        void exibe_filme(){
            cout << "Nome, do filme: " << nome << endl;
            cout << "Estrelado: " << primeiro_astro << " e " << segundo_astro << endl << endl;

        }
        void inicializa(const char *Filme_nome, const char *primeiro, const char *segundo){
            strcpy(nome,Filme_nome);
            strcpy(primeiro_astro, primeiro);
            strcpy(segundo_astro, segundo);
        }
};

int main() {
    
    Filme fugitivo, insone;

    fugitivo.inicializa("O Fugitivo", "Harison Ford", "Tommy Lee Chibata");
    insone.inicializa("Insone em Seattle", "Tom Hanks", "Marg Ariana");
    cout << "Os dois ultimos filmes a que assisti foram: " <<fugitivo.nome << " e " <<insone.nome << endl;
    cout << "Achei que o " << fugitivo.primeiro_astro << " estava otimo!" << endl;

    return 0;
}
