/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 13:59:24 by busseven          #+#    #+#             */
/*   Updated: 2026/06/12 18:04:56 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
void print(T p)
{
	std::cout << p << std::endl;
}

template< typename T, typename F>
void iter(T *arr, std::size_t len, F func)
{
	std::size_t i;

	i = 0;
	while(i < len)
	{
		func(arr[i]);
		i++;
	}
	return ;
}