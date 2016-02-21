/*
 * This file is a part of HelloWorld plugin for Xpiks. Xpiks is
 * cross platform application for keywording and uploading images
 * for microstocks
 * Copyright (C) 2016 Taras Kushnir <kushnirTV@gmail.com>
 *
 * Xpiks is distributed under the GNU General Public License, version 3.0
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HELLOWORKERCOMMAND_H
#define HELLOWORKERCOMMAND_H

#include <Warnings/iwarningscheckable.h>

class HelloWorkerCommand {
public:
    HelloWorkerCommand(Warnings::IWarningsCheckable *warningsCheckable, int flags = 0) :
        m_WarningsCheckable(warningsCheckable),
        m_CommandFlags(flags)
    {
    }

public:
    Warnings::IWarningsCheckable *getInnerItem() const { return m_WarningsCheckable; }
    int getFlags() const { return m_CommandFlags; }

private:
    Warnings::IWarningsCheckable *m_WarningsCheckable;
    int m_CommandFlags;
};

#endif // HELLOWORKERCOMMAND_H
