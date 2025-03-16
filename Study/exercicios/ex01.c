/*1.Escreve a prinmeira letra do 3 argumentos, o programa
tem de ter pelo menos 2 argumentos, es gira */
#include <unistd.h>

int main(int argc, char **argv)
{
    write(1, &argv[2][0], 1);
}