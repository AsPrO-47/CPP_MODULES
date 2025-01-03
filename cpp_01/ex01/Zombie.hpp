/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:25:40 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/11/26 15:49:09 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie{
private:
    std::string name;
public:
    Zombie();
    void    announce();
    void    set_name(std::string _name);
};

Zombie* zombieHorde( int N, std::string name);

#endif