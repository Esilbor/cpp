/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point_Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <bbresil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:10:13 by bbresil           #+#    #+#             */
/*   Updated: 2024/02/01 16:57:24 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_POINT_CLASS
#define DEF_POINT_CLASS

/*
	struct 	: donnees publiques (par defaut)
	class	: donnees privees (par defaut)

	Niveaux d'acces : public, private, protected

*/
class	Point
{
	public:
		Point(); // constructeur
		~Point(); // destructeur
		// Point(const Point& p); // constructeur par copie
		// Point(const Point&& p); // constructeur dde deplacement
		int i = 1;

};

/*
**	constructeur de deplacement evite la copie des donnees
**	lorsque l'ont va trnsmettre
**	la propriete des donnees a une autre variable
*/

#endif
