/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbotelho <bbotelho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:36:42 by bbotelho          #+#    #+#             */
/*   Updated: 2023/10/02 21:13:41 by bbotelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		len1;
	int		len2;
	int		i;
	int		j;

	if (s1 == 0 && s2 == 0)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len = (len1 + len2);
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len--)
	{
		str[i] = s1[i];
		i++;
		j = 0;
		while (s2[j] < i && str[i] == ft_strlen(s1))
		{
			str[i] = s2[j];
			j++;
			i++;
		}
	}
	str[j] = '\0';
	return (str);
}
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "hello";
	s2 = "World";
	printf("Resultado: %s \n", ft_strjoin(s1, s2));
	return (0);
}
