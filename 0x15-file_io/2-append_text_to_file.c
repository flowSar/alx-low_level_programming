#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <sys/stat.h>
/**
 * append_text_to_file - append test to the end of the file.
 * @filename: file name.
 * @text_content : file content.
 * Return: 1 in success and -1 if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file_name;
	struct stat buffer;

	if (stat(filename, &buffer) != 0)
		return (-1);
	if (text_content == NULL)
		return (1);

	if (strlen(text_content) == 0)
		return (1);
	if (filename == NULL)
		return (-1);

	file_name = fopen(filename, "a");
	if (file_name == NULL)
		return (-1);

	fprintf(file_name, "%s", text_content);
	fclose(file_name);

	return (1);
}
