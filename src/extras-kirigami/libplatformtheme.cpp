#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__PlatformTheme
#define WORKAROUND_INNER_CLASS_DEFINITION_Kirigami__Platform__PlatformThemeChangeTracker
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QIcon>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPalette>
#include <QString>
#include <QTimerEvent>
#include <platformtheme.h>
#include "libplatformtheme.h"
#include "libplatformtheme.hxx"

Kirigami__Platform__PlatformTheme* Kirigami__Platform__PlatformTheme_new() {
    return new VirtualKirigamiPlatformPlatformTheme();
}

Kirigami__Platform__PlatformTheme* Kirigami__Platform__PlatformTheme_new2(QObject* parent) {
    return new VirtualKirigamiPlatformPlatformTheme(parent);
}

QMetaObject* Kirigami__Platform__PlatformTheme_MetaObject(const Kirigami__Platform__PlatformTheme* self) {
    return (QMetaObject*)self->metaObject();
}

void* Kirigami__Platform__PlatformTheme_Metacast(Kirigami__Platform__PlatformTheme* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Kirigami__Platform__PlatformTheme_Metacall(Kirigami__Platform__PlatformTheme* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Kirigami__Platform__PlatformTheme_Tr(const char* s) {
    auto _ret = Kirigami::Platform::PlatformTheme::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Kirigami__Platform__PlatformTheme_SetColorSet(Kirigami__Platform__PlatformTheme* self, int colorSet) {
    self->setColorSet(static_cast<Kirigami::Platform::PlatformTheme::ColorSet>(colorSet));
}

int Kirigami__Platform__PlatformTheme_ColorSet(const Kirigami__Platform__PlatformTheme* self) {
    return static_cast<int>(self->colorSet());
}

void Kirigami__Platform__PlatformTheme_SetColorGroup(Kirigami__Platform__PlatformTheme* self, int colorGroup) {
    self->setColorGroup(static_cast<Kirigami::Platform::PlatformTheme::ColorGroup>(colorGroup));
}

int Kirigami__Platform__PlatformTheme_ColorGroup(const Kirigami__Platform__PlatformTheme* self) {
    return static_cast<int>(self->colorGroup());
}

bool Kirigami__Platform__PlatformTheme_Inherit(const Kirigami__Platform__PlatformTheme* self) {
    return self->inherit();
}

void Kirigami__Platform__PlatformTheme_SetInherit(Kirigami__Platform__PlatformTheme* self, bool inherit) {
    self->setInherit(inherit);
}

QColor* Kirigami__Platform__PlatformTheme_TextColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->textColor());
}

QColor* Kirigami__Platform__PlatformTheme_DisabledTextColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->disabledTextColor());
}

QColor* Kirigami__Platform__PlatformTheme_HighlightedTextColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->highlightedTextColor());
}

QColor* Kirigami__Platform__PlatformTheme_ActiveTextColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->activeTextColor());
}

QColor* Kirigami__Platform__PlatformTheme_LinkColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->linkColor());
}

QColor* Kirigami__Platform__PlatformTheme_VisitedLinkColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->visitedLinkColor());
}

QColor* Kirigami__Platform__PlatformTheme_NegativeTextColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->negativeTextColor());
}

QColor* Kirigami__Platform__PlatformTheme_NeutralTextColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->neutralTextColor());
}

QColor* Kirigami__Platform__PlatformTheme_PositiveTextColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->positiveTextColor());
}

QColor* Kirigami__Platform__PlatformTheme_BackgroundColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->backgroundColor());
}

QColor* Kirigami__Platform__PlatformTheme_AlternateBackgroundColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->alternateBackgroundColor());
}

QColor* Kirigami__Platform__PlatformTheme_HighlightColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->highlightColor());
}

QColor* Kirigami__Platform__PlatformTheme_ActiveBackgroundColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->activeBackgroundColor());
}

