# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int randNum, userNum, numberOfGuesses=1;

    srand(time(0));
    randNum= rand()%100+1;
    // printf("The random number is %d\n", randNum);
    
    
    
    do
    {
        printf("Enter numbern between 1 to 100:\n");
        scanf("%d", &userNum);

        if(userNum<randNum){
            printf("Heigher number please\n");
        }
        else if(userNum>randNum){
            printf("Lower number please\n");
        }
        else{
            printf("*******You guesses the number in %d attempts.\n", numberOfGuesses);
        }

        numberOfGuesses++;
    } while (userNum!=randNum);

    printf("--------------------The random number is %d------------------------- \n", randNum);
    printf("-----------------And your guesses number is %d------------------ \n", userNum);

    return 0;
};
//this is in git hub