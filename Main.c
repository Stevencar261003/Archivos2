#include <stdio.h>

int main(){

    FILE *arc=NULL;
    FILE *arc2=NULL;
    int num;

    arc=fopen("vector.txt","r");
    arc2=fopen("vector2.txt","w");

    
    if (arc==NULL){
        printf("No se logra abrir el complemento");
        return -1;
    }

    for (int i=0; i<100; i++){
        fprintf(arc,"%d\n",i);

    }
    while (!feof (arc)){
        fscanf(arc,"%d", &num);


    if(num%3==0){
        fprintf(archivo,"modulo de 3");
    }
    else{
        fprintf(arc2,"%d\n",num);
    }
    }
    fclose(arc);
    fclose(arc2);
    return 0;
}
