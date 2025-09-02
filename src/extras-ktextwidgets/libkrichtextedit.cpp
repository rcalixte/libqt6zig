#include <KRichTextEdit>
#include <KTextEdit>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextCursor>
#include <QTextEdit>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <krichtextedit.h>
#include "libkrichtextedit.h"
#include "libkrichtextedit.hxx"

KRichTextEdit* KRichTextEdit_new(QWidget* parent) {
    return new VirtualKRichTextEdit(parent);
}

KRichTextEdit* KRichTextEdit_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKRichTextEdit(text_QString);
}

KRichTextEdit* KRichTextEdit_new3() {
    return new VirtualKRichTextEdit();
}

KRichTextEdit* KRichTextEdit_new4(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKRichTextEdit(text_QString, parent);
}

QMetaObject* KRichTextEdit_MetaObject(const KRichTextEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRichTextEdit_Metacast(KRichTextEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRichTextEdit_Metacall(KRichTextEdit* self, int param1, int param2, void** param3) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKRichTextEdit*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KRichTextEdit_Tr(const char* s) {
    QString _ret = KRichTextEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRichTextEdit_EnableRichTextMode(KRichTextEdit* self) {
    self->enableRichTextMode();
}

int KRichTextEdit_TextMode(const KRichTextEdit* self) {
    return static_cast<int>(self->textMode());
}

libqt_string KRichTextEdit_TextOrHtml(const KRichTextEdit* self) {
    QString _ret = self->textOrHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRichTextEdit_SetTextOrHtml(KRichTextEdit* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setTextOrHtml(text_QString);
}

libqt_string KRichTextEdit_CurrentLinkText(const KRichTextEdit* self) {
    QString _ret = self->currentLinkText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRichTextEdit_CurrentLinkUrl(const KRichTextEdit* self) {
    QString _ret = self->currentLinkUrl();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRichTextEdit_SelectLinkText(const KRichTextEdit* self, QTextCursor* cursor) {
    self->selectLinkText(cursor);
}

void KRichTextEdit_SelectLinkText2(const KRichTextEdit* self) {
    self->selectLinkText();
}

void KRichTextEdit_UpdateLink(KRichTextEdit* self, const libqt_string linkUrl, const libqt_string linkText) {
    QString linkUrl_QString = QString::fromUtf8(linkUrl.data, linkUrl.len);
    QString linkText_QString = QString::fromUtf8(linkText.data, linkText.len);
    self->updateLink(linkUrl_QString, linkText_QString);
}

bool KRichTextEdit_CanIndentList(const KRichTextEdit* self) {
    return self->canIndentList();
}

bool KRichTextEdit_CanDedentList(const KRichTextEdit* self) {
    return self->canDedentList();
}

void KRichTextEdit_AlignLeft(KRichTextEdit* self) {
    self->alignLeft();
}

void KRichTextEdit_AlignCenter(KRichTextEdit* self) {
    self->alignCenter();
}

void KRichTextEdit_AlignRight(KRichTextEdit* self) {
    self->alignRight();
}

void KRichTextEdit_AlignJustify(KRichTextEdit* self) {
    self->alignJustify();
}

void KRichTextEdit_MakeRightToLeft(KRichTextEdit* self) {
    self->makeRightToLeft();
}

void KRichTextEdit_MakeLeftToRight(KRichTextEdit* self) {
    self->makeLeftToRight();
}

void KRichTextEdit_SetListStyle(KRichTextEdit* self, int _styleIndex) {
    self->setListStyle(static_cast<int>(_styleIndex));
}

void KRichTextEdit_IndentListMore(KRichTextEdit* self) {
    self->indentListMore();
}

void KRichTextEdit_IndentListLess(KRichTextEdit* self) {
    self->indentListLess();
}

void KRichTextEdit_SetFontFamily(KRichTextEdit* self, const libqt_string fontFamily) {
    QString fontFamily_QString = QString::fromUtf8(fontFamily.data, fontFamily.len);
    self->setFontFamily(fontFamily_QString);
}

void KRichTextEdit_SetFontSize(KRichTextEdit* self, int size) {
    self->setFontSize(static_cast<int>(size));
}

void KRichTextEdit_SetFont(KRichTextEdit* self, const QFont* font) {
    self->setFont(*font);
}

void KRichTextEdit_SetTextBold(KRichTextEdit* self, bool bold) {
    self->setTextBold(bold);
}

void KRichTextEdit_SetTextItalic(KRichTextEdit* self, bool italic) {
    self->setTextItalic(italic);
}

void KRichTextEdit_SetTextUnderline(KRichTextEdit* self, bool underline) {
    self->setTextUnderline(underline);
}

void KRichTextEdit_SetTextStrikeOut(KRichTextEdit* self, bool strikeOut) {
    self->setTextStrikeOut(strikeOut);
}

void KRichTextEdit_SetTextForegroundColor(KRichTextEdit* self, const QColor* color) {
    self->setTextForegroundColor(*color);
}

void KRichTextEdit_SetTextBackgroundColor(KRichTextEdit* self, const QColor* color) {
    self->setTextBackgroundColor(*color);
}

void KRichTextEdit_InsertHorizontalRule(KRichTextEdit* self) {
    self->insertHorizontalRule();
}

void KRichTextEdit_SwitchToPlainText(KRichTextEdit* self) {
    self->switchToPlainText();
}

libqt_string KRichTextEdit_ToCleanHtml(const KRichTextEdit* self) {
    QString _ret = self->toCleanHtml();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KRichTextEdit_SetTextSuperScript(KRichTextEdit* self, bool superscript) {
    self->setTextSuperScript(superscript);
}

void KRichTextEdit_SetTextSubScript(KRichTextEdit* self, bool subscript) {
    self->setTextSubScript(subscript);
}

void KRichTextEdit_SetHeadingLevel(KRichTextEdit* self, int level) {
    self->setHeadingLevel(static_cast<int>(level));
}

void KRichTextEdit_InsertPlainTextImplementation(KRichTextEdit* self) {
    self->insertPlainTextImplementation();
}

void KRichTextEdit_TextModeChanged(KRichTextEdit* self, int mode) {
    self->textModeChanged(static_cast<KRichTextEdit::Mode>(mode));
}

void KRichTextEdit_Connect_TextModeChanged(KRichTextEdit* self, intptr_t slot) {
    void (*slotFunc)(KRichTextEdit*, int) = reinterpret_cast<void (*)(KRichTextEdit*, int)>(slot);
    KRichTextEdit::connect(self, &KRichTextEdit::textModeChanged, [self, slotFunc](KRichTextEdit::Mode mode) {
        int sigval1 = static_cast<int>(mode);
        slotFunc(self, sigval1);
    });
}

void KRichTextEdit_KeyPressEvent(KRichTextEdit* self, QKeyEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->keyPressEvent(event);
    }
}

libqt_string KRichTextEdit_Tr2(const char* s, const char* c) {
    QString _ret = KRichTextEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRichTextEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = KRichTextEdit::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int KRichTextEdit_QBaseMetacall(KRichTextEdit* self, int param1, int param2, void** param3) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Metacall_IsBase(true);
        return vkrichtextedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KRichTextEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMetacall(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Metacall_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseKeyPressEvent(KRichTextEdit* self, QKeyEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_KeyPressEvent_IsBase(true);
        vkrichtextedit->keyPressEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnKeyPressEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SetReadOnly(KRichTextEdit* self, bool readOnly) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setReadOnly(readOnly);
    } else {
        self->KRichTextEdit::setReadOnly(readOnly);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSetReadOnly(KRichTextEdit* self, bool readOnly) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetReadOnly_IsBase(true);
        vkrichtextedit->setReadOnly(readOnly);
    } else {
        self->KRichTextEdit::setReadOnly(readOnly);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSetReadOnly(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetReadOnly_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SetReadOnly_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SetCheckSpellingEnabled(KRichTextEdit* self, bool check) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setCheckSpellingEnabled(check);
    } else {
        self->KRichTextEdit::setCheckSpellingEnabled(check);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSetCheckSpellingEnabled(KRichTextEdit* self, bool check) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetCheckSpellingEnabled_IsBase(true);
        vkrichtextedit->setCheckSpellingEnabled(check);
    } else {
        self->KRichTextEdit::setCheckSpellingEnabled(check);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSetCheckSpellingEnabled(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetCheckSpellingEnabled_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SetCheckSpellingEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_CheckSpellingEnabled(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->checkSpellingEnabled();
    } else {
        return self->KRichTextEdit::checkSpellingEnabled();
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseCheckSpellingEnabled(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CheckSpellingEnabled_IsBase(true);
        return vkrichtextedit->checkSpellingEnabled();
    } else {
        return self->KRichTextEdit::checkSpellingEnabled();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCheckSpellingEnabled(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CheckSpellingEnabled_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CheckSpellingEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_ShouldBlockBeSpellChecked(const KRichTextEdit* self, const libqt_string block) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    QString block_QString = QString::fromUtf8(block.data, block.len);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->shouldBlockBeSpellChecked(block_QString);
    } else {
        return self->KRichTextEdit::shouldBlockBeSpellChecked(block_QString);
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseShouldBlockBeSpellChecked(const KRichTextEdit* self, const libqt_string block) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    QString block_QString = QString::fromUtf8(block.data, block.len);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ShouldBlockBeSpellChecked_IsBase(true);
        return vkrichtextedit->shouldBlockBeSpellChecked(block_QString);
    } else {
        return self->KRichTextEdit::shouldBlockBeSpellChecked(block_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnShouldBlockBeSpellChecked(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ShouldBlockBeSpellChecked_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ShouldBlockBeSpellChecked_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_CreateHighlighter(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->createHighlighter();
    } else {
        self->KRichTextEdit::createHighlighter();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseCreateHighlighter(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CreateHighlighter_IsBase(true);
        vkrichtextedit->createHighlighter();
    } else {
        self->KRichTextEdit::createHighlighter();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCreateHighlighter(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CreateHighlighter_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CreateHighlighter_Callback>(slot));
    }
}

// Derived class handler implementation
QMenu* KRichTextEdit_MousePopupMenu(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->mousePopupMenu();
    } else {
        return self->KRichTextEdit::mousePopupMenu();
    }
}

// Base class handler implementation
QMenu* KRichTextEdit_QBaseMousePopupMenu(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MousePopupMenu_IsBase(true);
        return vkrichtextedit->mousePopupMenu();
    } else {
        return self->KRichTextEdit::mousePopupMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMousePopupMenu(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MousePopupMenu_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MousePopupMenu_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_Event(KRichTextEdit* self, QEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->event(param1);
    } else {
        return ((VirtualKRichTextEdit*)self)->event(param1);
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseEvent(KRichTextEdit* self, QEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Event_IsBase(true);
        return vkrichtextedit->event(param1);
    } else {
        return ((VirtualKRichTextEdit*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Event_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_FocusInEvent(KRichTextEdit* self, QFocusEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->focusInEvent(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseFocusInEvent(KRichTextEdit* self, QFocusEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusInEvent_IsBase(true);
        vkrichtextedit->focusInEvent(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnFocusInEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusInEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_DeleteWordBack(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->deleteWordBack();
    } else {
        ((VirtualKRichTextEdit*)self)->deleteWordBack();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDeleteWordBack(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DeleteWordBack_IsBase(true);
        vkrichtextedit->deleteWordBack();
    } else {
        ((VirtualKRichTextEdit*)self)->deleteWordBack();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDeleteWordBack(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DeleteWordBack_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DeleteWordBack_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_DeleteWordForward(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->deleteWordForward();
    } else {
        ((VirtualKRichTextEdit*)self)->deleteWordForward();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDeleteWordForward(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DeleteWordForward_IsBase(true);
        vkrichtextedit->deleteWordForward();
    } else {
        ((VirtualKRichTextEdit*)self)->deleteWordForward();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDeleteWordForward(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DeleteWordForward_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DeleteWordForward_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_ContextMenuEvent(KRichTextEdit* self, QContextMenuEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->contextMenuEvent(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseContextMenuEvent(KRichTextEdit* self, QContextMenuEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ContextMenuEvent_IsBase(true);
        vkrichtextedit->contextMenuEvent(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnContextMenuEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KRichTextEdit_LoadResource(KRichTextEdit* self, int typeVal, const QUrl* name) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return new QVariant(vkrichtextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualKRichTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* KRichTextEdit_QBaseLoadResource(KRichTextEdit* self, int typeVal, const QUrl* name) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_LoadResource_IsBase(true);
        return new QVariant(vkrichtextedit->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualKRichTextEdit*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnLoadResource(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_LoadResource_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KRichTextEdit_InputMethodQuery(const KRichTextEdit* self, int property) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return new QVariant(vkrichtextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualKRichTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* KRichTextEdit_QBaseInputMethodQuery(const KRichTextEdit* self, int property) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vkrichtextedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualKRichTextEdit*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInputMethodQuery(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_TimerEvent(KRichTextEdit* self, QTimerEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->timerEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseTimerEvent(KRichTextEdit* self, QTimerEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_TimerEvent_IsBase(true);
        vkrichtextedit->timerEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnTimerEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_TimerEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_KeyReleaseEvent(KRichTextEdit* self, QKeyEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->keyReleaseEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseKeyReleaseEvent(KRichTextEdit* self, QKeyEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_KeyReleaseEvent_IsBase(true);
        vkrichtextedit->keyReleaseEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnKeyReleaseEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_ResizeEvent(KRichTextEdit* self, QResizeEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->resizeEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseResizeEvent(KRichTextEdit* self, QResizeEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ResizeEvent_IsBase(true);
        vkrichtextedit->resizeEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnResizeEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ResizeEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_PaintEvent(KRichTextEdit* self, QPaintEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->paintEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBasePaintEvent(KRichTextEdit* self, QPaintEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_PaintEvent_IsBase(true);
        vkrichtextedit->paintEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnPaintEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_PaintEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_MousePressEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->mousePressEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseMousePressEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MousePressEvent_IsBase(true);
        vkrichtextedit->mousePressEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMousePressEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MousePressEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_MouseMoveEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->mouseMoveEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseMouseMoveEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MouseMoveEvent_IsBase(true);
        vkrichtextedit->mouseMoveEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMouseMoveEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_MouseReleaseEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseMouseReleaseEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MouseReleaseEvent_IsBase(true);
        vkrichtextedit->mouseReleaseEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMouseReleaseEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_MouseDoubleClickEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseMouseDoubleClickEvent(KRichTextEdit* self, QMouseEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MouseDoubleClickEvent_IsBase(true);
        vkrichtextedit->mouseDoubleClickEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMouseDoubleClickEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_FocusNextPrevChild(KRichTextEdit* self, bool next) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKRichTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseFocusNextPrevChild(KRichTextEdit* self, bool next) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusNextPrevChild_IsBase(true);
        return vkrichtextedit->focusNextPrevChild(next);
    } else {
        return ((VirtualKRichTextEdit*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnFocusNextPrevChild(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_DragEnterEvent(KRichTextEdit* self, QDragEnterEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->dragEnterEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDragEnterEvent(KRichTextEdit* self, QDragEnterEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DragEnterEvent_IsBase(true);
        vkrichtextedit->dragEnterEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDragEnterEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_DragLeaveEvent(KRichTextEdit* self, QDragLeaveEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->dragLeaveEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDragLeaveEvent(KRichTextEdit* self, QDragLeaveEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DragLeaveEvent_IsBase(true);
        vkrichtextedit->dragLeaveEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDragLeaveEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_DragMoveEvent(KRichTextEdit* self, QDragMoveEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->dragMoveEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDragMoveEvent(KRichTextEdit* self, QDragMoveEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DragMoveEvent_IsBase(true);
        vkrichtextedit->dragMoveEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDragMoveEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_DropEvent(KRichTextEdit* self, QDropEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->dropEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDropEvent(KRichTextEdit* self, QDropEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DropEvent_IsBase(true);
        vkrichtextedit->dropEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDropEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DropEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_FocusOutEvent(KRichTextEdit* self, QFocusEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->focusOutEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseFocusOutEvent(KRichTextEdit* self, QFocusEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusOutEvent_IsBase(true);
        vkrichtextedit->focusOutEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnFocusOutEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_ShowEvent(KRichTextEdit* self, QShowEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->showEvent(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseShowEvent(KRichTextEdit* self, QShowEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ShowEvent_IsBase(true);
        vkrichtextedit->showEvent(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnShowEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ShowEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_ChangeEvent(KRichTextEdit* self, QEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->changeEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseChangeEvent(KRichTextEdit* self, QEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ChangeEvent_IsBase(true);
        vkrichtextedit->changeEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnChangeEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ChangeEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_WheelEvent(KRichTextEdit* self, QWheelEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->wheelEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseWheelEvent(KRichTextEdit* self, QWheelEvent* e) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_WheelEvent_IsBase(true);
        vkrichtextedit->wheelEvent(e);
    } else {
        ((VirtualKRichTextEdit*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnWheelEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_WheelEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KRichTextEdit_CreateMimeDataFromSelection(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualKRichTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* KRichTextEdit_QBaseCreateMimeDataFromSelection(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CreateMimeDataFromSelection_IsBase(true);
        return vkrichtextedit->createMimeDataFromSelection();
    } else {
        return ((VirtualKRichTextEdit*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCreateMimeDataFromSelection(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_CanInsertFromMimeData(const KRichTextEdit* self, const QMimeData* source) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualKRichTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseCanInsertFromMimeData(const KRichTextEdit* self, const QMimeData* source) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CanInsertFromMimeData_IsBase(true);
        return vkrichtextedit->canInsertFromMimeData(source);
    } else {
        return ((VirtualKRichTextEdit*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCanInsertFromMimeData(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_InsertFromMimeData(KRichTextEdit* self, const QMimeData* source) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->insertFromMimeData(source);
    } else {
        ((VirtualKRichTextEdit*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseInsertFromMimeData(KRichTextEdit* self, const QMimeData* source) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InsertFromMimeData_IsBase(true);
        vkrichtextedit->insertFromMimeData(source);
    } else {
        ((VirtualKRichTextEdit*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInsertFromMimeData(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InsertFromMimeData_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_InputMethodEvent(KRichTextEdit* self, QInputMethodEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->inputMethodEvent(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseInputMethodEvent(KRichTextEdit* self, QInputMethodEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InputMethodEvent_IsBase(true);
        vkrichtextedit->inputMethodEvent(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInputMethodEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_ScrollContentsBy(KRichTextEdit* self, int dx, int dy) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKRichTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseScrollContentsBy(KRichTextEdit* self, int dx, int dy) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ScrollContentsBy_IsBase(true);
        vkrichtextedit->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKRichTextEdit*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnScrollContentsBy(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ScrollContentsBy_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_DoSetTextCursor(KRichTextEdit* self, const QTextCursor* cursor) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualKRichTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDoSetTextCursor(KRichTextEdit* self, const QTextCursor* cursor) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DoSetTextCursor_IsBase(true);
        vkrichtextedit->doSetTextCursor(*cursor);
    } else {
        ((VirtualKRichTextEdit*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDoSetTextCursor(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DoSetTextCursor_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRichTextEdit_MinimumSizeHint(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return new QSize(vkrichtextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRichTextEdit*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KRichTextEdit_QBaseMinimumSizeHint(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vkrichtextedit->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRichTextEdit*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMinimumSizeHint(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRichTextEdit_SizeHint(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return new QSize(vkrichtextedit->sizeHint());
    } else {
        return new QSize(((VirtualKRichTextEdit*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KRichTextEdit_QBaseSizeHint(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SizeHint_IsBase(true);
        return new QSize(vkrichtextedit->sizeHint());
    } else {
        return new QSize(((VirtualKRichTextEdit*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSizeHint(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SizeHint_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SetupViewport(KRichTextEdit* self, QWidget* viewport) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setupViewport(viewport);
    } else {
        self->KRichTextEdit::setupViewport(viewport);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSetupViewport(KRichTextEdit* self, QWidget* viewport) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetupViewport_IsBase(true);
        vkrichtextedit->setupViewport(viewport);
    } else {
        self->KRichTextEdit::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSetupViewport(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetupViewport_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_EventFilter(KRichTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualKRichTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseEventFilter(KRichTextEdit* self, QObject* param1, QEvent* param2) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_EventFilter_IsBase(true);
        return vkrichtextedit->eventFilter(param1, param2);
    } else {
        return ((VirtualKRichTextEdit*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnEventFilter(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_EventFilter_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_ViewportEvent(KRichTextEdit* self, QEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->viewportEvent(param1);
    } else {
        return ((VirtualKRichTextEdit*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseViewportEvent(KRichTextEdit* self, QEvent* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ViewportEvent_IsBase(true);
        return vkrichtextedit->viewportEvent(param1);
    } else {
        return ((VirtualKRichTextEdit*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnViewportEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ViewportEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRichTextEdit_ViewportSizeHint(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return new QSize(vkrichtextedit->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* KRichTextEdit_QBaseViewportSizeHint(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ViewportSizeHint_IsBase(true);
        return new QSize(vkrichtextedit->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnViewportSizeHint(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ViewportSizeHint_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_InitStyleOption(const KRichTextEdit* self, QStyleOptionFrame* option) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->initStyleOption(option);
    } else {
        ((VirtualKRichTextEdit*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseInitStyleOption(const KRichTextEdit* self, QStyleOptionFrame* option) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InitStyleOption_IsBase(true);
        vkrichtextedit->initStyleOption(option);
    } else {
        ((VirtualKRichTextEdit*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInitStyleOption(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InitStyleOption_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextEdit_DevType(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->devType();
    } else {
        return self->KRichTextEdit::devType();
    }
}

// Base class handler implementation
int KRichTextEdit_QBaseDevType(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DevType_IsBase(true);
        return vkrichtextedit->devType();
    } else {
        return self->KRichTextEdit::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDevType(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DevType_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SetVisible(KRichTextEdit* self, bool visible) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setVisible(visible);
    } else {
        self->KRichTextEdit::setVisible(visible);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSetVisible(KRichTextEdit* self, bool visible) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetVisible_IsBase(true);
        vkrichtextedit->setVisible(visible);
    } else {
        self->KRichTextEdit::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSetVisible(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetVisible_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextEdit_HeightForWidth(const KRichTextEdit* self, int param1) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRichTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KRichTextEdit_QBaseHeightForWidth(const KRichTextEdit* self, int param1) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_HeightForWidth_IsBase(true);
        return vkrichtextedit->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRichTextEdit::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnHeightForWidth(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_HeightForWidth_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_HasHeightForWidth(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->hasHeightForWidth();
    } else {
        return self->KRichTextEdit::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseHasHeightForWidth(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_HasHeightForWidth_IsBase(true);
        return vkrichtextedit->hasHeightForWidth();
    } else {
        return self->KRichTextEdit::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnHasHeightForWidth(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KRichTextEdit_PaintEngine(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->paintEngine();
    } else {
        return self->KRichTextEdit::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KRichTextEdit_QBasePaintEngine(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_PaintEngine_IsBase(true);
        return vkrichtextedit->paintEngine();
    } else {
        return self->KRichTextEdit::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnPaintEngine(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_PaintEngine_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_EnterEvent(KRichTextEdit* self, QEnterEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->enterEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseEnterEvent(KRichTextEdit* self, QEnterEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_EnterEvent_IsBase(true);
        vkrichtextedit->enterEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnEnterEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_EnterEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_LeaveEvent(KRichTextEdit* self, QEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->leaveEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseLeaveEvent(KRichTextEdit* self, QEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_LeaveEvent_IsBase(true);
        vkrichtextedit->leaveEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnLeaveEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_LeaveEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_MoveEvent(KRichTextEdit* self, QMoveEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->moveEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseMoveEvent(KRichTextEdit* self, QMoveEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MoveEvent_IsBase(true);
        vkrichtextedit->moveEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMoveEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_MoveEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_CloseEvent(KRichTextEdit* self, QCloseEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->closeEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseCloseEvent(KRichTextEdit* self, QCloseEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CloseEvent_IsBase(true);
        vkrichtextedit->closeEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCloseEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CloseEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_TabletEvent(KRichTextEdit* self, QTabletEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->tabletEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseTabletEvent(KRichTextEdit* self, QTabletEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_TabletEvent_IsBase(true);
        vkrichtextedit->tabletEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnTabletEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_TabletEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_ActionEvent(KRichTextEdit* self, QActionEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->actionEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseActionEvent(KRichTextEdit* self, QActionEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ActionEvent_IsBase(true);
        vkrichtextedit->actionEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnActionEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ActionEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_HideEvent(KRichTextEdit* self, QHideEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->hideEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseHideEvent(KRichTextEdit* self, QHideEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_HideEvent_IsBase(true);
        vkrichtextedit->hideEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnHideEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_HideEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_NativeEvent(KRichTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRichTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseNativeEvent(KRichTextEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_NativeEvent_IsBase(true);
        return vkrichtextedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRichTextEdit*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnNativeEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_NativeEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextEdit_Metric(const KRichTextEdit* self, int param1) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRichTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KRichTextEdit_QBaseMetric(const KRichTextEdit* self, int param1) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Metric_IsBase(true);
        return vkrichtextedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRichTextEdit*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnMetric(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Metric_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_InitPainter(const KRichTextEdit* self, QPainter* painter) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->initPainter(painter);
    } else {
        ((VirtualKRichTextEdit*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseInitPainter(const KRichTextEdit* self, QPainter* painter) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InitPainter_IsBase(true);
        vkrichtextedit->initPainter(painter);
    } else {
        ((VirtualKRichTextEdit*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnInitPainter(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_InitPainter_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KRichTextEdit_Redirected(const KRichTextEdit* self, QPoint* offset) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->redirected(offset);
    } else {
        return ((VirtualKRichTextEdit*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KRichTextEdit_QBaseRedirected(const KRichTextEdit* self, QPoint* offset) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Redirected_IsBase(true);
        return vkrichtextedit->redirected(offset);
    } else {
        return ((VirtualKRichTextEdit*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnRedirected(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Redirected_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KRichTextEdit_SharedPainter(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->sharedPainter();
    } else {
        return ((VirtualKRichTextEdit*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KRichTextEdit_QBaseSharedPainter(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SharedPainter_IsBase(true);
        return vkrichtextedit->sharedPainter();
    } else {
        return ((VirtualKRichTextEdit*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSharedPainter(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SharedPainter_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_ChildEvent(KRichTextEdit* self, QChildEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->childEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseChildEvent(KRichTextEdit* self, QChildEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ChildEvent_IsBase(true);
        vkrichtextedit->childEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnChildEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ChildEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_CustomEvent(KRichTextEdit* self, QEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->customEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseCustomEvent(KRichTextEdit* self, QEvent* event) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CustomEvent_IsBase(true);
        vkrichtextedit->customEvent(event);
    } else {
        ((VirtualKRichTextEdit*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCustomEvent(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_CustomEvent_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_ConnectNotify(KRichTextEdit* self, const QMetaMethod* signal) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->connectNotify(*signal);
    } else {
        ((VirtualKRichTextEdit*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseConnectNotify(KRichTextEdit* self, const QMetaMethod* signal) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ConnectNotify_IsBase(true);
        vkrichtextedit->connectNotify(*signal);
    } else {
        ((VirtualKRichTextEdit*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnConnectNotify(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ConnectNotify_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_DisconnectNotify(KRichTextEdit* self, const QMetaMethod* signal) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->disconnectNotify(*signal);
    } else {
        ((VirtualKRichTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDisconnectNotify(KRichTextEdit* self, const QMetaMethod* signal) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DisconnectNotify_IsBase(true);
        vkrichtextedit->disconnectNotify(*signal);
    } else {
        ((VirtualKRichTextEdit*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDisconnectNotify(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SlotDoReplace(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->slotDoReplace();
    } else {
        ((VirtualKRichTextEdit*)self)->slotDoReplace();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSlotDoReplace(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotDoReplace_IsBase(true);
        vkrichtextedit->slotDoReplace();
    } else {
        ((VirtualKRichTextEdit*)self)->slotDoReplace();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSlotDoReplace(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotDoReplace_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SlotDoReplace_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SlotReplaceNext(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->slotReplaceNext();
    } else {
        ((VirtualKRichTextEdit*)self)->slotReplaceNext();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSlotReplaceNext(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotReplaceNext_IsBase(true);
        vkrichtextedit->slotReplaceNext();
    } else {
        ((VirtualKRichTextEdit*)self)->slotReplaceNext();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSlotReplaceNext(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotReplaceNext_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SlotReplaceNext_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SlotDoFind(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->slotDoFind();
    } else {
        ((VirtualKRichTextEdit*)self)->slotDoFind();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSlotDoFind(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotDoFind_IsBase(true);
        vkrichtextedit->slotDoFind();
    } else {
        ((VirtualKRichTextEdit*)self)->slotDoFind();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSlotDoFind(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotDoFind_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SlotDoFind_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SlotFind(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->slotFind();
    } else {
        ((VirtualKRichTextEdit*)self)->slotFind();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSlotFind(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotFind_IsBase(true);
        vkrichtextedit->slotFind();
    } else {
        ((VirtualKRichTextEdit*)self)->slotFind();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSlotFind(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotFind_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SlotFind_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SlotFindNext(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->slotFindNext();
    } else {
        ((VirtualKRichTextEdit*)self)->slotFindNext();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSlotFindNext(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotFindNext_IsBase(true);
        vkrichtextedit->slotFindNext();
    } else {
        ((VirtualKRichTextEdit*)self)->slotFindNext();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSlotFindNext(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotFindNext_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SlotFindNext_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SlotFindPrevious(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->slotFindPrevious();
    } else {
        ((VirtualKRichTextEdit*)self)->slotFindPrevious();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSlotFindPrevious(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotFindPrevious_IsBase(true);
        vkrichtextedit->slotFindPrevious();
    } else {
        ((VirtualKRichTextEdit*)self)->slotFindPrevious();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSlotFindPrevious(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotFindPrevious_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SlotFindPrevious_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SlotReplace(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->slotReplace();
    } else {
        ((VirtualKRichTextEdit*)self)->slotReplace();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSlotReplace(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotReplace_IsBase(true);
        vkrichtextedit->slotReplace();
    } else {
        ((VirtualKRichTextEdit*)self)->slotReplace();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSlotReplace(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotReplace_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SlotReplace_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SlotSpeakText(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->slotSpeakText();
    } else {
        ((VirtualKRichTextEdit*)self)->slotSpeakText();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSlotSpeakText(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotSpeakText_IsBase(true);
        vkrichtextedit->slotSpeakText();
    } else {
        ((VirtualKRichTextEdit*)self)->slotSpeakText();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSlotSpeakText(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SlotSpeakText_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SlotSpeakText_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_ZoomInF(KRichTextEdit* self, float range) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualKRichTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseZoomInF(KRichTextEdit* self, float range) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ZoomInF_IsBase(true);
        vkrichtextedit->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualKRichTextEdit*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnZoomInF(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ZoomInF_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_SetViewportMargins(KRichTextEdit* self, int left, int top, int right, int bottom) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKRichTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseSetViewportMargins(KRichTextEdit* self, int left, int top, int right, int bottom) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetViewportMargins_IsBase(true);
        vkrichtextedit->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKRichTextEdit*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSetViewportMargins(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SetViewportMargins_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* KRichTextEdit_ViewportMargins(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return new QMargins(vkrichtextedit->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* KRichTextEdit_QBaseViewportMargins(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ViewportMargins_IsBase(true);
        return new QMargins(vkrichtextedit->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnViewportMargins(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_ViewportMargins_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_DrawFrame(KRichTextEdit* self, QPainter* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->drawFrame(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDrawFrame(KRichTextEdit* self, QPainter* param1) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DrawFrame_IsBase(true);
        vkrichtextedit->drawFrame(param1);
    } else {
        ((VirtualKRichTextEdit*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDrawFrame(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_DrawFrame_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_UpdateMicroFocus(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->updateMicroFocus();
    } else {
        ((VirtualKRichTextEdit*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseUpdateMicroFocus(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_UpdateMicroFocus_IsBase(true);
        vkrichtextedit->updateMicroFocus();
    } else {
        ((VirtualKRichTextEdit*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnUpdateMicroFocus(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_Create(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->create();
    } else {
        ((VirtualKRichTextEdit*)self)->create();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseCreate(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Create_IsBase(true);
        vkrichtextedit->create();
    } else {
        ((VirtualKRichTextEdit*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnCreate(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Create_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextEdit_Destroy(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->destroy();
    } else {
        ((VirtualKRichTextEdit*)self)->destroy();
    }
}

// Base class handler implementation
void KRichTextEdit_QBaseDestroy(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Destroy_IsBase(true);
        vkrichtextedit->destroy();
    } else {
        ((VirtualKRichTextEdit*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnDestroy(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Destroy_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_FocusNextChild(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->focusNextChild();
    } else {
        return ((VirtualKRichTextEdit*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseFocusNextChild(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusNextChild_IsBase(true);
        return vkrichtextedit->focusNextChild();
    } else {
        return ((VirtualKRichTextEdit*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnFocusNextChild(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusNextChild_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_FocusPreviousChild(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->focusPreviousChild();
    } else {
        return ((VirtualKRichTextEdit*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseFocusPreviousChild(KRichTextEdit* self) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusPreviousChild_IsBase(true);
        return vkrichtextedit->focusPreviousChild();
    } else {
        return ((VirtualKRichTextEdit*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnFocusPreviousChild(KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = dynamic_cast<VirtualKRichTextEdit*>(self);
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KRichTextEdit_Sender(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->sender();
    } else {
        return ((VirtualKRichTextEdit*)self)->sender();
    }
}

// Base class handler implementation
QObject* KRichTextEdit_QBaseSender(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Sender_IsBase(true);
        return vkrichtextedit->sender();
    } else {
        return ((VirtualKRichTextEdit*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSender(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Sender_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextEdit_SenderSignalIndex(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->senderSignalIndex();
    } else {
        return ((VirtualKRichTextEdit*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KRichTextEdit_QBaseSenderSignalIndex(const KRichTextEdit* self) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SenderSignalIndex_IsBase(true);
        return vkrichtextedit->senderSignalIndex();
    } else {
        return ((VirtualKRichTextEdit*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnSenderSignalIndex(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextEdit_Receivers(const KRichTextEdit* self, const char* signal) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->receivers(signal);
    } else {
        return ((VirtualKRichTextEdit*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KRichTextEdit_QBaseReceivers(const KRichTextEdit* self, const char* signal) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Receivers_IsBase(true);
        return vkrichtextedit->receivers(signal);
    } else {
        return ((VirtualKRichTextEdit*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnReceivers(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_Receivers_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextEdit_IsSignalConnected(const KRichTextEdit* self, const QMetaMethod* signal) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKRichTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KRichTextEdit_QBaseIsSignalConnected(const KRichTextEdit* self, const QMetaMethod* signal) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_IsSignalConnected_IsBase(true);
        return vkrichtextedit->isSignalConnected(*signal);
    } else {
        return ((VirtualKRichTextEdit*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnIsSignalConnected(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KRichTextEdit_GetDecodedMetricF(const KRichTextEdit* self, int metricA, int metricB) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        return vkrichtextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRichTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KRichTextEdit_QBaseGetDecodedMetricF(const KRichTextEdit* self, int metricA, int metricB) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_GetDecodedMetricF_IsBase(true);
        return vkrichtextedit->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRichTextEdit*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextEdit_OnGetDecodedMetricF(const KRichTextEdit* self, intptr_t slot) {
    auto* vkrichtextedit = const_cast<VirtualKRichTextEdit*>(dynamic_cast<const VirtualKRichTextEdit*>(self));
    if (vkrichtextedit && vkrichtextedit->isVirtualKRichTextEdit) {
        vkrichtextedit->setKRichTextEdit_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKRichTextEdit::KRichTextEdit_GetDecodedMetricF_Callback>(slot));
    }
}

void KRichTextEdit_Delete(KRichTextEdit* self) {
    delete self;
}
