/**
 * new_node - creates a new listint_t node.
 * @n: number to place inside the node.
 *
 * Return: pointer to the new node. 
 */
listint_t *new_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}

