/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:11:00 by busseven          #+#    #+#             */
/*   Updated: 2026/06/12 18:05:17 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void is_even(int const &n)
{
	if(n % 2 == 0)
		std::cout << 1 << std::endl;
	else
		std::cout << 0 << std::endl;
}

void capitalize(std::string &str)
{
	for(unsigned long i = 0; i < str.size(); i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
}

int main( void )
{
	std::string arr[] = {"busra", "42"};
	iter<std::string>(arr, 2, capitalize);
	for(int i = 0; i < 2; i++)
		std::cout << arr[i] << std::endl;

	const int arr1[] = {20, -3, 42, 0, 833};
	iter<const int>(arr1, 5, is_even);

	const float arr2[] = {1.2f, 5.3f, 2.0f};
	iter<const float>(arr2, 3, print<float>);
}