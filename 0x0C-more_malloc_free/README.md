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

## 3-array_range.c
Write a function that creates an array of integers.
- The array created should contain all the values from min (included) to max (included), ordered from min to max
- If min > max, return NULL

## 100-realloc.c
Write a function that reallocates a memory block using malloc and free
- The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes
- If `new_size` > `old_size`, the “added” memory should not be initialized
- If `new_size` == `old_size` do not do anything and return `ptr`
- If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`
- If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`
