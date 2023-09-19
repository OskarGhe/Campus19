int ft_isalnum(int c)
{
  if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z'))
    return (1);
  return (0);
}