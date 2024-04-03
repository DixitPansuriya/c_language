#include <stdio.h>

void main ()
{

FILE *ptr = fopen("data.txt","r");
FILE *another = fopen ("another.txt","w");


char container[1000];


if ( ptr == NULL ){
	printf("file dose not exist .......\n");
}
if(another == NULL){
printf("error to open another file .......\n");


}

while(fgets(container, sizeof(container),ptr) != NULL){
	fputs(container,another);
}
printf("file opened succesfully.......\n");

fclose(ptr);
fclose(another);

}
