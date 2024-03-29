# C - Hash tables

## 0-hash_table_create.c
Write a function that creates a hash table
- Returns a pointer to the newly created hash table
- If something went wrong, your function should return NULL

## 1-djb2.c
Write a hash function implementing the djb2 algorithm.

## 2-key_index.c
Write a function that gives you the index of a key using the djb2 algorithm.
- Returns the index at which the key/value pair should be stored in the array of the hash table.

## 3-hash_table_set.c
Write a function that adds an element to the hash table.
- The key cannot be an empty string
- The value must be duplicated and it can be an empty string
- Returns: `1` if it succeeded, `0` otherwise
- In case of collision, add the new node at the beginning of the list
- To test for collisions, below are some strings that collide using the djb2 algorithm:
  - hetairas collides with mentioner
  - heliotropes collides with neurospora
  - depravement collides with serafins
  - stylist collides with subgenera
  - joyful collides with synaphea
  - redescribed collides with urites
  - dram collides with vivency

## 4-hash_table_get.c
Write a function that retrieves a value associated with a key.
- Returns the value associated with the element, or NULL if key couldn’t be found

## 5-hash_table_print.c
Write a function that prints a hash table.
- They key/value pairs are printed in the order they appear in the hash table.
- Nothing is printed if the pointer to the hash table is `NULL`.

## 6-hash_table_delete.c
Write a function that deletes a hash table.
