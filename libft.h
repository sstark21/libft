#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_strlen(char *c);
int		ft_exponentiation(int dig, int exp);
void	*ft_memset(void *dest, int c, size_t n);
void	ft_bzero(void *str, size_t len);
char	*ft_strcat(char *dest, const char *add);
char	*ft_strcpy(char *dst, const char *src);
char	**ft_strsplit(char const *s,char c);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
int		ft_strcmp(char *s1, char *s2);
char	*strnstr(const char *haystack, const char *needle, size_t hlen);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);


typedef struct		s_list
{
	void			*content;
	size_t 			content_size;
	struct s_list	*next;
}					t_list;


#endif
