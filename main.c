#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int easy = 1000;
  int medium = 10000;
  int hard = 1000000;
  int option = 0;
  int choice = 0;
  int count = 0;
  int random_number = 0;
  
  srand(time(NULL));
  
  printf("What's the number??\n\n");
  
  do{
    printf("Menu\n\n");
    printf("Press 1 to easy\nPress 2 to medium\nPress 3 to hard\n\n");
    scanf("%d", &option);
  
    }while(option != 1 && option != 2 && option != 3);

    if (option == 1){
        
        random_number = rand() % 1001;
        printf("\n\nChoose a number between 0 and 1000\n\n");
        
        while(choice != random_number){
            scanf("%d", &choice);
            if(random_number > choice){
                printf("Very low\n");
            }else if(random_number < choice){
                printf("Very high\n");
            }
            count++;    
        }
        printf("congratulations, you got it right in %d tries", count);
        
        
    }else if (option == 2){
        random_number = rand() % 10001;
        printf("\n\nChoose a number between 0 and 10000\n\n");
    
        while(choice != random_number){
            scanf("%d", &choice);
            if(random_number > choice){
                printf("Very low\n");
            }else if(random_number < choice){
                printf("Very high\n");
            }
            count++;    
        }
        printf("congratulations, you got it right in %d tries", count);
        
    }else if (option == 3){
        random_number = rand() % 1000001;
        printf("\n\nChoose a number between 0 and 1000000\n\n");
        
        while(choice != random_number){
            scanf("%d", &choice);
            if(random_number > choice){
                printf("Very low\n");
            }else if(random_number < choice){
                printf("Very high\n");
            }
            count++;    
        }
        printf("congratulations, you got it right in %d tries", count);
    }

  return 0;
}
