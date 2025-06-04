#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct  {
  void* array;
  size_t capacidade;
  size_t tamanho;
  size_t tamanho_elemento;
} VetorDinamico;

VetorDinamico* criar_vetor(size_t capacidade_inicial,size_t tamanho_elemento); //aloca e inicializa um novo vetor dinamico
void destruir_vetor(VetorDinamico* vetor, void (*liberar_elemento)(void*)); //libera toda a memoria alocada pelo vetor, usar liberar_elemento para desalocar memoria de cada elemento individualmente (ex: vetor de strings)
void adicionar_elemento(VetorDinamico* vetor, void* elemento); // adiciona um elemento ao final do vetor. verificar capacidade e realocar caso necesario. memcpy para copiar elemento
void* obter_elemento(VetorDinamico* vetor, size_t indice);
void remover_elemento(VetorDinamico* vetor, size_t indice, void (*liberar_elemento)(void*)); // remove o elemento do indice e libera memoria com liberar_elemento
void redimensionar_vetor(VetorDinamico* vetor, size_t indice, size_t nova_capacidade);


int main(int argc, char *argv[])
{

  VetorDinamico* vetor = criar_vetor(10, sizeof(int));
  if (vetor == NULL) {
    fprintf(stderr,"Falha ao criar vetor\n");
    return EXIT_FAILURE;
  }
  

  destruir_vetor(vetor, NULL);
  return EXIT_SUCCESS;
}

VetorDinamico* criar_vetor(size_t capacidade_inicial, size_t tamanho_elemento){

}

void destruir_vetor(VetorDinamico* vetor, void (*liberar_elemento)(void*)){
  free(vetor);
}
