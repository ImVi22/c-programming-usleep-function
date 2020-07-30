# c-programming-usleep-function
#include &lt;stdio.h> 
#include &lt;unistd.h>
int main() { 
setbuf(stdout,NULL); 
char name[15] ="Farm House";                   // TODO Get name as user input char size; 
int personItServes;
float retailPrice;
printf("Enter the size of the pizza as either 'S', 'M' or 'L': ");
scanf("%c", &amp;size);
printf("Enter the number of persons it serves: "); 
scanf("%d", &amp;personItServes); 
printf("Enter retail price: "); 
scanf("%f", &amp;retailPrice); 
printf("\nGenerating message...\n"); usleep(3000000); 
printf("\nYay! You have ordered a %s pizza of size %c that serves %d.\nPlease " "pay Rs. %.1f to the delivery person.", name, size, personItServes, retailPrice); printf("\n\nSending SMS...\n");
usleep(1000000); 
printf("\n\n***********SMS SENT**********\n\n");
return 0; 
}
