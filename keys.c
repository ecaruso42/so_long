/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:20:25 by ecaruso           #+#    #+#             */
/*   Updated: 2023/05/08 17:34:49 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
int	key_pressed(int keycode, t_game *game)
{
	ft_printf("%d\n", keycode);
	game->map.enemies = 0;
	return(0);
}