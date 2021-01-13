#include "libasm.h"
# include <errno.h>

int        main(void)
{
    int fd = open("mine.txt", O_WRONLY);
    int fd2 = open("real.txt", O_WRONLY);
    char dest[1000];
    char *dest1 = "salut"; 
    ssize_t out;

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
    
    out = write(fd2, "Bonjour", 7);
    printf("\nREAL : %ld\n", out);
    out = ft_write(fd, "Bonjour", 7);
    printf("MINE : %ld\n", out);
    out = write(1, "", 0);
    printf("\nREAL : %ld\n", out);
    out = ft_write(1, "", 0);
    printf("MINE : %ld\n", out);
    out = write(-1, "Bonjour", 7);
    printf("\nREAL : %ld\n", out);
    out = ft_write(-1, "Bonjour", 7);
    printf("MINE : %ld\n", out);

	out = write(fd2, "Bonjour", 7);
    printf("\nREAL : %ld\n", out);
    out = ft_write(fd2, "Bonjour", 7);
    printf("MINE : %ld\n", out);

	out = write(fd2, "Bonjour", 7);
    printf("\nREAL : %ld\n", out);
    out = ft_write(fd, "Bonjour", 7);
    printf("MINE : %ld\n", out);

	out = write(fd2, "Bonjour", 10);
    printf("\nREAL : %ld\n", out);
    out = ft_write(fd, "Bonjour", 10);
    printf("MINE : %ld\n", out);
    printf("\n##########################\n\n");

    printf("ft_read_\n\n");

    printf("\n##########################\n\n");

    printf("ft_strdup_\n\n");

	STRDUP("test");
	STRDUP("Ceci est un test quand meme pas mal plus lonng");
	STRDUP("");


    printf("\n##########################\n\n");

    return (0);
}