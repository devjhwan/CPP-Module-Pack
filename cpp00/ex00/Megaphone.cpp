/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:15:43 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/27 14:25:26 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; argv[i] != NULL; i++)
			for (int j = 0; argv[i][j] != '\0'; j++)
				std::cout << (char)std::toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
