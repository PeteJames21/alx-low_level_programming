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
