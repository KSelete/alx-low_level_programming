#include "main.h"
#include <stddef.h>
/**
 * append_text_to_file - function that append text at the end of file
 * @filename: file name
 * @text_content: text content
 * Return: Always 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int y;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		y = write(fp, text_content, strlen(text_content));
		if (y < 0)
			return (-1);
	}
	close(fp);
	return (1);
}
