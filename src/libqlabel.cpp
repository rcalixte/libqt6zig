#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLabel>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QMovie>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPicture>
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlabel.h>
#include "libqlabel.h"
#include "libqlabel.hxx"

QLabel* QLabel_new(QWidget* parent) {
    return new VirtualQLabel(parent);
}

QLabel* QLabel_new2() {
    return new VirtualQLabel();
}

QLabel* QLabel_new3(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQLabel(text_QString);
}

QLabel* QLabel_new4(QWidget* parent, int f) {
    return new VirtualQLabel(parent, static_cast<Qt::WindowFlags>(f));
}

QLabel* QLabel_new5(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQLabel(text_QString, parent);
}

QLabel* QLabel_new6(const libqt_string text, QWidget* parent, int f) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQLabel(text_QString, parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QLabel_MetaObject(const QLabel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLabel_Metacast(QLabel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLabel_Metacall(QLabel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QLabel_Tr(const char* s) {
    auto _ret = QLabel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLabel_Text(const QLabel* self) {
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QPixmap* QLabel_Pixmap(const QLabel* self, int param1) {
    return new QPixmap(self->pixmap(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPixmap* QLabel_Pixmap2(const QLabel* self) {
    return new QPixmap(self->pixmap());
}

QPicture* QLabel_Picture(const QLabel* self, int param1) {
    return new QPicture(self->picture(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPicture* QLabel_Picture2(const QLabel* self) {
    return new QPicture(self->picture());
}

QMovie* QLabel_Movie(const QLabel* self) {
    return self->movie();
}

int QLabel_TextFormat(const QLabel* self) {
    return static_cast<int>(self->textFormat());
}

void QLabel_SetTextFormat(QLabel* self, int textFormat) {
    self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

void QLabel_SetResourceProvider(QLabel* self, intptr_t provider) {
    auto provider_func = [provider](const QUrl& funcparam1_fp) -> QVariant {
        const QUrl& funcparam1_ret = funcparam1_fp;
        // Cast returned reference into pointer
        QUrl* funcparam1_fv = const_cast<QUrl*>(&funcparam1_ret);
        auto provider_funcret = reinterpret_cast<QVariant (*)(QUrl*)>(provider)(funcparam1_fv);
        return static_cast<QVariant>(provider_funcret);
    };
    self->setResourceProvider(provider_func);
}

int QLabel_Alignment(const QLabel* self) {
    return static_cast<int>(self->alignment());
}

void QLabel_SetAlignment(QLabel* self, int alignment) {
    self->setAlignment(static_cast<Qt::Alignment>(alignment));
}

void QLabel_SetWordWrap(QLabel* self, bool on) {
    self->setWordWrap(on);
}

bool QLabel_WordWrap(const QLabel* self) {
    return self->wordWrap();
}

int QLabel_Indent(const QLabel* self) {
    return self->indent();
}

void QLabel_SetIndent(QLabel* self, int indent) {
    self->setIndent(static_cast<int>(indent));
}

int QLabel_Margin(const QLabel* self) {
    return self->margin();
}

void QLabel_SetMargin(QLabel* self, int margin) {
    self->setMargin(static_cast<int>(margin));
}

bool QLabel_HasScaledContents(const QLabel* self) {
    return self->hasScaledContents();
}

void QLabel_SetScaledContents(QLabel* self, bool scaledContents) {
    self->setScaledContents(scaledContents);
}

QSize* QLabel_SizeHint(const QLabel* self) {
    return new QSize(self->sizeHint());
}

QSize* QLabel_MinimumSizeHint(const QLabel* self) {
    return new QSize(self->minimumSizeHint());
}

void QLabel_SetBuddy(QLabel* self, QWidget* buddy) {
    self->setBuddy(buddy);
}

QWidget* QLabel_Buddy(const QLabel* self) {
    return self->buddy();
}

int QLabel_HeightForWidth(const QLabel* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

bool QLabel_OpenExternalLinks(const QLabel* self) {
    return self->openExternalLinks();
}

void QLabel_SetOpenExternalLinks(QLabel* self, bool open) {
    self->setOpenExternalLinks(open);
}

void QLabel_SetTextInteractionFlags(QLabel* self, int flags) {
    self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QLabel_TextInteractionFlags(const QLabel* self) {
    return static_cast<int>(self->textInteractionFlags());
}

void QLabel_SetSelection(QLabel* self, int param1, int param2) {
    self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLabel_HasSelectedText(const QLabel* self) {
    return self->hasSelectedText();
}

libqt_string QLabel_SelectedText(const QLabel* self) {
    auto _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QLabel_SelectionStart(const QLabel* self) {
    return self->selectionStart();
}

void QLabel_SetText(QLabel* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void QLabel_SetPixmap(QLabel* self, const QPixmap* pixmap) {
    self->setPixmap(*pixmap);
}

void QLabel_SetPicture(QLabel* self, const QPicture* picture) {
    self->setPicture(*picture);
}

void QLabel_SetMovie(QLabel* self, QMovie* movie) {
    self->setMovie(movie);
}

void QLabel_SetNum(QLabel* self, int num) {
    self->setNum(static_cast<int>(num));
}

void QLabel_SetNum2(QLabel* self, double num) {
    self->setNum(static_cast<double>(num));
}

void QLabel_Clear(QLabel* self) {
    self->clear();
}

void QLabel_LinkActivated(QLabel* self, const libqt_string link) {
    QString link_QString = QString::fromUtf8(link.data, link.len);
    self->linkActivated(link_QString);
}

void QLabel_Connect_LinkActivated(QLabel* self, intptr_t slot) {
    void (*slotFunc)(QLabel*, const char*) = reinterpret_cast<void (*)(QLabel*, const char*)>(slot);
    QLabel::connect(self,
                    static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkActivated),
                    [self, slotFunc](const QString& link) {
                        const auto link_ret = link;
                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                        QByteArray link_b = link_ret.toUtf8();
                        auto link_str_len = link_b.length();
                        const char* link_str = static_cast<const char*>(malloc(link_str_len + 1));
                        memcpy((void*)link_str, link_b.data(), link_str_len);
                        ((char*)link_str)[link_str_len] = '\0';
                        const char* sigval1 = link_str;
                        slotFunc(self, sigval1);
                        libqt_free(link_str);
                    });
}

void QLabel_LinkHovered(QLabel* self, const libqt_string link) {
    QString link_QString = QString::fromUtf8(link.data, link.len);
    self->linkHovered(link_QString);
}

void QLabel_Connect_LinkHovered(QLabel* self, intptr_t slot) {
    void (*slotFunc)(QLabel*, const char*) = reinterpret_cast<void (*)(QLabel*, const char*)>(slot);
    QLabel::connect(self,
                    static_cast<void (QLabel::*)(const QString&)>(&QLabel::linkHovered),
                    [self, slotFunc](const QString& link) {
                        const auto link_ret = link;
                        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                        QByteArray link_b = link_ret.toUtf8();
                        auto link_str_len = link_b.length();
                        const char* link_str = static_cast<const char*>(malloc(link_str_len + 1));
                        memcpy((void*)link_str, link_b.data(), link_str_len);
                        ((char*)link_str)[link_str_len] = '\0';
                        const char* sigval1 = link_str;
                        slotFunc(self, sigval1);
                        libqt_free(link_str);
                    });
}

bool QLabel_Event(QLabel* self, QEvent* e) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        return vqlabel->event(e);
    }
    qFatal("Error: Protected method QLabel::event called without a directly constructed type");
}

void QLabel_KeyPressEvent(QLabel* self, QKeyEvent* ev) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->keyPressEvent(ev);
    }
}

void QLabel_PaintEvent(QLabel* self, QPaintEvent* param1) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->paintEvent(param1);
    }
}

void QLabel_ChangeEvent(QLabel* self, QEvent* param1) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->changeEvent(param1);
    }
}

void QLabel_MousePressEvent(QLabel* self, QMouseEvent* ev) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->mousePressEvent(ev);
    }
}

void QLabel_MouseMoveEvent(QLabel* self, QMouseEvent* ev) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->mouseMoveEvent(ev);
    }
}

void QLabel_MouseReleaseEvent(QLabel* self, QMouseEvent* ev) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->mouseReleaseEvent(ev);
    }
}

void QLabel_ContextMenuEvent(QLabel* self, QContextMenuEvent* ev) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->contextMenuEvent(ev);
    }
}

void QLabel_FocusInEvent(QLabel* self, QFocusEvent* ev) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->focusInEvent(ev);
    }
}

