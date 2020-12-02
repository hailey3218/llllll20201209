
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int					ft_atoi(const char *str);
void				ft_bzero(void *dst, size_t n);
void				*ft_calloc(size_t num, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *ptf, int value, size_t num);
int					ft_memcmp(const void *lhs, const void *rhs, size_t count);
void				*ft_memcpy(void *dest, const void *src, size_t size);
void				*ft_memmove(void *dst, const void *src, size_t size);
void				*ft_memset(void *ptr, int val, size_t size);
char				**ft_split(char const *s, char c);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(char *s);
char				*ft_strjoin(char const *s1, char const *s2);
unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int		ft_strlcpy(char *dest, const char *src, unsigned int size);
int					ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, unsigned int n);
char				*ft_strnstr(const char *haystack, const char *needle, size_t len);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);

#endif
