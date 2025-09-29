/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <rnuno-im@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:03:18 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/09/29 17:09:23 by rnuno-im         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include "libft.h"

int	ft_isalnum(char c)
{
	if (c >= '0' && c < '9')
	{
		return (1);
	}
	else if ((c >= 'A' && c < 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* int main () {
	char c = '@';
	
	if (ft_isalnum(c) != 0){
		printf ("es numero o letra");
	}
	else {
		printf ("no es numero o letra");
	}
} */