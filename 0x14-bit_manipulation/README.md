# Bit Manipulation

## 0-binary_to_uint.c
Write a function that converts a binary number to an unsigned int.
- Return: the converted number, or 0 if:
	- there is one or more chars in the string `b` that is not `0` or `1`
	- `b` is `NULL`

## 1-print_binary.c
Write a function that prints the binary representation of a number.
- Conversion is only done using bitwise manipulation without use of / or %

## 2-get_bit.c
Write a function that returns the value of a bit at a given index.
- Return `-1` if an error occured

## 3-set_bit.c
Write a function that sets the value of a bit to 1 at a given index.
- Returns: `1` if it worked, or `-1` if an error occurred

## 4-clear_bit.c
Write a function that sets the value of a bit to 0 at a given index.
- Returns: `1` if it worked, or `-1` if an error occurred

## 5-flip_bits.c
Write a function that returns the number of bits you would need to flip to get from one number to another.

## 100-get_endianness.c
Write a function that checks the endianness.
- Use the command `lscpu | head` to verify the output of the function
