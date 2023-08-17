#!/usr/bin/python3

# Task: find the largest palindrome made from the product of
# two 3-digit numbers.


def isPalindrome(s):
    return s == s[::-1]


def get_palindromes():
    """Get palindromes that are products of two 3-digit numbers."""
    for i in range(100, 999):
        for j in range(100, 999):
            prod = i * j
            if isPalindrome(str(prod)):
                yield prod


print("Largest palindrome = ", max(get_palindromes()))
