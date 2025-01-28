#include <iostream>

using namespace std;

int main() {
    int niQuest, niPessoas, niSaltos;
    int* resp = nullptr;

    cin >> niQuest;

    // cria um vetor INT com n posições
    resp = (int*)malloc(niQuest * sizeof(int));
    
    for (int I = 0; I < niQuest; I++) {
        
        int niResul = 0;

        std::cin >> niPessoas >> niSaltos;
        
        for (int J = 1; J <= niPessoas; J++)
            niResul = (niResul + niSaltos) % J;

        resp[I] = niResul + 1;
    }

    for (int I = 0; I < niQuest; I++)
        cout << "Case " << I + 1 << ": " << resp[I] << endl;

    // Libera espaço da memoria
    free(resp);

    return 0;
}