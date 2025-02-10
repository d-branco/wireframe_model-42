/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:37:00 by abessa-m          #+#    #+#             */
/*   Updated: 2025/02/10 13:45:17 by abessa-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

	//int offset = (y * line_length + x * (bits_per_pixel / 8));

//usage
//	valgrind -s --quiet ./fdf test_maps/42.fdf

int	main(int argc, char **argv)
{
	int	**map;

	if (input_validation(argc, argv) != 1)
		return (1);
	if (cos(0))
		ft_printf("It's working!\n");
	if (read_map(argv[1], map) == -1)
		return (ft_printf("Error openning the map file!\n"), 2);
}
