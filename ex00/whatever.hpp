/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 13:59:24 by busseven          #+#    #+#             */
/*   Updated: 2026/06/12 14:13:23 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
void swap(T &x, T &y)
{
	T temp;

	temp = x;
	x = y;
	y = temp;
	return ;
}

template< typename T >
T const & max(T &x, T &y)
{
	return (x > y ? x : y);
}

template< typename T >
T const & min(T &x, T &y)
{
	return (x < y ? x : y);
}