QColor* Kirigami__Platform__PlatformTheme_LinkBackgroundColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->linkBackgroundColor());
}

QColor* Kirigami__Platform__PlatformTheme_VisitedLinkBackgroundColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->visitedLinkBackgroundColor());
}

QColor* Kirigami__Platform__PlatformTheme_NegativeBackgroundColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->negativeBackgroundColor());
}

QColor* Kirigami__Platform__PlatformTheme_NeutralBackgroundColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->neutralBackgroundColor());
}

QColor* Kirigami__Platform__PlatformTheme_PositiveBackgroundColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->positiveBackgroundColor());
}

QColor* Kirigami__Platform__PlatformTheme_FocusColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->focusColor());
}

QColor* Kirigami__Platform__PlatformTheme_HoverColor(const Kirigami__Platform__PlatformTheme* self) {
    return new QColor(self->hoverColor());
}

QFont* Kirigami__Platform__PlatformTheme_DefaultFont(const Kirigami__Platform__PlatformTheme* self) {
    return new QFont(self->defaultFont());
}

QFont* Kirigami__Platform__PlatformTheme_SmallFont(const Kirigami__Platform__PlatformTheme* self) {
    return new QFont(self->smallFont());
}

QPalette* Kirigami__Platform__PlatformTheme_Palette(const Kirigami__Platform__PlatformTheme* self) {
    return new QPalette(self->palette());
}

double Kirigami__Platform__PlatformTheme_FrameContrast(const Kirigami__Platform__PlatformTheme* self) {
    return static_cast<double>(self->frameContrast());
}

double Kirigami__Platform__PlatformTheme_LightFrameContrast(const Kirigami__Platform__PlatformTheme* self) {
    return static_cast<double>(self->lightFrameContrast());
}

QIcon* Kirigami__Platform__PlatformTheme_IconFromTheme(Kirigami__Platform__PlatformTheme* self, const libqt_string name, const QColor* customColor) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QIcon(self->iconFromTheme(name_QString, *customColor));
}

bool Kirigami__Platform__PlatformTheme_SupportsIconColoring(const Kirigami__Platform__PlatformTheme* self) {
    return self->supportsIconColoring();
}

void Kirigami__Platform__PlatformTheme_SetCustomTextColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomTextColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomDisabledTextColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomDisabledTextColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomHighlightedTextColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomHighlightedTextColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomActiveTextColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomActiveTextColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomLinkColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomLinkColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomVisitedLinkColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomNegativeTextColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomNegativeTextColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomNeutralTextColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomNeutralTextColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomPositiveTextColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomPositiveTextColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomBackgroundColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomBackgroundColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomAlternateBackgroundColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomAlternateBackgroundColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomHighlightColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomHighlightColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomActiveBackgroundColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomActiveBackgroundColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomLinkBackgroundColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomLinkBackgroundColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkBackgroundColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomVisitedLinkBackgroundColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomNegativeBackgroundColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomNegativeBackgroundColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomNeutralBackgroundColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomNeutralBackgroundColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomPositiveBackgroundColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomPositiveBackgroundColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomFocusColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomFocusColor();
}

void Kirigami__Platform__PlatformTheme_SetCustomHoverColor(Kirigami__Platform__PlatformTheme* self) {
    self->setCustomHoverColor();
}

bool Kirigami__Platform__PlatformTheme_UseAlternateBackgroundColor(const Kirigami__Platform__PlatformTheme* self) {
    return self->useAlternateBackgroundColor();
}

void Kirigami__Platform__PlatformTheme_SetUseAlternateBackgroundColor(Kirigami__Platform__PlatformTheme* self, bool alternate) {
    self->setUseAlternateBackgroundColor(alternate);
}

Kirigami__Platform__PlatformTheme* Kirigami__Platform__PlatformTheme_QmlAttachedProperties(QObject* object) {
    return Kirigami::Platform::PlatformTheme::qmlAttachedProperties(object);
}

