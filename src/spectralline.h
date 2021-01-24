/*****************************************************************************
 **                                                                         **
 **  This file is part of GlassPlotter.                                     **
 **                                                                         **
 **  GlassPlotter is free software: you can redistribute it and/or modify   **
 **  it under the terms of the GNU General Public License as published by   **
 **  the Free Software Foundation, either version 3 of the License, or      **
 **  (at your option) any later version.                                    **
 **                                                                         **
 **  GlassPlotter is distributed in the hope that it will be useful,        **
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of         **
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          **
 **  GNU General Public License for more details.                           **
 **                                                                         **
 **  You should have received a copy of the GNU General Public License      **
 **  along with GlassPlotter.  If not, see <http://www.gnu.org/licenses/>.  **
 **                                                                         **
 *****************************************************************************
 **  Author  : Hiiragi                                                      **
 **  Contact : heterophyllus.work@gmail.com                                 **
 **  Website : https://github.com/heterophyllus/glassplotter                **
 **  Date    : 2020-1-25                                                    **
 *****************************************************************************/


/**
  * Container class for Fraunhofer spectral lines
  */

#ifndef SPECTRALLINE_H
#define SPECTRALLINE_H

#include<QString>
#include<QStringList>

class SpectralLine
{
public:
    SpectralLine();

    /**
     * @brief get wavelength of the line
     * @param spectralname
     * @return
     */
    static double wavelength(QString spectralname);

    /**
     * @brief get line name list
     * @return
     */
    static QStringList spectralLineList();


    static const double t;
    static const double s;
    static const double r;
    static const double C;
    static const double C_;
    static const double D;
    static const double d;
    static const double e;
    static const double F;
    static const double F_;
    static const double g;
    static const double h;
    static const double i;
};

#endif // SPECTRALLINE_H
