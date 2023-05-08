# File IO

## 0-read_textfile.c
Write a function that reads a text file and prints it to the POSIX standard output.
- if the file can not be opened or read, return 0
- if `filename` is NULL return 0
- if `write` fails or does not write the expected amount of bytes, return 0

## 1-create_file.c
Create a function that creates a file.
- Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, `write` “fails”, etc…)
- The created file must have those permissions: `rw-------`. If the file already exists, do not change the permissions.
- if the file already exists, truncate it
- if `filename` is NULL return `-1`
- if `text_content` is `NULL` create an empty file

## 2-append_text_to_file.c
Write a function that appends text at the end of a file.
- Return: `1` on success and `-1` on failure
- Do not create the file if it does not exist
- If `filename` is `NULL` return -1
- If text_content is `NULL`, do not add anything to the file. Return `1` if the file exists and `-1` if the file does not exist or if you do not have the required permissions to write the file

## 3-cp.c
- Write a program that copies the content of a file to another file.
- Usage: `cp file_from file_to`
- if the number of argument is not the correct one, exit with code `97` and print `Usage: cp file_from file_to`, followed by a new line, on the POSIX standard error
- if `file_to` already exists, truncate it
- if `file_from` does not exist, or it cannot be read, exit with code `98` and print `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, on the POSIX standard error. A similar error is printed when `write` fails.
-  if the file descriptor cannot be closed , exit with code `100` and print `Error: Can't close fd FD_VALUE`, followed by a new line, on the POSIX standard error.
- Permissions of the created file: `rw-rw-r--`. If the file already exists, do not change the permissions
- 1,024 bytes are read at a time using a buffer from the `file_from` to make less system calls
