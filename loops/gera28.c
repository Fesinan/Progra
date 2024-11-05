#include <stdio.h>

int main(){
    int cant, codi, codimay, i;
    float prec, precmay, precmen;

    printf(" INGRESE LA CANTIDAD DE PRODUCTOS: ");
    scanf("%d", &cant);

    printf(" iNGRESE EL CODIGO DE UN PRODUCTO: ");
    scanf("%d", &codi);
    codimay = codi;

    printf(" iNGRESE EL PRECIO DE UN PRODICTO: ");
    scanf("%f", &prec);
    precmay = prec; precmen = prec;

    for(i = 1; i < cant; i++){

        printf(" iNGRESE EL CODIGO DE UN PRODUCTO: ");
        scanf("%d", &codi);

        printf(" iNGRESE EL PRECIO DE UN PRODICTO: ");
        scanf("%f", &prec);

        if(prec >precmay){
            precmay = prec;
            codimay = codi;
        }else if (prec < precmen){
            precmen = prec;
        }

    }

    printf(" EL CODIGO DEL PRODUCTO CON MAYOR PRECIO ES: %d \n", codimay);
    printf(" EL PRECIO MAS VARATO ES: %.2f \n ", precmen);


}
