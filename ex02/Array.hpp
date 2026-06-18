/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 13:59:24 by busseven          #+#    #+#             */
/*   Updated: 2026/06/15 13:19:59 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		~Array();

		Array		&operator=(Array const &copy);
		T			&operator[](unsigned int i);
		T const		&operator[](unsigned int i) const;
		unsigned int size() const;
		
	private:
		unsigned int	_size;
		T				*_arr;

	class IndexOutOfBoundsException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return("Index is out of bounds");
			}
	};
};