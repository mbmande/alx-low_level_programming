#include "lists.h"

/**
 * find_listint_loop - it finds the loop in the list
 * @head: head of the list
 * Return: NULLL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head, *fs = head;

	while (fs != NULL && fs->next != NULL)
	{
		sl = sl->next;
		fs = fs->next->next;

		if (sl == fs)
		{
			sl = head;
			while (sl != fs)
			{
				sl = sl->next;
				fs = fs->next;
			}
			return (sl);
		}
	}
	return (NULL);
}
