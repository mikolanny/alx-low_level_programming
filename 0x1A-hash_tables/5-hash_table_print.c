#include "hash_tables.h"

/**
 * hash_table_print - print contents of hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int size, j, first_hit;

	if (ht == NULL)
		return;
	size = ht->size, j = 0, first_hit = 0;
	printf("{");
	for (j = 0; j < size; j++)
	{
		if (ht->array[j] != NULL)
		{
			const char *key = ht->array[j]->key;
			const char *value = ht->array[j]->value;

			if (ht->array[j]->next == NULL)
			{
				if (first_hit == 1)
					printf(", '%s': '%s'", key, value);
				else
					printf("'%s': '%s'", key, value);
			}
			else
			{
				hash_node_t *temp = ht->array[j];

				while (temp != NULL)
				{
					if (first_hit == 1)
						printf(", '%s': '%s'", temp->key, temp->value);
					else
						printf("'%s': '%s'", temp->key, temp->value);
					first_hit = 1;
					temp = temp->next;
				}
			}
			first_hit = 1;
		}
	}
	printf("}\n");
}
