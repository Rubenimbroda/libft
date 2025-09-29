/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalphaa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <rnuno-im@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:53:48 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/09/29 16:53:53 by rnuno-im         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c < 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* int main () {
	char c = '3';
	
	if (ft_isalpha(c) != 0){
		printf ("es alpha");
	}
	else {
		printf ("no es alpha");
	}
}*/
