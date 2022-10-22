#include "get_next_line.h"

size_t ft_strlen(char *s){
  
  size_t i;

  i = 0;
  while (s[i] != '\0'){
    i++;
  }
  return i;
}

char *ft_strchr(const char *str, int c) {

  char a;
  char *s;
  int i;

  i = 0;
  a = c;
  s = (char *)str;
  if (a == '\0') 
    return NULL;

  if (*s == a) {
    return (s);
  }

  while (*s != '\0') {
    if (*s == a) {
      return s;
    }
    s++;
  }
  return 0;
}

char *ft_substr(char const *s, unsigned int start, int len) {
  int i;
  char *str;

  if ((char *)s == NULL)
    return NULL;
  i = 0;
  len = ft_strlen((char *)s) + 1;
  str = malloc((len - start) * sizeof(char) + 1);
  if (str == NULL)
    return NULL;
  while (s[start] != '\0') {
    str[i] = s[start];
    start++;
    i++;
  }
  str[i] = '\0';
  return str;
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char *ft_strdup(const char *s1) {
  char *space;
  int length;
  int i;

  i = 0;
  length = ft_strlen((char *)s1);
  space = (char *) malloc(length * sizeof(char) + 1);
  if (space == NULL)
    return (NULL);

  while (s1[i] != '\0') {
    space[i] = s1[i];
    i++;
  }
  space[i] = '\0';
  return (space);
}
