#include "libasm.h"
#define BUF 32

int        main(int ac, char **av)
{
    char dest[1000];
    char *dest1 = "salut"; 
    int ret;
    int fd = open(av[ac -1], O_RDONLY);
    if (ac != 2)
        fd = open("test.txt", O_RDONLY);
    char buf[BUF + 1];

    printf("ft_strlen\n\n");
    STRLEN("");
    STRLEN("i");
    STRLEN("salut");
    STRLEN("salutsalut");
    
    printf("\n##########################\n\n");

    printf("ft_strcpy\n\n");
    
    STRCPY(dest, "");
    STRCPY(dest, "i");
    STRCPY(dest, "salut");
    STRCPY(dest, "salutsalut");
    
    printf("\n##########################\n\n");

    printf("ft_strcmp\n\n");
    
    STRCMP(dest1, "");
    // STRCMP(dest1, NULL); strcmp seg sur ce test
    STRCMP(dest1, "i");
    STRCMP(dest1, "salut");
    STRCMP(dest1, "salutsalut");

    printf("\n##########################\n\n");

    printf("ft_write\n\n");
    

    printf("\nMINE: %zd  |  errno : %d\n", ft_write(1, "tr uc", 5), errno);
    printf("\nREAL: %zd  |  errno : %d\n\n", write(1, "tr uc", 5), errno);
    
    printf("\nMINE: %zd  |  errno : %d\n", ft_write(1, "aaah", 4), errno);
    printf("\nREAL: %zd  |  errno : %d\n\n", write(1, "aaah", 4), errno);
    
    printf("\nMINE: %zd  |  errno : %d\n", ft_write(-1, "bonjour", 7), errno);
    printf("\nREAL: %zd  |  errno : %d\n\n", write(-1, "bonjour", 7), errno);
    
    printf("\nMINE: %zd  |  errno : %d\n", ft_write(1, "", 7), errno);
    printf("\nREAL: %zd  |  errno : %d\n\n", write(1, "", 7), errno);

    printf("\n##########################\n\n");

    printf("ft_read\n\n");

    while ((ret = ft_read(fd, buf, BUF)) > 0)
    {
        buf[ret] = 0;
        printf("%s", buf);
    }
    printf("\nMINE: %d  |  errno : %d\n", ret, errno);
    while ((ret = read(fd, buf, BUF)) > 0)
    {
        buf[ret] = 0;
        printf("%s", buf);
    }
    printf("\nREAL: %d  |  errno : %d\n", ret, errno);


    while ((ret = ft_read(42, buf, BUF)) > 0)
    {
        buf[ret] = 0;
        printf("%s", buf);
    }
    printf("\nMINE: %d  |  errno : %d\n", ret, errno);
    while ((ret = read(42, buf, BUF)) > 0)
    {
        buf[ret] = 0;
        printf("%s", buf);
    }
    printf("\nREAL: %d  |  errno : %d\n", ret, errno);

    printf("\n##########################\n\n");

    printf("ft_strdup\n\n");

	STRDUP("test");
	STRDUP("Ceci est un test quand meme pas mal plus lonng");
	STRDUP("");
   // STRDUP(NULL); strdup seg sur ce test


    printf("\n##########################\n\n");

    return (0);
}
