# More on `malloc` and `free`

## 0-malloc_checked.c
Write a function that allocates memory using malloc.
- if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
- Return a pointer to the allocated memory

## 1-string_nconcat.c
Write a function that concatenates two strings and returns a pointer to the new string.
- The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated

## 2-calloc.c
Write a function that allocates memory for an array, using malloc.
- The _calloc function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
- The memory is set to zero
- If `nmemb` or `size` is 0, then `_calloc` returns `NULL`