void Kirigami__Platform__PlatformTheme_ColorsChanged(Kirigami__Platform__PlatformTheme* self) {
    self->colorsChanged();
}

void Kirigami__Platform__PlatformTheme_Connect_ColorsChanged(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__PlatformTheme*) = reinterpret_cast<void (*)(Kirigami__Platform__PlatformTheme*)>(slot);
    Kirigami::Platform::PlatformTheme::connect(self,
                                               static_cast<void (Kirigami::Platform::PlatformTheme::*)()>(&Kirigami::Platform::PlatformTheme::colorsChanged),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

void Kirigami__Platform__PlatformTheme_DefaultFontChanged(Kirigami__Platform__PlatformTheme* self, const QFont* font) {
    self->defaultFontChanged(*font);
}

void Kirigami__Platform__PlatformTheme_Connect_DefaultFontChanged(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__PlatformTheme*, QFont*) = reinterpret_cast<void (*)(Kirigami__Platform__PlatformTheme*, QFont*)>(slot);
    Kirigami::Platform::PlatformTheme::connect(self,
                                               static_cast<void (Kirigami::Platform::PlatformTheme::*)(const QFont&)>(&Kirigami::Platform::PlatformTheme::defaultFontChanged),
                                               [self, slotFunc](const QFont& font) {
                                                   const QFont& font_ret = font;
                                                   // Cast returned reference into pointer
                                                   QFont* sigval1 = const_cast<QFont*>(&font_ret);
                                                   slotFunc(self, sigval1);
                                               });
}

void Kirigami__Platform__PlatformTheme_SmallFontChanged(Kirigami__Platform__PlatformTheme* self, const QFont* font) {
    self->smallFontChanged(*font);
}

void Kirigami__Platform__PlatformTheme_Connect_SmallFontChanged(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__PlatformTheme*, QFont*) = reinterpret_cast<void (*)(Kirigami__Platform__PlatformTheme*, QFont*)>(slot);
    Kirigami::Platform::PlatformTheme::connect(self,
                                               static_cast<void (Kirigami::Platform::PlatformTheme::*)(const QFont&)>(&Kirigami::Platform::PlatformTheme::smallFontChanged),
                                               [self, slotFunc](const QFont& font) {
                                                   const QFont& font_ret = font;
                                                   // Cast returned reference into pointer
                                                   QFont* sigval1 = const_cast<QFont*>(&font_ret);
                                                   slotFunc(self, sigval1);
                                               });
}

void Kirigami__Platform__PlatformTheme_ColorSetChanged(Kirigami__Platform__PlatformTheme* self, int colorSet) {
    self->colorSetChanged(static_cast<Kirigami::Platform::PlatformTheme::ColorSet>(colorSet));
}

void Kirigami__Platform__PlatformTheme_Connect_ColorSetChanged(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__PlatformTheme*, int) = reinterpret_cast<void (*)(Kirigami__Platform__PlatformTheme*, int)>(slot);
    Kirigami::Platform::PlatformTheme::connect(self,
                                               static_cast<void (Kirigami::Platform::PlatformTheme::*)(Kirigami::Platform::PlatformTheme::ColorSet)>(&Kirigami::Platform::PlatformTheme::colorSetChanged),
                                               [self, slotFunc](Kirigami::Platform::PlatformTheme::ColorSet colorSet) {
                                                   int sigval1 = static_cast<int>(colorSet);
                                                   slotFunc(self, sigval1);
                                               });
}

void Kirigami__Platform__PlatformTheme_ColorGroupChanged(Kirigami__Platform__PlatformTheme* self, int colorGroup) {
    self->colorGroupChanged(static_cast<Kirigami::Platform::PlatformTheme::ColorGroup>(colorGroup));
}

