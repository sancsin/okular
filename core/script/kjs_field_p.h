/***************************************************************************
 *   Copyright (C) 2008 by Pino Toscano <pino@kde.org>                     *
 *   Copyright (C) 2008 by Harri Porten <porten@kde.org>                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/

#ifndef OKULAR_SCRIPT_KJS_FIELD_P_H
#define OKULAR_SCRIPT_KJS_FIELD_P_H

class KJSContext;
class KJSObject;

namespace Okular
{
class FormField;
class Page;

class JSField
{
public:
    static void initType(KJSContext *ctx);
    static KJSObject wrapField(KJSContext *ctx, FormField *field, Page *page);
    static void clearCachedFields();
};

}

#endif
