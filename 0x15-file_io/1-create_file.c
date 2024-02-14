#include "main.h"
#include <stddef.h>
/**
 * create_file - this function will create a file
 * @filename: file name
 * @text_content: text content
 * Return: Always 1
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int y;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fp < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		y = write(fp, text_content, strlen(text_content));
		if (y < 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
