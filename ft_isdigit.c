/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <rnuno-im@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:56:42 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/09/29 17:03:43 by rnuno-im         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c < '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main () {
	char c = 'a';
	
	if (ft_isdigit(c) != 0){
		printf ("es digito");
	}
	else {
		printf ("no es digito");
	}
}*/