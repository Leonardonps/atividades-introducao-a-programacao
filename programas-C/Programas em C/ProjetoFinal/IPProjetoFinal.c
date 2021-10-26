/* UFPB - Centro de Informática
    Ciência da Computação
    Leonardo do Nascimento Peixoto da Silva
    Projeto final/CRUD - Supermercado, mercadinho e afins
*/

//INCLUSAO DE BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//REGISTROS DE VARIAVEL CRIADOS PARA O PROGRAMA
typedef struct produto{
    char descricao[100];
    float preco;
    int codBarras;
    int ncm;
    int quant;
    int apagar;
     /*ncm == especie de um numero para caracterizar os produtos
    por exemplo, fraldas, a maioria tem um mesmo numero, ja o ncm dos biscoitos é outro
    variavel produto.apagar sera usada para remover da exibicao do programa
    */
}t_produto;

//VARIAVEIS GLOBAIS DO PROGRAMA
int op, i;
char usernome[100];
 t_produto listaprodutos[2000];
 int quantprodTotais = 0, refmenorquant = 999999999, refmaiorquant = 0;
 float somaprecosTotais = 0, mediaprecosTotais, refmenorpreco = 999999999.9, refmaiorpreco = 0.00;
/* op == variavel usada para switch case e funcao telaprimariaescolha
    i == variavel usada nos for
    usernome[100] == variavel para o nome do usuario
    listaprodutos[2000] == variavel usada em caso 4 e funcao lerarquivocaso4relatorio 873288863
    quantprodTotais = 0, refmenorquant = 999999999, refmaiorquant = 0 ==
    variaveis usadas no switch case 4 e funcao mostrarRelatorioCASO4
    somaprecosTotais = 0, mediaprecosTotais, refmenorpreco = 999999999.9, refmaiorpreco = 0.00
    variaveis usadas no switch case 4
*/

//FUNCOES DERIVADAS DA PRINCIPAL
void cabecalho(){
    printf("*******************************************************************\n");
    printf("************SISTEMA DE CADASTRO E ATUALIZACAO DE PRODUTOS**********\n");
    printf("*******************************************************************\n\n");
}

int telaprimariaescolha(){
    //PRIMEIRA TELA DE ESCOLHA DO PROGRAMA
    system("CLS");//Limpa a tela quando o usuario selecionar opcao invalida
    cabecalho();
    printf("%s, o que voce deseja fazer?\n\n", usernome);
    printf("(1) Cadastrar um novo produto\n");
    printf("(2) Atualizar dados de um produto\n");
    printf("(3) Remover algum produto\n");
    printf("(4) Lista e relatorio dos produtos\n");
    printf("(5) Pesquisar um produto por seu nome\n");
    printf("(6) Sair\n");
    printf("\nPara selecionar, digite o numero de sua opcao\n");
    scanf("%d", &op);
    getchar();
    system("CLS"); //Preparando terminal para proxima tela
    return op;
}

void finalCadaOpcao(){
    printf("-------------------------------------------------------------------\n");
    printf("Digite Enter para voltar ao menu\n");
    getchar();

}

void salvarArquivoCASO1CADASTRAMENTO(t_produto novoProd){
    FILE* fp;

    fp = fopen ("dadosprojetofinal.txt", "a");

    if(fp == 0){
        printf("Erro ao abrir o arquivo para escrita de dados. Caso repita, entre em contato com o sistema\n");
    }
    else{
            fprintf(fp, "%d\n %s\n %f\n %d\n %d\n %d\n\n", novoProd.apagar, novoProd.descricao,
                     novoProd.preco, novoProd.codBarras, novoProd.ncm, novoProd.quant);
        }
    fclose(fp);
}

