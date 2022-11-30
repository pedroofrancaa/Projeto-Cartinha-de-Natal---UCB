#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    char nome[50], cont = 's';
    char telefone[13], endereco[200], cep[10], bairro[20], pedido[20], tipo[20], carta[1000], sexo[10];
    char criresp = 's';
    int opcao, loop = 1;
    
    printf("\n"); 
    while(cont == 's'){
        printf("\n----- Página de Cadastro -----\n");
        printf("\n");
        printf("[1] - Responsavel\n");
        printf("[2] - Criança\n");
        printf("\nOpcao: ");
        scanf(" %d", &opcao);


        switch(opcao){
            case 1:
                printf("\n\n---------- Cadastro do responsável ----------\n");
            
                srand(time(0));
                int matricular = (rand() % 10000) + 1;
               
                
                printf("\nNome do responsavel: ");
                scanf(" %[^\n]%*c", nome);

                printf("Telefone: ");
                scanf("%s", telefone);
                printf("\n--- Localizacao ---\n");
                printf("Endereço: ");
                scanf(" %[^\n]%*c", endereco);
                printf("Bairro: ");
                scanf(" %[^\n]%*c", bairro);
                printf("CEP: ");
                scanf(" %s", cep);


                printf("\n----- Cadastro -----\n");
                printf("Matrícula: %d\n", matricular);
                printf("Nome: %s\n", nome);
                printf("Telefone: %s\n", telefone);
                printf("Endereço: %s, %s\n", endereco, cep);
            break;

            case 2:
                while(criresp == 's'){
                    if(loop <= 1){
                        printf("\n\n---------- Cadastro Criança ----------\n");
                        printf("Matrícula responsável: ");
                        scanf("%d", &matricular);

                        printf("Nome: ");
                        scanf(" %[^\n]%*c", nome);

                        printf("Sexo: ");
                        scanf(" %s", sexo);

                        printf("Tipo pedido: ");   
                        scanf(" %[^\n]%*c", tipo);
                        
                        printf("Pedido: ");
                        scanf(" %[^\n]%*c", pedido);
                        
                        printf("Digite a carta (1000 caracteres): ");
                        scanf(" %[^\n]%*c", carta);        

                        loop += 1;
                    }else{
                        printf("Nome: ");
                        scanf(" %[^\n]%*c", nome);

                        printf("Sexo: ");
                        scanf(" %s", sexo);

                        printf("Tipo pedido: ");   
                        scanf(" %[^\n]%*c", tipo);
                        
                        printf("Pedido: ");
                        scanf(" %[^\n]%*c", pedido);
                        
                        printf("Digite a carta (1000 caracteres): ");
                        scanf(" %[^\n]%*c", carta);

                        loop += 1;      
                    }
                    printf("\n----- Cadastro Criança -----\n");
                    printf("Matrícula responsável: %d\n", matricular);

                    srand(time(0));
                    int matriculac = (rand() % 10000) + 1;
                    printf("Matricula crianca: %d\n", matriculac);

                    printf("Nome: %s\n", nome);
                    printf("Sexo: %s\n", sexo);
                    printf("Tipo pedido: %s\n", tipo);
                    printf("Pedido: %s\n", pedido);
                    printf("Carta: %s\n", carta);
                    
                    printf("\nExiste mais alguma criança relacionado a esse responsável?[s/n] ");
                    scanf(" %c", &criresp);
                }
                break;
        }
        printf("\nContinuar Cadastro?[s/n] ");
        scanf(" %c", &cont);
        printf("\n\nCadastro Realizado com sucesso.\n");
    }
    
    printf("\n");
    return 0;
}