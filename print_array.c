/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:38:20 by ecaruso           #+#    #+#             */
/*   Updated: 2023/04/27 19:38:58 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_array(char **array_strings)
{
	int	i;

	i = 0;
	while (array_strings[i])
	{
		ft_printf("%s\n", array_strings[i]);
		i++;
	}
}
