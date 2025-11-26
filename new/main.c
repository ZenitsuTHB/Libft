/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:16:24 by avolcy            #+#    #+#             */
/*   Updated: 2025/11/26 19:22:14 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	int a = 65;
	int c;

	c = ft_isalpha(a);
	if (c == 1)
		printf("the value-[%d] of char-[%c] is an alphabet\n", a,a);
	else
		printf("the value-[%d] of char-[%c] is not an alphabet\n",a,a);
	return (0);
}

