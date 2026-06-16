#include <KActionMenu>
#include <KColorSchemeManager>
#include <KColorSchemeMenu>
#include <QObject>
#include <kcolorschememenu.h>
#include "libkcolorschememenu.h"
#include "libkcolorschememenu.hxx"

KActionMenu* KColorSchemeMenu_CreateMenu(KColorSchemeManager* manager, QObject* parent) {
    return KColorSchemeMenu::createMenu(manager, parent);
}
