/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void mostrarResultado(int pontos) {
    printf("Sua casa em Hogwarts é: ");

    // Vai exibir o resultado dependendo da pontuação do usuário
    if (pontos >= 7 && pontos <= 11) {
        printf("Grifinória!\n");
        printf("Você é ousado, bravo e corajoso. É um líder nato e luta pelo que é bom e justo.\nDefende sem medo sua família e seus amigos.");
    } else if (pontos >= 12 && pontos <= 16) {
        printf("Lufa-Lufa!\n");
        printf("Você é leal, amigável e gosta de se manter longe do perigo. Pode não ser o mais inteligente\nou mais forte, mas tem o coração mais amável de todos.");
    } else if (pontos>= 17 &&pontos<= 21) {
        printf("Corvinal!\n");
        printf("Você é inteligente, sensível e tem muito conhecimento. Pensa acima de tudo na estratégia\ne prorcura manter o seu grupo no caminho certo.");
    } else if (pontos >= 22 && pontos <= 28) {
        printf("Sonserina!\n");
        printf("Você é astuto, egenhoso e tem uma forte ambição pelo poder. Sente um certo prazer\npela vingança e quando quer atingir seus objetivos não tem quem o pare.");
    } else {
        printf("Não foi possível determinar sua casa. Tente novamente!\n");
    }
    
}


int main() {
    int pontos = 0;
    int resposta;


    printf("------------------------------------- \n\n");
    printf("QUAL SERIA SUA CASA EM HOGWARTS?\n\n");
    printf("------------------------------------- \n\n");

    char perguntas[7][100] = {
        "Qual desses você mais quer?",
        "Você se considera uma pessoa observadora? Se sim, no que você foca?",
        "Qual atividade você mais gosta de fazer?",
        "Qual é o seu maior medo?",
        "Qual animal você escolheria como seu parceiro?",
        "Qual qualidade você mais valoriza em você mesmo?",
        "O que te motiva?"
        
    };

    char alternativas[7][4][100] = {
        {"Impactar", "Conhecer", "Pertencer", "Construir"},
        {"Sim, focando nos acontecimentos e ideias ao meu redor", "Não muito, porque não faz parte da minha personalidade", "Sim, focando nas pessoas ao meu redor, e como elas são", "Não, porque eu tenho que focar mais em mim e no que me importa"},
        {"Praticar esportes", "Ajudar os outros", "Ler e estudar", "Planejar estratégias"},
        {"Perder entes queridos", "Ser traído(a)", "Falhar nos estudos", "Ser ignorado(a)"},
        {"Leão", "Texugo", "Águia", "Cobra"},
        {"Coragem", "Lealdade", "Inteligência", "Astúcia"},
        {"Busca de expandir a mente", "Expressar minhas próprias verdades", "Vontade de ajudar os outros", "Vontade de construir algo que faça sentido pra mim"}
    };

    //Loop para fazer as perguntas 
    for (int pergunta = 0; pergunta < 7; pergunta++) {
        printf("Pergunta %d: %s\n", pergunta + 1, perguntas[pergunta]);
        
        for (int alternativa = 0; alternativa < 4; alternativa++) {
            printf("%d. %s\n", alternativa + 1, alternativas[pergunta][alternativa]);
        }
        printf("Resposta: ");
        scanf("%d", &resposta);
        
        //Condição para somar a pontuação
        if (resposta >= 1 && resposta <= 4) {
            pontos += resposta;
        } else {
            printf("Opção inválida!\n");
            pergunta--; // Repetir a pergunta se a resposta for um número iválido
        }

        printf("\n");
    }
    
    mostrarResultado(pontos);

    return 0;
}