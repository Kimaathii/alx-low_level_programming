#include <unistd.h>
/**
 * main - entry point
 * Return: 1 Always(succeed)
 */
int main() {
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return 1;
}
