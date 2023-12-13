# 0x1E. C - Search Algorithms
Implentation of search algorithms using the C programming language

## 0-linear.c
Write a function that searches for a value in an array of integers using the Linear Search algorithm.
- Every time a value in the array is compared to the element being sought, the value is printed.

## 1-binary.c
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.
- The array is assumed to be sorted in ascending order.
- It is assumed that the value to be searched for occurs only once in the array.
- The array is printed every time it changes.

## 2-O
What is the time complexity (worst case) of a linear search in an array of size `n`?

## 3-O
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size `n`?

## 4-O
What is the time complexity (worst case) of a binary search in an array of size n?

## 5-O
What is the space complexity (worst case) of a binary search in an array of size n?

## 6-O
What is the space complexity of this function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
