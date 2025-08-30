#include <KActionMenu>
#include <KColorSchemeManager>
#include <KColorSchemeMenu>
#include <QObject>
#include <kcolorschememenu.h>
#include "libkcolorschememenu.h"
#include "libkcolorschememenu.hxx"

KActionMenu* KColorSchemeMenu_CreateMenu(KColorSchemeManager* param1, QObject* param2) {
    return KColorSchemeMenu::createMenu(param1, param2);
}
