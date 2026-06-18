/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 12:23:09 by busseven          #+#    #+#             */
/*   Updated: 2026/06/15 14:25:05 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _size(0)
{
	this->_arr = new T[this->_size];
}

template<typename T>
Array<T>::Array(Array const &copy)
{
	*this = copy;
}
template<typename T>
Array<T>::~Array()
{
	delete[] this->_arr;
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &copy)
{
	if (this->_arr)
		delete[] this->_arr;
	this->_size = copy.size();
	this->_arr = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		(*this)[i] = copy[i];
	return (*this);
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_arr = new T[this->_size];
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw IndexOutOfBoundsException();
	else
		return (this->_arr[i]);
}

template<typename T>
T const &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
		throw IndexOutOfBoundsException();
	else
		return (this->_arr[i]);
}

template<typename T>
std::ostream & operator<<(std::ostream &stream, const Array<T> &arr)
{
	for(unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	return (stream);
}