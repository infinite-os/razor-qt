/* coded by Ketmar // Vampire Avalon (psyc://ketmar.no-ip.org/~Ketmar)
 * (c)DWTFYW
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details.
 */
#ifndef XCRTHEMEXP_H
#define XCRTHEMEXP_H

#include <QtCore>
#include <QCursor>
#include <QPixmap>

#include "xcrimg.h"
#include "xcrtheme.h"
#include "xcrthemefx.h"


class XCursorThemeXP : public XCursorTheme {
public:
  XCursorThemeXP (const QString &aFileName);

protected:
  bool parseCursorXPTheme (const QDir &thDir);
};


#endif
