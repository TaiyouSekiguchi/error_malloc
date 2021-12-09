/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_malloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:51:48 by tsekiguc          #+#    #+#             */
/*   Updated: 2021/12/09 14:52:04 by tsekiguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*my_malloc(size_t size)
{
	void	*ret;
	int		num;

	num = rand() % 10;
	if (num == 0)
	{
		printf("\x1b[31mmalloc failed!!  [num is %d]\x1b[39m\n", num);
		ret = NULL;
	}
	else
	{
		printf("\x1b[32mmalloc success!! [num is %d]\x1b[39m\n", num);
		ret = malloc(size);
	}
	return (ret);
}