void QLabel_FocusOutEvent(QLabel* self, QFocusEvent* ev) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->focusOutEvent(ev);
    }
}

bool QLabel_FocusNextPrevChild(QLabel* self, bool next) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        return vqlabel->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QLabel::focusNextPrevChild called without a directly constructed type");
}

libqt_string QLabel_Tr2(const char* s, const char* c) {
    auto _ret = QLabel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QLabel_Tr3(const char* s, const char* c, int n) {
    auto _ret = QLabel::tr(s, c, static_cast<int>(n));
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
QMetaObject* QLabel_SuperMetaObject(const QLabel* self) {
    return (QMetaObject*)self->QLabel::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMetaObject(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_metaobject_callback = reinterpret_cast<VirtualQLabel::QLabel_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QLabel_SuperMetacast(QLabel* self, const char* param1) {
    return self->QLabel::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMetacast(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_metacast_callback = reinterpret_cast<VirtualQLabel::QLabel_Metacast_Callback>(slot);
}

// Base class handler implementation
int QLabel_SuperMetacall(QLabel* self, int param1, int param2, void** param3) {
    return self->QLabel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMetacall(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_metacall_callback = reinterpret_cast<VirtualQLabel::QLabel_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QLabel_SuperSizeHint(const QLabel* self) {
    return new QSize(self->QLabel::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnSizeHint(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_sizehint_callback = reinterpret_cast<VirtualQLabel::QLabel_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QLabel_SuperMinimumSizeHint(const QLabel* self) {
    return new QSize(self->QLabel::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMinimumSizeHint(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_minimumsizehint_callback = reinterpret_cast<VirtualQLabel::QLabel_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
int QLabel_SuperHeightForWidth(const QLabel* self, int param1) {
    return self->QLabel::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnHeightForWidth(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_heightforwidth_callback = reinterpret_cast<VirtualQLabel::QLabel_HeightForWidth_Callback>(slot);
}

// Base class handler implementation
bool QLabel_SuperEvent(QLabel* self, QEvent* e) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->QLabel::event(e);
    } else
        qFatal("Error: Protected virtual method QLabel::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_event_callback = reinterpret_cast<VirtualQLabel::QLabel_Event_Callback>(slot);
}

// Base class handler implementation
void QLabel_SuperKeyPressEvent(QLabel* self, QKeyEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::keyPressEvent(ev);
    } else
        qFatal("Error: Protected virtual method QLabel::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnKeyPressEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_keypressevent_callback = reinterpret_cast<VirtualQLabel::QLabel_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QLabel_SuperPaintEvent(QLabel* self, QPaintEvent* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLabel::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnPaintEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_paintevent_callback = reinterpret_cast<VirtualQLabel::QLabel_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QLabel_SuperChangeEvent(QLabel* self, QEvent* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLabel::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnChangeEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_changeevent_callback = reinterpret_cast<VirtualQLabel::QLabel_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QLabel_SuperMousePressEvent(QLabel* self, QMouseEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::mousePressEvent(ev);
    } else
        qFatal("Error: Protected virtual method QLabel::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMousePressEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_mousepressevent_callback = reinterpret_cast<VirtualQLabel::QLabel_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QLabel_SuperMouseMoveEvent(QLabel* self, QMouseEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::mouseMoveEvent(ev);
    } else
        qFatal("Error: Protected virtual method QLabel::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMouseMoveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_mousemoveevent_callback = reinterpret_cast<VirtualQLabel::QLabel_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QLabel_SuperMouseReleaseEvent(QLabel* self, QMouseEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::mouseReleaseEvent(ev);
    } else
        qFatal("Error: Protected virtual method QLabel::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMouseReleaseEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_mousereleaseevent_callback = reinterpret_cast<VirtualQLabel::QLabel_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QLabel_SuperContextMenuEvent(QLabel* self, QContextMenuEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::contextMenuEvent(ev);
    } else
        qFatal("Error: Protected virtual method QLabel::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnContextMenuEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_contextmenuevent_callback = reinterpret_cast<VirtualQLabel::QLabel_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QLabel_SuperFocusInEvent(QLabel* self, QFocusEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::focusInEvent(ev);
    } else
        qFatal("Error: Protected virtual method QLabel::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnFocusInEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_focusinevent_callback = reinterpret_cast<VirtualQLabel::QLabel_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QLabel_SuperFocusOutEvent(QLabel* self, QFocusEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::focusOutEvent(ev);
    } else
        qFatal("Error: Protected virtual method QLabel::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnFocusOutEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_focusoutevent_callback = reinterpret_cast<VirtualQLabel::QLabel_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
bool QLabel_SuperFocusNextPrevChild(QLabel* self, bool next) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->QLabel::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QLabel::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnFocusNextPrevChild(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_focusnextprevchild_callback = reinterpret_cast<VirtualQLabel::QLabel_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QLabel_InitStyleOption(const QLabel* self, QStyleOptionFrame* option) {
    auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self));
    if (vqlabel) {
        vqlabel->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QLabel::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperInitStyleOption(const QLabel* self, QStyleOptionFrame* option) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->QLabel::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QLabel::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnInitStyleOption(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_initstyleoption_callback = reinterpret_cast<VirtualQLabel::QLabel_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QLabel_DevType(const QLabel* self) {
    return self->devType();
}

// Base class handler implementation
int QLabel_SuperDevType(const QLabel* self) {
    return self->QLabel::devType();
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDevType(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_devtype_callback = reinterpret_cast<VirtualQLabel::QLabel_DevType_Callback>(slot);
}

// Derived class handler implementation
void QLabel_SetVisible(QLabel* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QLabel_SuperSetVisible(QLabel* self, bool visible) {
    self->QLabel::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnSetVisible(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_setvisible_callback = reinterpret_cast<VirtualQLabel::QLabel_SetVisible_Callback>(slot);
}

// Derived class handler implementation
bool QLabel_HasHeightForWidth(const QLabel* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QLabel_SuperHasHeightForWidth(const QLabel* self) {
    return self->QLabel::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnHasHeightForWidth(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_hasheightforwidth_callback = reinterpret_cast<VirtualQLabel::QLabel_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QLabel_PaintEngine(const QLabel* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QLabel_SuperPaintEngine(const QLabel* self) {
    return self->QLabel::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnPaintEngine(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_paintengine_callback = reinterpret_cast<VirtualQLabel::QLabel_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QLabel_MouseDoubleClickEvent(QLabel* self, QMouseEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperMouseDoubleClickEvent(QLabel* self, QMouseEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMouseDoubleClickEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_mousedoubleclickevent_callback = reinterpret_cast<VirtualQLabel::QLabel_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_WheelEvent(QLabel* self, QWheelEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperWheelEvent(QLabel* self, QWheelEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnWheelEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_wheelevent_callback = reinterpret_cast<VirtualQLabel::QLabel_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_KeyReleaseEvent(QLabel* self, QKeyEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperKeyReleaseEvent(QLabel* self, QKeyEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnKeyReleaseEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_keyreleaseevent_callback = reinterpret_cast<VirtualQLabel::QLabel_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_EnterEvent(QLabel* self, QEnterEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperEnterEvent(QLabel* self, QEnterEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnEnterEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_enterevent_callback = reinterpret_cast<VirtualQLabel::QLabel_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_LeaveEvent(QLabel* self, QEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperLeaveEvent(QLabel* self, QEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnLeaveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_leaveevent_callback = reinterpret_cast<VirtualQLabel::QLabel_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_MoveEvent(QLabel* self, QMoveEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperMoveEvent(QLabel* self, QMoveEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMoveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_moveevent_callback = reinterpret_cast<VirtualQLabel::QLabel_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_ResizeEvent(QLabel* self, QResizeEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperResizeEvent(QLabel* self, QResizeEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnResizeEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_resizeevent_callback = reinterpret_cast<VirtualQLabel::QLabel_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_CloseEvent(QLabel* self, QCloseEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperCloseEvent(QLabel* self, QCloseEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnCloseEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_closeevent_callback = reinterpret_cast<VirtualQLabel::QLabel_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_TabletEvent(QLabel* self, QTabletEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperTabletEvent(QLabel* self, QTabletEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnTabletEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_tabletevent_callback = reinterpret_cast<VirtualQLabel::QLabel_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_ActionEvent(QLabel* self, QActionEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperActionEvent(QLabel* self, QActionEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnActionEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_actionevent_callback = reinterpret_cast<VirtualQLabel::QLabel_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_DragEnterEvent(QLabel* self, QDragEnterEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperDragEnterEvent(QLabel* self, QDragEnterEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDragEnterEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_dragenterevent_callback = reinterpret_cast<VirtualQLabel::QLabel_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_DragMoveEvent(QLabel* self, QDragMoveEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperDragMoveEvent(QLabel* self, QDragMoveEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDragMoveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_dragmoveevent_callback = reinterpret_cast<VirtualQLabel::QLabel_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_DragLeaveEvent(QLabel* self, QDragLeaveEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperDragLeaveEvent(QLabel* self, QDragLeaveEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDragLeaveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_dragleaveevent_callback = reinterpret_cast<VirtualQLabel::QLabel_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_DropEvent(QLabel* self, QDropEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperDropEvent(QLabel* self, QDropEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDropEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_dropevent_callback = reinterpret_cast<VirtualQLabel::QLabel_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_ShowEvent(QLabel* self, QShowEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperShowEvent(QLabel* self, QShowEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnShowEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_showevent_callback = reinterpret_cast<VirtualQLabel::QLabel_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_HideEvent(QLabel* self, QHideEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperHideEvent(QLabel* self, QHideEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnHideEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_hideevent_callback = reinterpret_cast<VirtualQLabel::QLabel_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QLabel_NativeEvent(QLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        return vqlabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QLabel::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QLabel_SuperNativeEvent(QLabel* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->QLabel::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QLabel::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnNativeEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_nativeevent_callback = reinterpret_cast<VirtualQLabel::QLabel_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QLabel_Metric(const QLabel* self, int param1) {
    auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self));
    if (vqlabel) {
        return vqlabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QLabel::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QLabel_SuperMetric(const QLabel* self, int param1) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->QLabel::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QLabel::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMetric(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_metric_callback = reinterpret_cast<VirtualQLabel::QLabel_Metric_Callback>(slot);
}

// Derived class handler implementation
void QLabel_InitPainter(const QLabel* self, QPainter* painter) {
    auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self));
    if (vqlabel) {
        vqlabel->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QLabel::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperInitPainter(const QLabel* self, QPainter* painter) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->QLabel::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QLabel::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnInitPainter(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_initpainter_callback = reinterpret_cast<VirtualQLabel::QLabel_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QLabel_Redirected(const QLabel* self, QPoint* offset) {
    auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self));
    if (vqlabel) {
        return vqlabel->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QLabel::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QLabel_SuperRedirected(const QLabel* self, QPoint* offset) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->QLabel::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QLabel::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnRedirected(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_redirected_callback = reinterpret_cast<VirtualQLabel::QLabel_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QLabel_SharedPainter(const QLabel* self) {
    auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self));
    if (vqlabel) {
        return vqlabel->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QLabel::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QLabel_SuperSharedPainter(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->QLabel::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QLabel::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnSharedPainter(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_sharedpainter_callback = reinterpret_cast<VirtualQLabel::QLabel_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QLabel_InputMethodEvent(QLabel* self, QInputMethodEvent* param1) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QLabel::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperInputMethodEvent(QLabel* self, QInputMethodEvent* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QLabel::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnInputMethodEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_inputmethodevent_callback = reinterpret_cast<VirtualQLabel::QLabel_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QLabel_InputMethodQuery(const QLabel* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QLabel_SuperInputMethodQuery(const QLabel* self, int param1) {
    return new QVariant(self->QLabel::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnInputMethodQuery(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self)))
        vqlabel->qlabel_inputmethodquery_callback = reinterpret_cast<VirtualQLabel::QLabel_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QLabel_EventFilter(QLabel* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QLabel_SuperEventFilter(QLabel* self, QObject* watched, QEvent* event) {
    return self->QLabel::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnEventFilter(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_eventfilter_callback = reinterpret_cast<VirtualQLabel::QLabel_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QLabel_TimerEvent(QLabel* self, QTimerEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperTimerEvent(QLabel* self, QTimerEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnTimerEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_timerevent_callback = reinterpret_cast<VirtualQLabel::QLabel_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_ChildEvent(QLabel* self, QChildEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperChildEvent(QLabel* self, QChildEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnChildEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_childevent_callback = reinterpret_cast<VirtualQLabel::QLabel_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_CustomEvent(QLabel* self, QEvent* event) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QLabel::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperCustomEvent(QLabel* self, QEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QLabel::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnCustomEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_customevent_callback = reinterpret_cast<VirtualQLabel::QLabel_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QLabel_ConnectNotify(QLabel* self, const QMetaMethod* signal) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLabel::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperConnectNotify(QLabel* self, const QMetaMethod* signal) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLabel::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnConnectNotify(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_connectnotify_callback = reinterpret_cast<VirtualQLabel::QLabel_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QLabel_DisconnectNotify(QLabel* self, const QMetaMethod* signal) {
    auto* vqlabel = dynamic_cast<VirtualQLabel*>(self);
    if (vqlabel) {
        vqlabel->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QLabel::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QLabel_SuperDisconnectNotify(QLabel* self, const QMetaMethod* signal) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->QLabel::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QLabel::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDisconnectNotify(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self))
        vqlabel->qlabel_disconnectnotify_callback = reinterpret_cast<VirtualQLabel::QLabel_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QLabel_DrawFrame(QLabel* self, QPainter* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->VirtualQLabel::drawFrame(param1);
    } else
        qFatal("Error: Protected method QLabel::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QLabel_UpdateMicroFocus(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->VirtualQLabel::updateMicroFocus();
    } else
        qFatal("Error: Protected method QLabel::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QLabel_Create(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->VirtualQLabel::create();
    } else
        qFatal("Error: Protected method QLabel::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QLabel_Destroy(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->VirtualQLabel::destroy();
    } else
        qFatal("Error: Protected method QLabel::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLabel_FocusNextChild(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->VirtualQLabel::focusNextChild();
    } else
        qFatal("Error: Protected method QLabel::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLabel_FocusPreviousChild(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->VirtualQLabel::focusPreviousChild();
    } else
        qFatal("Error: Protected method QLabel::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QLabel_Sender(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->VirtualQLabel::sender();
    } else
        qFatal("Error: Protected method QLabel::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QLabel_SenderSignalIndex(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->VirtualQLabel::senderSignalIndex();
    } else
        qFatal("Error: Protected method QLabel::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QLabel_Receivers(const QLabel* self, const char* signal) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->VirtualQLabel::receivers(signal);
    } else
        qFatal("Error: Protected method QLabel::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QLabel_IsSignalConnected(const QLabel* self, const QMetaMethod* signal) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->VirtualQLabel::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QLabel::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QLabel_GetDecodedMetricF(const QLabel* self, int metricA, int metricB) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->VirtualQLabel::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QLabel::getDecodedMetricF called without a directly constructed type");
}

void QLabel_Delete(QLabel* self) {
    delete self;
}
