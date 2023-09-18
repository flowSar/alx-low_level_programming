#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read file and print it tp posix.
 * @filename: file name.
 * @letters : number of letter we should read.
 * Return: return the number of letter in a file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_name = NULL;
	char *buffer = NULL;
	int bytes_read, write_bytes;


	if (filename == NULL)
		return (0);

	file_name = fopen(filename, "r");

	if (file_name == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));
	bytes_read = fread(buffer, sizeof(char), letters, file_name);

	write_bytes = fwrite(buffer, sizeof(char), bytes_read, stdout);
	if (write_bytes < bytes_read)
		return (0);

	free(buffer);
	fclose(file_name);

	return (bytes_read);
}
