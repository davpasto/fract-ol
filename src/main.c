/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 00:15:34 by davpasto          #+#    #+#             */
/*   Updated: 2025/04/02 04:47:03 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	main(int ac, char **av)
{
	t_fractal	*fractal;

	if (ac != 2)
	{
		ft_putendl_fd("Avaliable use: ./fractol <fractal>", 1);
		ft_putendl_fd("Fractal = mandelbrot, julia", 1);
		return (0);
	}
	fractal = malloc(sizeof(t_fractal));
	init_fractal(fractal);
	init_mlx(fractal);
	mlx_key_hook(fractal->window, key_hook, fractal);
	//mlx_mouse_hook(fractal->window, mouse_hook, fractal);
	selector(fractal, av[1]);
	mlx_loop(fractal->mlx);
	return (0);
}

int	selector(t_fractal *fractal, char *str)
{
	//if (ft_strncmp(str, "mandel", 7) == 0)
		//draw_mandelbrot(fractal);
	mlx_put_image_to_window(fractal->mlx, fractal->window, fractal->image, 0,
	0);
	printf("string:%s ", str);
	return (0);
}
