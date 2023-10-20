#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - read file and print it tp posix.
 * @filename: file name.
 * @text_content : file content.
 * Return: 1 in success and -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file_name;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file_name = fopen(filename, "w+");
	if (!file_name)
		return (-1);

	if (strlen(text_content) == 0)
		return (1);
	if (file_name == NULL)
		return (-1);

	fprintf(file_name, "%s", text_content);

	if (file_name)
	{
		chmod(filename, mode);
		fclose(file_name);
	}

	return (1);
}
