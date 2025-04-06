/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 01:54:21 by davpasto          #+#    #+#             */
/*   Updated: 2025/04/02 04:38:01 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	init_fractal(t_fractal *fractal)
{
	fractal->x = 0;
	fractal->y = 0;
	fractal->offset_x = -1.21;
	fractal->offset_y = -1.21;
	fractal->color = 0xFCBE11;
	fractal->zoom = 300;
	fractal->max_iterations = 42;
}

void	init_mlx(t_fractal *fractal)
{
	fractal->mlx = mlx_init();
	fractal->window = mlx_new_window(fractal->mlx, SIZE, SIZE, "Window");
	fractal->image = mlx_new_image(fractal->mlx, SIZE, SIZE);
	fractal->addr = mlx_get_data_addr(fractal->image,
			&fractal->bits,
			&fractal->line_size,
			&fractal->endian);
}
