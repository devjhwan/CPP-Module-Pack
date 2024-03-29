/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:49:02 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/28 17:07:58 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Floor.hpp"
# include <ICharacter.hpp>
# include <string>

class Character: public ICharacter
{
	private:
		int		_materialCount;
		Floor	*_floor;
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &obj);
		~Character();
		Character			&operator=(const Character &obj);
		std::string const	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		int					getMaterialCount();
		int					findEmptySlotIdx();
};
#endif