#include <fcntl.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <unistd.h>
#include "ft_strings.h" 

int	sizefile(int fd);
void	loadnumbers(int fd, char *dict);

void	openfile(char*file, char *input)
{
	int				fd;
	unsigned int	size;
	char			*dict;

	fd = open(file, O_RDONLY);
	dict = malloc(sizefile(fd));
	if (fd < 0)
	{
		write (2, "Error, Can't open the dictionary file\n", 38);
	}
	else
	{
		loadnumbers(fd, dict);
	}
	print_number(dict, input);
	free(dict);
	close (fd);
}

int	sizefile(int fd)
{
	char			tmp;
	unsigned int	size;

	size = 0;
	while (read(fd, &tmp, 1) == 1)
		size++;
	return (size);
}

int	linesfile(int fd)
{
	char			buffer;
	unsigned int	size;
	int				lines;

	lines = 0;
	size = 0;
	while (read(fd, &buffer, 1) == 1)
	{
		if (buffer == '\n')
		{
			lines++;
		}
		size++;
	}
	return (lines);
}

int	readfile(int fd)
{
	char	buf[700];
	ssize_t	nr_bytes;

	nr_bytes = read(fd, buf, 700);
	if (nr_bytes == 0)
	{
		write (1, "empty file\n", 25);
	}
	else
	{
		printf ("el nº de char es %d, contenido: %s \n", (int)nr_bytes, buf);
	}
	return (0);
}

void	loadnumbers(int fd, char *dict)
{
	char	buf[1000];
	ssize_t	nr_bytes;

	printf("PASA %d",fd);
	nr_bytes = read(fd, buf, 1000);
	if (nr_bytes == 0)
	{
		write (1, "empty file\n", 11);
	}
	else
	{
		ft_strcpy(dict, buf);
	}
}
