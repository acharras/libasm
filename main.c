#include "libasm.h"

int        main(void)
{
    char dest[1000];
    char *dest1 = "salut"; 

    printf("ft_strlen_\n\n");
    STRLEN("");
    STRLEN("i");
    STRLEN("salut");
    STRLEN("salutsalut");
    printf("\n##########################\n\n");

    printf("ft_strcpy_\n\n");
    
    STRCPY(dest, "");
    STRCPY(dest, "i");
    STRCPY(dest, "salut");
    STRCPY(dest, "salutsalut");
    printf("\n##########################\n\n");

    printf("ft_strcmp_\n\n");
    
    STRCMP(dest1, "");
    STRCMP(dest1, "i");
    STRCMP(dest1, "salut");
    STRCMP(dest1, "salutsalut");
    printf("\n##########################\n\n");

    printf("ft_write_\n\n");
    
    WRITE(1, "salut", 1);
    WRITE(1, "salut", 2);
    WRITE(1, "salut", 3);
    WRITE(1, "salut", 5);
    WRITE(1, "salut", 10);
    printf("\n##########################\n\n");

    return (0);
}