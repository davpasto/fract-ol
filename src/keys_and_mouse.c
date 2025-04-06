/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_and_mouse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 02:55:30 by davpasto          #+#    #+#             */
/*   Updated: 2025/04/02 04:39:08 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	key_hook(int key_code, t_fractal *fractal)
{
	if (key_code == ESC)
		exit_fractal(fractal);
	return (0);
}

/*int	mouse_hook(int mouse_code, int x, int y, t_fractal *fractal)
{
	if (mouse_code == SCROLL_UP)
		zoom(fractal, x, y, 1);
	else if (mouse_code == SCROLL_DOWN)
		zoom(fractal, x, y, -1);
	selector(fractal, fractal->name);
	return (0);
}*/
