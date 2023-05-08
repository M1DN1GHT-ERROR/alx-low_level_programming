In C, file input/output (I/O) operations are commonly performed using the functions provided by the standard library <stdio.h>. Here are some key functions for file I/O:

Opening and closing files:

FILE *fopen(const char *filename, const char *mode): Opens a file with the specified filename in the specified mode (e.g., "r" for reading, "w" for writing). Returns a pointer to a FILE structure representing the file or NULL on failure.
int fclose(FILE *stream): Closes the given file stream. Returns 0 on success or EOF on failure.
Reading from files:

size_t fread(void *ptr, size_t size, size_t count, FILE *stream): Reads data from the specified file stream into the memory pointed by ptr. Returns the number of items successfully read.
int fscanf(FILE *stream, const char *format, ...): Reads formatted data from the file stream based on the specified format string. Returns the number of input items successfully matched and assigned.
Writing to files:

size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream): Writes data from the memory pointed by ptr to the specified file stream. Returns the number of items successfully written.
int fprintf(FILE *stream, const char *format, ...): Writes formatted data to the file stream based on the specified format string. Returns the number of characters written.
File positioning:

int fseek(FILE *stream, long offset, int origin): Sets the file position indicator for the specified file stream. The offset and origin parameters determine the new position. Returns 0 on success or a non-zero value on failure.
long ftell(FILE *stream): Returns the current file position indicator's value for the specified file stream.
Error handling:

void perror(const char *s): Prints an error message to stderr based on the value of errno (an integer variable indicating the error code).
int ferror(FILE *stream): Checks if an error has occurred on the specified file stream. Returns a non-zero value if an error occurred.
Remember to include the <stdio.h> header file at the beginning of your program to use these functions. Additionally, it's important to handle error cases appropriately by checking the return values and using error-handling mechanisms like perror and ferror.
