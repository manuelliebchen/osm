/**
 *  OSM
 *  Copyright (C) 2022  Pavel Smokotnin

 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef WORKINGFOLDER_H
#define WORKINGFOLDER_H

#include <QString>

class workingfolder
{
public:
    static QString logFilePath();
    static QString autosaveFilePath();
    static QString settingsFilePath();

private:
    workingfolder() = default;

    static QString commonPath();
};

#endif // WORKINGFOLDER_H