void Kirigami__Platform__PlatformTheme_Connect_ColorGroupChanged(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__PlatformTheme*, int) = reinterpret_cast<void (*)(Kirigami__Platform__PlatformTheme*, int)>(slot);
    Kirigami::Platform::PlatformTheme::connect(self,
                                               static_cast<void (Kirigami::Platform::PlatformTheme::*)(Kirigami::Platform::PlatformTheme::ColorGroup)>(&Kirigami::Platform::PlatformTheme::colorGroupChanged),
                                               [self, slotFunc](Kirigami::Platform::PlatformTheme::ColorGroup colorGroup) {
                                                   int sigval1 = static_cast<int>(colorGroup);
                                                   slotFunc(self, sigval1);
                                               });
}

void Kirigami__Platform__PlatformTheme_PaletteChanged(Kirigami__Platform__PlatformTheme* self, const QPalette* pal) {
    self->paletteChanged(*pal);
}

void Kirigami__Platform__PlatformTheme_Connect_PaletteChanged(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__PlatformTheme*, QPalette*) = reinterpret_cast<void (*)(Kirigami__Platform__PlatformTheme*, QPalette*)>(slot);
    Kirigami::Platform::PlatformTheme::connect(self,
                                               static_cast<void (Kirigami::Platform::PlatformTheme::*)(const QPalette&)>(&Kirigami::Platform::PlatformTheme::paletteChanged),
                                               [self, slotFunc](const QPalette& pal) {
                                                   const QPalette& pal_ret = pal;
                                                   // Cast returned reference into pointer
                                                   QPalette* sigval1 = const_cast<QPalette*>(&pal_ret);
                                                   slotFunc(self, sigval1);
                                               });
}

void Kirigami__Platform__PlatformTheme_InheritChanged(Kirigami__Platform__PlatformTheme* self, bool inherit) {
    self->inheritChanged(inherit);
}

void Kirigami__Platform__PlatformTheme_Connect_InheritChanged(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__PlatformTheme*, bool) = reinterpret_cast<void (*)(Kirigami__Platform__PlatformTheme*, bool)>(slot);
    Kirigami::Platform::PlatformTheme::connect(self,
                                               static_cast<void (Kirigami::Platform::PlatformTheme::*)(bool)>(&Kirigami::Platform::PlatformTheme::inheritChanged),
                                               [self, slotFunc](bool inherit) {
                                                   bool sigval1 = inherit;
                                                   slotFunc(self, sigval1);
                                               });
}

void Kirigami__Platform__PlatformTheme_UseAlternateBackgroundColorChanged(Kirigami__Platform__PlatformTheme* self, bool alternate) {
    self->useAlternateBackgroundColorChanged(alternate);
}

void Kirigami__Platform__PlatformTheme_Connect_UseAlternateBackgroundColorChanged(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    void (*slotFunc)(Kirigami__Platform__PlatformTheme*, bool) = reinterpret_cast<void (*)(Kirigami__Platform__PlatformTheme*, bool)>(slot);
    Kirigami::Platform::PlatformTheme::connect(self,
                                               static_cast<void (Kirigami::Platform::PlatformTheme::*)(bool)>(&Kirigami::Platform::PlatformTheme::useAlternateBackgroundColorChanged),
                                               [self, slotFunc](bool alternate) {
                                                   bool sigval1 = alternate;
                                                   slotFunc(self, sigval1);
                                               });
}

bool Kirigami__Platform__PlatformTheme_Event(Kirigami__Platform__PlatformTheme* self, QEvent* event) {
    auto* vkirigami__platform__platformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self);
    if (vkirigami__platform__platformtheme) {
        return vkirigami__platform__platformtheme->event(event);
    }
    qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::event called without a directly constructed type");
}

