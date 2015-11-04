// This file is part of the SpeedCrunch project
// Copyright (C) 2004, 2005, 2007 Ariya Hidayat <ariya@kde.org>
// Copyright (C) 2007-2009, 2013, 2014 Helder Correia <helder.pereira.correia@gmail.com>
// Copyright (C) 2015 Pol Welter <polwelter@gmail.com>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; see the file COPYING.  If not, write to
// the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
// Boston, MA 02110-1301, USA.


#ifndef CORE_SESSIONHISTORY_H
#define CORE_SESSIONHISTORY_H

#include <QJsonArray>
#include <QString>
#include <QList>

#include "cmath.h"


class HistoryEntry
{
private:
    QString m_expr;
    CNumber m_result;
public:
    HistoryEntry() : m_expr(""), m_result(0) {}
    HistoryEntry(const QJsonObject & json);
    HistoryEntry(const QString & expr, const CNumber & num) : m_expr(expr), m_result(num) {}
    HistoryEntry(const HistoryEntry & other) :  m_expr(other.m_expr), m_result(other.m_result) {}

    void setExpr(const QString & e);
    void setResult(const CNumber & n);

    QString expr() const;
    CNumber result() const;

    void serialize(QJsonObject & json) const;
    void deSerialize(const QJsonObject & json);
};

#endif // CORE_SESSIONHISTORY_H
