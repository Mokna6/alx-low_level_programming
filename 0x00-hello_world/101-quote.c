#include <unlstd.h>
/**
 *main- Entry point
 * Discription: print a qoute using write function
 * ssize_t write(int fd, const void *buf, size_t count);
 *
 *Return 1 (error).
 */
int main(void)
{        char *quote  = ("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	write(1, quo, 59);
	return (1);
}
