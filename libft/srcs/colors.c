/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 04:02:55 by cmariot           #+#    #+#             */
/*   Updated: 2022/01/08 04:54:56 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	red(void)
{
	write(1, "\033[1;31m", 7);
}

void	green(void)
{
	write(1, "\033[1;32m", 7);
}

void	reset_color(void)
{
	write(1, "\033[0m", 4);
}