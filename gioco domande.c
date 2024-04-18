#include <stdio.h>

int main() {
    
    char scelta, nome[10];
    
    //introduzione all'utente
    
    printf("lo scopo del programma è indovinare quante più domande possibili. Ogni domanda avrà 3 opzioni di risposta.\n");
    
    //menu di scelta iniziale
    printf("Seleziona un'alternativa:\nA) Iniziare una nuova partita\nB) Uscire dal gioco\n");
    
    scanf("%c", &scelta);
    
    
    if (scelta == 'A' || scelta == 'a'){
        printf("Inserire il nome: \n");
        scanf("%s", &nome);
        printf("Bene %s, iniziamo il gioco:\n", nome);
        int i=0;
        char risposta1, risposta2, risposta3;
        
        //prima domanda
           printf("Prima domanda: Quale squadra ha vinto la Champions League nel 2007?\n");
            printf ("A) Juventus\nB) Milan\nC) Inter\n");
            
            scanf("%s", &risposta1);
             
            if (risposta1 == 'B' || risposta1 == 'b'){
                printf("complimenti, risposta esatta!\n");
                i++;
            } else {
                printf("Risposta errata\n");
            }
            
           
           //seconda domanda
            printf("Seconda domanda: Quante Champions League ha vinto il Milan?\n");
             printf ("A) 3\nB) 11\nC) 7\n");
             
             scanf("%s", &risposta2);
             
             if (risposta2 == 'C' || risposta2 == 'c'){
                printf("complimenti, risposta esatta!\n");
                i++;
            } else {
                printf("Risposta errata\n");
            }
             
             //terza domanda
             
             printf("Terza domanda: Mara tifa Milan?\n");
             printf("A) Sì\nB) No\nC) Forse\n");
             
             scanf("%s", &risposta3);
             
             if (risposta3 == 'A' || risposta3 == 'a'){
                printf("complimenti, risposta esatta!\n");
                i++;
            } else {
                printf("Risposta errata\n");
            }
            
            printf("Hai totalizzato %d domande corrette", i);
             
            
            
        }
    
     else if (scelta == 'B' || scelta == 'b') {
        printf("Arrivederci, alla prossima!");
        return 0;
    }
    
    
    
    
    

    return 0;
}