/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:22:24 by davpasto          #+#    #+#             */
/*   Updated: 2025/04/02 04:35:58 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "minilibx-linux/mlx.h"
# include "libft/libft.h"
# include <math.h>

# define SIZE 700

# define ESC 53
# define SCROLL_UP 4
# define SCROLL_DOWN 5

typedef struct s_fractal
{
	char	*name;
	double	zoom;
	double	offset_x;
	double	offset_y;
	int		color;
	int		x;
	int		y;
	int		max_iterations;
	void	*mlx;
	void	*window;
	void	*image;
	void	*addr;
	int		bits;
	int		line_size;
	int		endian;
	double	zx;
	double	zy;
	double	cx;
	double	cy;
}	t_fractal;

// main.c
int		selector(t_fractal *fractal, char *str);

// init.c
void	init_fractal(t_fractal *fractal);
void	init_mlx(t_fractal *fractal);

// mouse_and_keys
int		key_hook(int key_code, t_fractal *fractal);
int		mouse_hook(int mouse_code, int x, int y, t_fractal *fractal);

// utils.c
int		exit_fractal(t_fractal *fractal);
#endif