libqt_string Kirigami__Platform__PlatformTheme_Tr2(const char* s, const char* c) {
    auto _ret = Kirigami::Platform::PlatformTheme::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Kirigami__Platform__PlatformTheme_Tr3(const char* s, const char* c, int n) {
    auto _ret = Kirigami::Platform::PlatformTheme::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Kirigami__Platform__PlatformTheme_SetCustomTextColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomTextColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomDisabledTextColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomDisabledTextColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomHighlightedTextColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomHighlightedTextColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomActiveTextColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomActiveTextColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomLinkColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomLinkColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomVisitedLinkColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomNegativeTextColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomNegativeTextColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomNeutralTextColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomNeutralTextColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomPositiveTextColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomPositiveTextColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomBackgroundColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomBackgroundColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomAlternateBackgroundColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomAlternateBackgroundColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomHighlightColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomHighlightColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomActiveBackgroundColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomActiveBackgroundColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomLinkBackgroundColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomLinkBackgroundColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomVisitedLinkBackgroundColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomVisitedLinkBackgroundColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomNegativeBackgroundColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomNegativeBackgroundColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomNeutralBackgroundColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomNeutralBackgroundColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomPositiveBackgroundColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomPositiveBackgroundColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomFocusColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomFocusColor(*color);
}

void Kirigami__Platform__PlatformTheme_SetCustomHoverColor1(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    self->setCustomHoverColor(*color);
}

// Base class handler implementation
QMetaObject* Kirigami__Platform__PlatformTheme_SuperMetaObject(const Kirigami__Platform__PlatformTheme* self) {
    return (QMetaObject*)self->Kirigami::Platform::PlatformTheme::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnMetaObject(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = const_cast<VirtualKirigamiPlatformPlatformTheme*>(dynamic_cast<const VirtualKirigamiPlatformPlatformTheme*>(self)))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_metaobject_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Kirigami__Platform__PlatformTheme_SuperMetacast(Kirigami__Platform__PlatformTheme* self, const char* param1) {
    return self->Kirigami::Platform::PlatformTheme::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnMetacast(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_metacast_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_Metacast_Callback>(slot);
}

// Base class handler implementation
int Kirigami__Platform__PlatformTheme_SuperMetacall(Kirigami__Platform__PlatformTheme* self, int param1, int param2, void** param3) {
    return self->Kirigami::Platform::PlatformTheme::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnMetacall(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_metacall_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_Metacall_Callback>(slot);
}

// Base class handler implementation
QIcon* Kirigami__Platform__PlatformTheme_SuperIconFromTheme(Kirigami__Platform__PlatformTheme* self, const libqt_string name, const QColor* customColor) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QIcon(self->Kirigami::Platform::PlatformTheme::iconFromTheme(name_QString, *customColor));
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnIconFromTheme(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_iconfromtheme_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_IconFromTheme_Callback>(slot);
}

// Base class handler implementation
bool Kirigami__Platform__PlatformTheme_SuperEvent(Kirigami__Platform__PlatformTheme* self, QEvent* event) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        return vkirigamiplatformplatformtheme->Kirigami::Platform::PlatformTheme::event(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnEvent(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_event_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_Event_Callback>(slot);
}

// Derived class handler implementation
bool Kirigami__Platform__PlatformTheme_EventFilter(Kirigami__Platform__PlatformTheme* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Kirigami__Platform__PlatformTheme_SuperEventFilter(Kirigami__Platform__PlatformTheme* self, QObject* watched, QEvent* event) {
    return self->Kirigami::Platform::PlatformTheme::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnEventFilter(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_eventfilter_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformTheme_TimerEvent(Kirigami__Platform__PlatformTheme* self, QTimerEvent* event) {
    auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self);
    if (vkirigamiplatformplatformtheme) {
        vkirigamiplatformplatformtheme->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformTheme_SuperTimerEvent(Kirigami__Platform__PlatformTheme* self, QTimerEvent* event) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->Kirigami::Platform::PlatformTheme::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnTimerEvent(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_timerevent_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformTheme_ChildEvent(Kirigami__Platform__PlatformTheme* self, QChildEvent* event) {
    auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self);
    if (vkirigamiplatformplatformtheme) {
        vkirigamiplatformplatformtheme->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformTheme_SuperChildEvent(Kirigami__Platform__PlatformTheme* self, QChildEvent* event) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->Kirigami::Platform::PlatformTheme::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnChildEvent(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_childevent_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformTheme_CustomEvent(Kirigami__Platform__PlatformTheme* self, QEvent* event) {
    auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self);
    if (vkirigamiplatformplatformtheme) {
        vkirigamiplatformplatformtheme->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformTheme_SuperCustomEvent(Kirigami__Platform__PlatformTheme* self, QEvent* event) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->Kirigami::Platform::PlatformTheme::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnCustomEvent(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_customevent_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformTheme_ConnectNotify(Kirigami__Platform__PlatformTheme* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self);
    if (vkirigamiplatformplatformtheme) {
        vkirigamiplatformplatformtheme->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformTheme_SuperConnectNotify(Kirigami__Platform__PlatformTheme* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->Kirigami::Platform::PlatformTheme::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnConnectNotify(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_connectnotify_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Kirigami__Platform__PlatformTheme_DisconnectNotify(Kirigami__Platform__PlatformTheme* self, const QMetaMethod* signal) {
    auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self);
    if (vkirigamiplatformplatformtheme) {
        vkirigamiplatformplatformtheme->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Kirigami__Platform__PlatformTheme_SuperDisconnectNotify(Kirigami__Platform__PlatformTheme* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->Kirigami::Platform::PlatformTheme::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Kirigami::Platform::PlatformTheme::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Kirigami__Platform__PlatformTheme_OnDisconnectNotify(Kirigami__Platform__PlatformTheme* self, intptr_t slot) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self))
        vkirigamiplatformplatformtheme->kirigami__platform__platformtheme_disconnectnotify_callback = reinterpret_cast<VirtualKirigamiPlatformPlatformTheme::Kirigami__Platform__PlatformTheme_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetSupportsIconColoring(Kirigami__Platform__PlatformTheme* self, bool support) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setSupportsIconColoring(support);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setSupportsIconColoring called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetTextColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setTextColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setTextColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetDisabledTextColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setDisabledTextColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setDisabledTextColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetHighlightedTextColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setHighlightedTextColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setHighlightedTextColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetActiveTextColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setActiveTextColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setActiveTextColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetLinkColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setLinkColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setLinkColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetVisitedLinkColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setVisitedLinkColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setVisitedLinkColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetNegativeTextColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setNegativeTextColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setNegativeTextColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetNeutralTextColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setNeutralTextColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setNeutralTextColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetPositiveTextColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setPositiveTextColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setPositiveTextColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetBackgroundColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setBackgroundColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setBackgroundColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetAlternateBackgroundColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setAlternateBackgroundColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setAlternateBackgroundColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetHighlightColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setHighlightColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setHighlightColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetActiveBackgroundColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setActiveBackgroundColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setActiveBackgroundColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetLinkBackgroundColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setLinkBackgroundColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setLinkBackgroundColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetVisitedLinkBackgroundColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setVisitedLinkBackgroundColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setVisitedLinkBackgroundColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetNegativeBackgroundColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setNegativeBackgroundColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setNegativeBackgroundColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetNeutralBackgroundColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setNeutralBackgroundColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setNeutralBackgroundColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetPositiveBackgroundColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setPositiveBackgroundColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setPositiveBackgroundColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetFocusColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setFocusColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setFocusColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetHoverColor(Kirigami__Platform__PlatformTheme* self, const QColor* color) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setHoverColor(*color);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setHoverColor called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetDefaultFont(Kirigami__Platform__PlatformTheme* self, const QFont* defaultFont) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setDefaultFont(*defaultFont);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setDefaultFont called without a directly constructed type");
}

// Derived class protected handler implementation
void Kirigami__Platform__PlatformTheme_SetSmallFont(Kirigami__Platform__PlatformTheme* self, const QFont* smallFont) {
    if (auto* vkirigamiplatformplatformtheme = dynamic_cast<VirtualKirigamiPlatformPlatformTheme*>(self)) {
        vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::setSmallFont(*smallFont);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::setSmallFont called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Kirigami__Platform__PlatformTheme_Sender(const Kirigami__Platform__PlatformTheme* self) {
    if (auto* vkirigamiplatformplatformtheme = const_cast<VirtualKirigamiPlatformPlatformTheme*>(dynamic_cast<const VirtualKirigamiPlatformPlatformTheme*>(self))) {
        return vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::sender();
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Kirigami__Platform__PlatformTheme_SenderSignalIndex(const Kirigami__Platform__PlatformTheme* self) {
    if (auto* vkirigamiplatformplatformtheme = const_cast<VirtualKirigamiPlatformPlatformTheme*>(dynamic_cast<const VirtualKirigamiPlatformPlatformTheme*>(self))) {
        return vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::senderSignalIndex();
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Kirigami__Platform__PlatformTheme_Receivers(const Kirigami__Platform__PlatformTheme* self, const char* signal) {
    if (auto* vkirigamiplatformplatformtheme = const_cast<VirtualKirigamiPlatformPlatformTheme*>(dynamic_cast<const VirtualKirigamiPlatformPlatformTheme*>(self))) {
        return vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::receivers(signal);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Kirigami__Platform__PlatformTheme_IsSignalConnected(const Kirigami__Platform__PlatformTheme* self, const QMetaMethod* signal) {
    if (auto* vkirigamiplatformplatformtheme = const_cast<VirtualKirigamiPlatformPlatformTheme*>(dynamic_cast<const VirtualKirigamiPlatformPlatformTheme*>(self))) {
        return vkirigamiplatformplatformtheme->VirtualKirigamiPlatformPlatformTheme::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Kirigami::Platform::PlatformTheme::isSignalConnected called without a directly constructed type");
}

void Kirigami__Platform__PlatformTheme_Delete(Kirigami__Platform__PlatformTheme* self) {
    delete self;
}

Kirigami__Platform__PlatformThemeChangeTracker* Kirigami__Platform__PlatformThemeChangeTracker_new(Kirigami__Platform__PlatformTheme* theme) {
    return new Kirigami::Platform::PlatformThemeChangeTracker(theme);
}

Kirigami__Platform__PlatformThemeChangeTracker* Kirigami__Platform__PlatformThemeChangeTracker_new2(const Kirigami__Platform__PlatformThemeChangeTracker* param1) {
    return new Kirigami::Platform::PlatformThemeChangeTracker(*param1);
}

Kirigami__Platform__PlatformThemeChangeTracker* Kirigami__Platform__PlatformThemeChangeTracker_new3(Kirigami__Platform__PlatformTheme* theme, uint8_t changes) {
    return new Kirigami::Platform::PlatformThemeChangeTracker(theme, static_cast<Kirigami::Platform::PlatformThemeChangeTracker::PropertyChanges>(changes));
}

void Kirigami__Platform__PlatformThemeChangeTracker_MarkDirty(Kirigami__Platform__PlatformThemeChangeTracker* self, uint8_t changes) {
    self->markDirty(static_cast<Kirigami::Platform::PlatformThemeChangeTracker::PropertyChanges>(changes));
}

void Kirigami__Platform__PlatformThemeChangeTracker_OperatorAssign(Kirigami__Platform__PlatformThemeChangeTracker* self, const Kirigami__Platform__PlatformThemeChangeTracker* param1) {
    self->operator=(*param1);
}

void Kirigami__Platform__PlatformThemeChangeTracker_Delete(Kirigami__Platform__PlatformThemeChangeTracker* self) {
    delete self;
}