void lerArquivoDADOSPROJETO(){
    int i;
    FILE*fp;
    char linha[100];
    int pos;
    /*Por que usou o for aqui? Para fazer com que todos os produtos fiquem apagados,
    quando o programa ler o arquivo e colocar nessa variavel, eles ficarao com 0, ou seja,
    nao e verdadeiro que estao apagados; o 0 foi definido no processo de cadastramento
    */

    for(i = 0; i<2000; i++){
        listaprodutos[i].apagar = 1;
    }

    fp = fopen("dadosprojetofinal.txt", "r");

    for(i = 0; i<2000; i++){
        fscanf(fp,"%d\n", &listaprodutos[i].apagar);
        fgets(listaprodutos[i].descricao, 100, fp);
        pos = strlen(listaprodutos[i].descricao) - 1;
        listaprodutos[i].descricao[pos] = '\0';
        fscanf(fp,"%f\n", &listaprodutos[i].preco);
        fscanf(fp, "%d\n", &listaprodutos[i].codBarras);
        fscanf(fp, "%d\n", &listaprodutos[i].ncm);
        fscanf(fp, "%d\n", &listaprodutos[i].quant);
    }
    fclose(fp);
}

void mostrarRelatorioCASO4(int quantprodTotais, int refmenorquant, int refmaiorquant,
                           float refmenorpreco, float refmaiorpreco, float mediaprecosTotais){

    printf("-------------------------------------------------------------------\n");
    printf("Quantidade total de produtos cadastrados: %d\n", quantprodTotais);
    printf("Produto em quantidade menor no estoque: %d\n", refmenorquant);
    printf("Produto em quantidade maior no estoque: %d\n", refmaiorquant);
    printf("Produto com menor preco: %.2f\n", refmenorpreco);
    printf("Produto com maior preco: %.2f\n", refmaiorpreco);
    printf("Media dos precos de todos os produtos: %.2f\n", mediaprecosTotais);
}

void alterarArquivo(t_produto listaprodutos[ ]){
    /*Funcao modificada de salvarArquivoCASO1CADASTRAMENTO
    O que vai fazer: salvar os dados que estao em listaprodutos em cima do arquivo "original",
    antes de ser modificado
    Nesse colocaremos uma condicao para serem salvos, os registros devem estar com
    listaprodutos.apagar = 0, ou seja, desligado; se nao, salvaria o registro que queremos excluir
    alem de salvar lixo de memoria que estao ocupando espaços "vazios", que nao foram preenchidos,
    do registro-vetor listaprodutos [2000]
    Fora isso, nao usamos o "a", pois queremos escrever por cima - "w"
    */
    FILE* fp;
    int j;

    fp = fopen ("dadosprojetofinal.txt", "w");

    if(fp == 0){
        printf("Erro ao abrir o arquivo para escrita de dados. Caso repita, entre em contato com o sistema\n");
    }
    else{
            for(j = 0; j < 2000; j++){
                if(listaprodutos[j].apagar == 0){
                    fprintf(fp, "%d\n %s\n %f\n %d\n %d\n %d\n\n", listaprodutos[j].apagar,
                             listaprodutos[j].descricao, listaprodutos[j].preco, listaprodutos[j].codBarras,
                             listaprodutos[j].ncm, listaprodutos[j].quant);
                }
            }
    }

    fclose(fp);
}

int telaescolhaalterarproduto(){
    printf("---\n");
    printf("ITEM ENCONTRADO\n");
    printf("---\n\n");
    printf("Dados salvos no arquivo:\n");
    printf("---\n");
    printf("(1) Descricao: %s\n", listaprodutos[i].descricao);
    printf("(2) Preco: %.2f\n", listaprodutos[i].preco);
    printf("(3) Codigo de barra: %d\n", listaprodutos[i].codBarras);
    printf("(4) NCM: %d\n", listaprodutos[i].ncm);
    printf("(5) Quantidade no estoque: %d\n", listaprodutos[i].quant);
    printf("---\n\n");

    printf("Deseja alterar qual desses dados do item cadastrado?\n");
    printf("Digite o numero correspondente:\n");
    scanf("%d", &op);
    getchar();

    return op;
}

void exibirDadosumproduto(t_produto listaprodutos[ ]){
    printf("Descricao: %s\n", listaprodutos[i].descricao);
    printf("Preco: %.2f\n", listaprodutos[i].preco);
    printf("Codigo de barra: %d\n", listaprodutos[i].codBarras);
    printf("NCM: %d\n", listaprodutos[i].ncm);
    printf("Quantidade no estoque: %d\n", listaprodutos[i].quant);
}

