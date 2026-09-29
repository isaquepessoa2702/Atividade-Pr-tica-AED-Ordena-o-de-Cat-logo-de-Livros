#include <stdio.h>
#include <string.h>
#define MAX 50


typedef struct{
    char nome[MAX];
    float preco;
    }livro;

void juntarprecocres(livro v[], int ini, int meio, int fim){
        livro teste[];
        int i = ini;
        int j = meio +1;
        int k = fim;
    
        while(i<= meio && j >= fim){
            if (v[i].preco <= v[j].preco) {
                teste[k++] = v[i++];         
            }else{
                teste[k++] = v[j++]; 
            }
            while (i<= meio ){
            teste[k++] = v[i++];
            }
            while (j >= fim){
                teste[k++] = v[j++];
            }
            for (i = ini; i <= fim; i++) {
            v[i] = teste[i];
            }
        }  
    }   
void mergeSortprecocres(livro v[], int ini, int fim) {
    if (ini < fim) {
        int meio = (ini + fim) / 2;
        mergeSortprecocres(v, ini, meio);
        mergeSortprecocres(v, meio + 1, fim);
        juntarprecocres(v, ini, meio, fim);
    }
}

void juntarprecodecres(livro v[], int ini, int meio, int fim){
        livro teste[];
        int i = ini;
        int j = meio +1;
        int k = fim;
    
        while(i<= meio && j >= fim){
            if (v[i].preco <= v[j].preco) {
                teste[k++] = v[i++];         
            }else{
                teste[k++] = v[j++]; 
            }
            while (i<= meio ){
            teste[k++] = v[i++];
            }
            while (j >= fim){
                teste[k++] = v[j++];
            }
            for (i = ini; i <= fim; i++) {
            v[i] = teste[i];
            }
        }  
}
void mergeSortprecodecres(livro v[], int ini, int fim) {
    if (ini < fim) {
        int meio = (ini + fim) / 2;
        mergeSortprecodecres(v, ini, meio);
        mergeSortprecodecres(v, meio + 1, fim);
        juntarprecodecres(v, ini, meio, fim);
    }
}


int main(){
    livro livros[MAX];
    int i =0;
    livro teste[MAX];

    printf("Adicione os livros no catálogo:\nDigite 0 quando não quiser mais adicionar livros\n");
    while (i<MAX)
    {   printf("\nlivro %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", &livros[i].nome);
        
        printf("Preco:");
        scanf("%f", &   livros[i].preco);
        if (livros[i].preco == 0) {
            break;
    }
    i++
    }
    printf("Digite 1 se quiser ordenar por preço de forma crescente e 2 se quiser de forma drecrescente:\n");
    int escolha;
    scanf("%l", &escolha);
    if(escolha==1){
    mergesortprecocres(livr, 0, i-1);
    printf("Catalogo dos livros: (%livros)", i);
    for(int j=0; j<i; j++){
        printf("%s - R$ %.2f\n", livros[j].nome, livros[j].preco);
    } 
    }else if(escolha==2){
    mergesortprecodecres(livr, 0, i-1);
    printf("Catalogo dos livros: (%livros)", i);
    for(int j=0; j<i; j++){
        printf("%s - R$ %.2f\n", livros[j].nome, livros[j].preco);
    }

    }
    return 0;
}
 