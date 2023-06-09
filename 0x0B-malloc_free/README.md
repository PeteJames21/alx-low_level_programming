# Dynamic Memory Allocation With `malloc`

## 0-create_array.c
Write a function that creates an array of chars, and initializes it with a specific char.
- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if size = 0
- Returns a pointer to the array, or `NULL` if it fails

## 1-strdup.c
Write a function that returns a pointer to a newly allocated space in memory, which contains
 a copy of the string given as a parameter.
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

## 2-str_concat.c
Write a function that concatenates two strings.
- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
- if NULL is passed, treat it as an empty string

## 3-alloc_grid.c
Create a 2D array of integers initialized with zeros and return a pointer to the array.

## 4-free_grid.c
Write a function that frees a 2 dimensional grid previously created by the `alloc_grid` function in `3-alloc_grid.c`
