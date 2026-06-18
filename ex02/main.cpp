/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busseven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:11:00 by busseven          #+#    #+#             */
/*   Updated: 2026/06/15 14:29:24 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main( void )
{
	try
	{
		Array<int> arr;
		std::cout << arr;
		std::cout << arr[0];
	}
	catch(std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		std::string str = "word";
		Array<char> arr1(str.size());
		for(unsigned int i = 0; i < arr1.size(); i++)
			arr1[i] = str[i];
		std::cout << arr1;
	}
	catch(std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		float farr[3] = {6.7f, 5.2f, 42.0f};
		Array<float> arr3(3);
		for(unsigned int i = 0; i < arr3.size(); i++)
			arr3[i] = farr[i];
		float farr1[5] = {2.3f, 5.2f, 42.0f, 1.5f, 0.0f};
		Array<float> arr2(5);
		for(unsigned int i = 0; i < arr2.size(); i++)
			arr2[i] = farr1[i];
		std::cout << arr3;
		std::cout << arr2;
		arr2 = arr3;
		arr3[1] = 0.0;
		std::cout << arr3;
		std::cout << arr2;
		std::cout << arr2[9];
	}
	catch(std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}