//FUNCAO PRINCIPAL
int main (){

    //DECLARANDO VARIAVEIS LOCAIS - FUNÇÃO MAIN
    char whileresp;
    t_produto novoProd;
    int compcodBarras;
    char respexcluirprod;
    int avisomensagem = 0;
    char compdescricao[100];
    int codigovalido = 0;

    /*  whileresp == variavel usada em while para saber se o quer fazer de novo alguma coisa
        t_produto novoProd == variavel usada em caso 1
        compcodBarras ==  variavel para comparar e achar o codigo de barras do produto
    que o usuario deseja excluir
        respexcluirprod == variavel para confirmar acao excluir produto, usada caso 3
        avisomensagem == usada caso 3, contem explicacao
        compdescricao [100] == compara com listaprodutos[i].descricao
        codigovalido = 0 == usado para saber se ja tem um codigo de barras cadastrado
    */

    //TELA INICIAL DO PROGRAMA
    cabecalho();
    printf("Ola, seja bem-vindo! Para comecar, digite seu nome:\n");
    gets(usernome);
    system("CLS");

    //LOOP - TELA PRIMARIA DE ESCOLHA
    //Do-while + switch case == estruturas principais-esqueletos do programa
    do{

        telaprimariaescolha();

        switch (op){

            //Escolha 1 - Cadastrar um novo produto
            case 1:
                //Estrutura principal do case 1: do-while
                do{
                    cabecalho();
                    printf("--------------------- CADASTRAMENTO DE PRODUTOS -------------------\n\n");
                    printf("Preencha os campos abaixo:\n");
                    printf("Obs.: ao digitar o preco, utilize o \"ponto\" ao inves da \"virgula\"\n");
                    printf("---\n\n");

                    /*Ao inves de usar uma serie de vetores do tipo t_produto, usamos apenas
                    uma variavel, novoProd, que se torna reciclavel, uma transportadora da informacao
                    do usuario ate o arquivo
                    */

                    lerArquivoDADOSPROJETO();

                    novoProd.apagar = 0;
                    printf("Digite a descricao do produto:\n");
                    gets(novoProd.descricao);
                    printf("\nDigite o preco do produto:\n");
                    scanf("%f", &novoProd.preco);

                    //Condicao para nao ter codigos de barras iguais
                    do{
                        codigovalido = 0;
                        printf("\nDigite um codigo de barras valido:\n");
                        printf("!Cuidado! Cada produto tem seu codigo de barras\n");
                        scanf("%d", &novoProd.codBarras);
                        for(i = 0; i < 2000; i++){
                            if(novoProd.codBarras == listaprodutos[i].codBarras){
                                codigovalido++;
                            }
                        }
                    }while(codigovalido != 0);

                    printf("\nDigite o ncm do produto:\n");
                    scanf("%d", &novoProd.ncm);
                    printf("\nPor ultimo, a quantidade que tem em estoque:\n");
                    scanf("%d", &novoProd.quant);
                    getchar();

                    salvarArquivoCASO1CADASTRAMENTO(novoProd);

                    printf("\n---\n");
                    printf("Produto cadastrado\n");
                    printf("---\n\n");
                    printf("Deseja cadastrar outro produto(s/n)?\n");
                    scanf("%c", &whileresp);
                    getchar();
                    printf("\n");
                    system("CLS");
                }while(whileresp == 's' || whileresp == 'S');

                cabecalho();
                printf("--------------------- CADASTRAMENTO DE PRODUTOS -------------------\n\n");
                finalCadaOpcao();
                break;
                //fim de escolha 1

            //Escolha 2 - Alterar dados de um produto ja salvo
            case 2:
                //Estruturas principais do caso 2: do-while, for, if-else
                //Quase o mesmo esqueleto do caso 3 e 5
                do{
                    cabecalho();
                    printf("--------------------- ALTERAR DADOS DE UM PRODUTO -----------------\n\n");

                    lerArquivoDADOSPROJETO();

                    printf("Digite o codigo de barras do produto a ser alterado: \n");
                    scanf("%d", &compcodBarras);
                    getchar();
                    printf("\n");

                    avisomensagem = 0;

                    for(i = 0; i<2000; i++){
                        if(compcodBarras != listaprodutos[i].codBarras){
                            avisomensagem++;
                        }
                        else if(listaprodutos[i].apagar == 0 && compcodBarras == listaprodutos[i].codBarras){
                            telaescolhaalterarproduto();
                            system("CLS");

                            cabecalho();
                            printf("--------------------- ALTERAR DADOS DE UM PRODUTO -----------------\n\n");

                            switch(op){
                                case 1:
                                    printf("Digite uma nova descricao para o produto:\n");
                                    gets(listaprodutos[i].descricao);
                                    printf("\nProduto alterado com sucesso\n\n");
                                    break;
                                case 2:
                                    printf("Digite um novo preco para o produto:\n");
                                    scanf("%f", &listaprodutos[i].preco);
                                    getchar();
                                    printf("\nProduto alterado com sucesso\n\n");
                                    break;
                                case 3:
                                    printf("Digite um novo codigo de barras para o produto:\n");
                                    scanf("%d", &listaprodutos[i].codBarras);
                                    getchar();
                                    printf("\nProduto alterado com sucesso\n\n");
                                    break;
                                case 4:
                                    printf("Digite um novo NCM para o produto:\n");
                                    scanf("%d", &listaprodutos[i].ncm);
                                    getchar();
                                    printf("\nProduto alterado com sucesso\n\n");
                                    break;
                                case 5:
                                    printf("Digite uma nova quantidade para o produto:\n");
                                    scanf("%d",&listaprodutos[i].quant);
                                    getchar();
                                    printf("\nProduto alterado com sucesso\n\n");
                                    break;
                                default:
                                    printf("====! OPCAO INVALIDA !=== \n");
                            }
                            alterarArquivo(listaprodutos);
                        }
                    }

                    /*se avisomensagem == 2000, entao todos os produtos deram
                    diferentes do codigo digitado*/

                    if(avisomensagem == 2000){
                        printf("ITEM NAO ENCONTRADO. Tente com outro codigo de barras.\n\n");
                    }

                    printf("---\n");
                    printf("Deseja alterar outro produto(s/n)?\n");
                    scanf("%c", &whileresp);
                    getchar();
                    system("CLS");

                }while(whileresp == 'S' || whileresp =='s');

                cabecalho();
                printf("--------------------- ALTERAR DADOS DE UM PRODUTO -----------------\n\n");
                finalCadaOpcao();
                break;
                //fim escolha 2

            //Escolha 3 - Remover um produto
            case 3:
                //Estruturas principais do caso 3: do-while, for, if-else
                do{
                    cabecalho();
                    printf("------------------------ REMOVER ALGUM PRODUTO --------------------\n\n");

                    lerArquivoDADOSPROJETO();

                    printf("Digite o codigo de barras do produto a ser excluido: \n");
                    scanf("%d", &compcodBarras);
                    getchar();
                    printf("\n");

                    avisomensagem = 0;

                    for(i = 0; i<2000; i++){
                        if(compcodBarras != listaprodutos[i].codBarras){
                            avisomensagem++;
                        }
                        else if(listaprodutos[i].apagar == 0 && compcodBarras == listaprodutos[i].codBarras){
                            printf("---\n");
                            printf("ITEM ENCONTRADO\n");
                            printf("Descricao: %s\n", listaprodutos[i].descricao);
                            printf("---\n\n");
                            printf("Deseja realmente excluir esse item do cadastro(s/n)?\n");
                            scanf("%c", &respexcluirprod);
                            getchar();

                            if(respexcluirprod == 's' || respexcluirprod == 'S'){
                                listaprodutos[i].apagar = 1;
                                alterarArquivo(listaprodutos);
                                printf("Produto removido do cadastrado com sucesso\n\n");
                            }
                            else{
                                printf("\nProduto nao removido\n\n");
                            }
                        }
                    }

                    /*se avisomensagem == 2000, entao todos os produtos deram
                    diferentes do codigo digitado*/

                    if(avisomensagem == 2000){
                        printf("ITEM NAO ENCONTRADO. Tente com outro codigo de barras.\n\n");
                    }

                    printf("---\n");
                    printf("Deseja excluir outro produto(s/n)?\n");
                    scanf("%c", &whileresp);
                    getchar();
                    system("CLS");

                }while(whileresp == 'S' || whileresp =='s');

                cabecalho();
                printf("------------------------ REMOVER ALGUM PRODUTO --------------------\n\n");
                finalCadaOpcao();
                break;
                //fim escolha 3

            //Escolha 4 - Lista e relatorio dos produtos
            case 4:
                //Estruturas principais do caso 4: for e if
                cabecalho();
                printf("------------------- LISTA E RELATORIO DOS PRODUTOS ----------------\n\n");

                //Lendo dados do arquivo
                lerArquivoDADOSPROJETO();

                //Zerando variaveis locais da funcao principal que precisam
                somaprecosTotais = 0;
                quantprodTotais=0;
                /*Motivo: para quando ir e voltar do mundo nao fica somando
                quant total em cima de quant total, p.e. qt=6, ir e volta menu, qt=12*/

                //For - estrutura principal desse case 4
                for(i = 0; i<2000; i++){
                    if(listaprodutos[i].apagar == 0){
                        //printf("%d\n\n", listaprodutos[i].apagar);
                        printf("Indice no relatorio: %d\n", i+1);
                        printf("Descricao do produto: %s\n", listaprodutos[i].descricao);
                        printf("Preco do produto: %.2f\n", listaprodutos[i].preco);
                        printf("Codigo de barras cadastrado: %d\n", listaprodutos[i].codBarras);
                        printf("NCM do produto: %d\n", listaprodutos[i].ncm);
                        printf("Quantidade no estoque: %d\n\n", listaprodutos[i].quant);

                        //Variaveis para saber a media dos precos
                        quantprodTotais ++;
                        somaprecosTotais = somaprecosTotais + listaprodutos[i].preco;

                        //Ifs para saber maior e menor preco
                        if(listaprodutos[i].preco < refmenorpreco){
                            refmenorpreco = listaprodutos[i].preco;
                        }
                        if(listaprodutos[i].preco > refmaiorpreco){
                            refmaiorpreco = listaprodutos[i].preco;
                        }

                        //Ifs para saber itens de maior e menor quant
                        if(listaprodutos[i].quant < refmenorquant){
                            refmenorquant = listaprodutos[i].quant;
                        }
                        if(listaprodutos[i].quant > refmaiorquant){
                            refmaiorquant = listaprodutos[i].quant;
                        }
                    }
                }

                mediaprecosTotais = somaprecosTotais/quantprodTotais;

                mostrarRelatorioCASO4(quantprodTotais, refmenorquant, refmaiorquant,
                                       refmenorpreco, refmaiorpreco, mediaprecosTotais);

                finalCadaOpcao();
                break;
                //fim escolha 4

            //Escolha 5 - Pesquisar caracteristicas de um produto pelo nome
            case 5:
                do{
                    cabecalho();
                    printf("------------------- PESQUISAR PRODUTO POR NOME --------------------\n\n");

                    lerArquivoDADOSPROJETO();

                    printf("Digite a descricao do produto para saber suas informacoes:\n");
                    gets(compdescricao);
                    getchar();
                    avisomensagem = 0;

                    for(i = 0; i<2000; i++){
                        if(strcmp (compdescricao, listaprodutos[i].descricao) == 0){
                            printf("\n---\n");
                            exibirDadosumproduto(listaprodutos);
                            printf("---\n\n");
                        }
                        else{
                            avisomensagem++;
                        }
                    }

                if(avisomensagem == 2000){
                    printf("Produto nao encontrado. Por favor, digite outra descricao.\n\n");
                }

                printf("---\n");
                printf("Deseja realizar uma nova busca(s/n)?\n");
                scanf("%c", &whileresp);
                getchar();

                system("CLS");

                }while(whileresp == 's' || whileresp == 'S');

                cabecalho();
                printf("------------------- PESQUISAR PRODUTO POR NOME --------------------\n\n");
                finalCadaOpcao();
                break;
                //fim escolha 5

            case 6:
                cabecalho();
                printf("Digite Enter para sair do sistema\n");
                getchar();
                break;

            default:
                cabecalho();
                printf("====! OPCAO INVALIDA !=== \n");
                printf("Clique Enter para voltar ao menu\n");
                getchar();
        }
    }while(op!=6);
}

