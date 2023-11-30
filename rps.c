#include<stdio.h>
#include<stdlib.h>

int main(){
    int P_points=0;
    int C_points=0;
    int P_choice;
    int C_choice;
    do{
    //Πάρε επιλογη παίκτη
    printf("Make your choice:\n");
    printf("1.Rock\n");
    printf("2.Paper\n");
    printf("3.Scissor\n");
    do{
       scanf("%d", &P_choice);
    }while(P_choice!=1 && P_choice!=2 && P_choice!=3);
    //Πάρε επιλογή Η/Υ
    srand(time(NULL));
    int min=1;
    int max=3;
    C_choice= min +rand()%(max-min+1);
    //Υπολογισμός νικητή
    if (P_choice==C_choice){
        printf("TIE\n");
    } else{
        if(P_choice==1){
            if(C_choice==2){
                printf("CPU WINS\n");
                C_points++;
            }else{
                printf("YOU WIN\n");
                P_points++;
            }
        }else if(P_choice==2){
            if(C_choice==3){
                printf("CPU WINS\n");
                C_points++;
            }else{
                printf("YOU WIN\n");
                P_points++;
            }
        }else{
            if(C_choice==1){
                printf("CPU WINS\n");
                C_points++;
            }else{
                printf("YOU WIN\n");
                P_points++;
            }
        }

    }
    printf("Score:\n");
        printf("Player score=%d\n", P_points);
        printf("CPU score=%d\n", C_points);
    }while(P_points!=3 && C_points!=3);
    if(P_points==3){
        printf("YOU ARE THE WINNER!!!");
    }else{
        printf("CPU WON\n YOU LOST :(");
    }

}
