#include "main.h"

/**
 * append_text_to_file - Appens text at ends of a file
 * @filename: a pointer to name of file
 * @text_content: The string to append at the end of file
 * Return: if failed or NULL, -1 if it does not extis the user lacks write perm
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
