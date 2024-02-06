/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:24:29 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/06 11:05:09 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DEF_WINDOW
#define	DEF_WINDOW

#include <string>

/*
**	un attribut est une variable inscrite dans une classe
**	une methode est une fonction inscrite dans une classe
*/

/*
**	si un paramettre n'a pas vocation a etre change il doit etre declare en const
**
**
**
*/

class Window
{
	public:
		Window();
		~Window();
		Window(std::string t, int w, int h);
		void	run() const;

	private:
		std::string title;
		int			width;
		int			height;
};


#endif
