/*In het lab hebben studenten de volgende oplossing bedacht.
  Om een of andere reden wordt de "waiting for input... meerdere
  malen geprint terwijl dit niet zou mogen.
  Waarom?

  De originele code van deze studenten:
#include <stdio.h>

int main(void){
    int cola = 80;
    int aquarius = 100;
    int orange = 100;
    int water = 65;
    int lemonade = 80;
    char input;
    int insertedMoney = 0;
    int money = 0;

    while(1) {
        printf("waiting for input...\n");
        scanf("%c", &input);

        if(input == 'c') {
            while(money<cola) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
            }
        }
        else if(input == 'a') {
            while(money<aquarius) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
            }
        }
        else if(input == 'o') {
            while(money<orange) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
            }
        }
        else if(input == 'w') {
            while(money<water) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
            }
        }
        else if(input == 'l') {
            while(money<lemonade) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
            }
        }
        else if(input == 'q') {
            return 0;
        }
        input = 'z';
        money = 0;
    }
return 0;
}
*/


//Pogen op te lossen:
// Het probleem is er omdat scanf() de buffer leest en zoekt naar wat jij in
// %... hebt meegegeven. Eens dit gevonden, werkt em hier mee verder, maar wordt
// de buffer NIET leeggemaakt.
// volgende keer dat je scanf() aanroept, werkt deze verder met wat er nog in de
// buffer over is. In geval van deze oef, is dat de onzichtbare \n die er nog zit
// doordat je op ENTER gedrukt hebt. Dit komt overeen met de %c waarnaar em opzoek
// is de 2de keer. Je krijgt dus een onvrijwillige print.

/*
  probleem is: scanf leest buffer en als match vindt, stop em, maar ledigd em den buffer NIET.
  Dus volgende keer staat er nog een verloren \n

  mogelijke oplossingen:
  'man sccanf' bekijken en zoeken of je buffer kan flushen (zie is of er
  een flush() functie of iets dergelijks is is.
    er bestaat zoiets fflush(), maar ook een reden waarom deze NIET te gebruiken:
    http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1052863818&id=1043284351
    IDEM VOOR: flushall(); (loop die fflush oproept en alles fushed, stdIN dus ook)

  lees STRING in ipv char.
  En gebruik dan ssstring in de colamethode, aquarismethode, ... om te checken.
  hoe dit te doen:
  http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1044873249&id=1043284392
  vb:
  SEE BELOW scanf considerations------------

  ledig buffer door gebruik te maken van de getchar() functie (of zoiets).
  Sommige studenten hebben het zo opgelost.
        SIMPELSTE OPLOSSING.
  */

/*scanf considerations -----------------------
  --------------------------------------------
Consider the following code;
     scanf("%d", &n);
     scanf"%c", &op);

Many students have done this, only to find the program "just skips through" the second scanf.

Assume you type 45\n in response to the first scanf. The 45 is copied into variable n.
When your program encounters the next scanf, the remaining \n is quickly copied into the variable op.

One foolproof approach is to always flush the buffer. This will clear any pesky
\n characters.
     scanf("%d", &n);
     flushall();         // kill any characters left in buffer
     scanf("%c", &op);
     flushall();

--------------------------------------------------------------------------------
I tend to use an alternative when fetching input from the keyboard. Get the entire
string from the keyboard using the function gets and then sscanf into the variables.
The gets function fetches the string up to and including the \n character, but it
throws away the \n character.
     char s1[80];
     ....
     gets(s1); // get an entire string from the keyboard.
     sscanf(s1, "%s", &d);
     gets(s1);
     sscanf(s1, "%s", &op);

One big advantage of this approach is that it greatly simplifies writing to a file.
Note in the following, all code to write input data to a file is the same;
fprintf(f1, "%s\n", s1); which lends itself well to block copying.
     char s1[80];
     ....
     gets(s1); // get an entire string from the keyboard.
     fprintf(f1, "%s\n", s1);
     sscanf(s1, "%s", &d);

     gets(s1);
     fprintf(f1, "%s\n", s1);
     sscanf(s1, "%s", &op);

*/

#include <stdio.h>

int main(void)
{
    int cola = 80;
    int aquarius = 100;
    int orange = 100;
    int water = 65;
    int lemonade = 80;
    char input;
    int insertedMoney = 0;
    int money = 0;

    while(1)
    {
        //printf("11 %d\n", input);
        printf("waiting for input...\n");
        scanf("%c", &input);

        getchar();

        if(input == 'c') {
            while(money<cola) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
                printf("inserted %i money so far\n", money);
                getchar();
            }
        }
        else if(input == 'a') {
            while(money<aquarius) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
            }
        }
        else if(input == 'o') {
            while(money<orange) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
            }
        }
        else if(input == 'w') {
            while(money<water) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
            }
        }
        else if(input == 'l') {
            while(money<lemonade) {
                scanf("%i", &insertedMoney);
                money = money + insertedMoney;
            }
        }
        else if(input == 'q') {
            return 0;
        }
        //printf("character as int: %d\n", input);
        input = 'z';
        money = 0;

       // printf("character as int: %d\n", input);
    }
return 0;
}

/* Opmerkingen:
  met getchar() wordt het eenvoudig opgelost, maar het is niet ideaal

  verder  zouden er meer printf's mogen  zijn om alles duidelijker te maken.
  */
