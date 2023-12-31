#include "libft.h"

int ft_atoi(const char *str)
{
  size_t i;
  size_t z;
  size_t sign;
  
  i = 0;
  z = 0;
  sign = 1;
  while (ft_isspace(str[z]))
    z++;
  if (str == '\0')
    return (0);
  if (str[z] == '-' || str[z] =='+')
  {
    sign = (str[z] == '-' ? -1 : 1);
    Z++;
  }
  while (str[z] && str[z] >= '0' && str[z] <= '9')
  {
    i = i * 10 + str[z] - '0';
    z++;
  }
  return (i * sign);
}