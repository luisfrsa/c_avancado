STRING.H
//Retorna tamanho da string
size_t strlen(const char *str);
//Retorna comparação (+/-/0)
int strcmp(const char *lhs, const char *rhs);
//Retorna comparação dos n primeiros caracteres (+/-/0)
int strncmp(const char *lhs, const char *rhs, size_t count);
//Retorna ponteiro para um char (primeira ocorrência)
char *strchr(const char *str, int ch);
//Retorna ponteiro para um char (última ocorrência)
char *strrchr(const char *str, int ch);
//Retorna tamanho máximo de src em dest
size_t strspn(const char *dest, const char *src);
//Retorna tamanho máximo de não src em dest
size_t strcspn(const char *dest, const char *src);
//Retorna primeiro caractere que está em ambas strings
char *strpbrk(const char *dest, const char *str);
//Retorna ponteiro para ocorrencia de substr em str
char *strstr(const char *str, const char *substr);
//Copia a string src para dest
char *strcpy(char *dest, const char *src);
//Copia n elementos de src para dest
char *strncpy(char *dest, const char *src, size_t count);
//Concatena src ao final de dest
char *strcat(char *dest, const char *src);
//Concatena n elementos de src ao final de dest
char *strncat(char *dest, const char *src, size_t count);
//Coloca ch nas count primeiras posições de dest
void *memset(void *dest, int ch, size_t count);
//Copia os count primeiros de src para primeiros count de dest
void *memcpy(void *dest, void *src, size_t count);
//Compara count primeiros caracteres (+/-/0)
int *memcmp(const void *lhs, const void *rhs, size_t count);
//Acha a primeira ocorrencia de ch nos primeiros count elementos
void *memchr(const void *ptr, int ch, size_t count);