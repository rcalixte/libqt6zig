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
#include <QFrame>
#include <QHideEvent>
#include <QImage>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMargins>
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
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsciscintillabase.h>
#include "libqsciscintillabase.h"
#include "libqsciscintillabase.hxx"

QsciScintillaBase* QsciScintillaBase_new(QWidget* parent) {
    return new VirtualQsciScintillaBase(parent);
}

QsciScintillaBase* QsciScintillaBase_new2() {
    return new VirtualQsciScintillaBase();
}

QMetaObject* QsciScintillaBase_MetaObject(const QsciScintillaBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciScintillaBase_Metacast(QsciScintillaBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciScintillaBase_Metacall(QsciScintillaBase* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciScintillaBase_Tr(const char* s) {
    auto _ret = QsciScintillaBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QsciScintillaBase* QsciScintillaBase_Pool() {
    return QsciScintillaBase::pool();
}

void QsciScintillaBase_ReplaceHorizontalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
    self->replaceHorizontalScrollBar(scrollBar);
}

void QsciScintillaBase_ReplaceVerticalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
    self->replaceVerticalScrollBar(scrollBar);
}

long QsciScintillaBase_SendScintilla(const QsciScintillaBase* self, unsigned int msg) {
    return self->SendScintilla(static_cast<unsigned int>(msg));
}

long QsciScintillaBase_SendScintilla2(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, void* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla3(const QsciScintillaBase* self, unsigned int msg, uintptr_t wParam, const char* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<uintptr_t>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla4(const QsciScintillaBase* self, unsigned int msg, const char* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), lParam);
}

long QsciScintillaBase_SendScintilla5(const QsciScintillaBase* self, unsigned int msg, const char* wParam, const char* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), wParam, lParam);
}

long QsciScintillaBase_SendScintilla6(const QsciScintillaBase* self, unsigned int msg, long wParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(wParam));
}

long QsciScintillaBase_SendScintilla7(const QsciScintillaBase* self, unsigned int msg, int wParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<int>(wParam));
}

long QsciScintillaBase_SendScintilla8(const QsciScintillaBase* self, unsigned int msg, long cpMin, long cpMax, char* lpstrText) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(cpMin), static_cast<long>(cpMax), lpstrText);
}

long QsciScintillaBase_SendScintilla9(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, const QColor* col) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *col);
}

long QsciScintillaBase_SendScintilla10(const QsciScintillaBase* self, unsigned int msg, const QColor* col) {
    return self->SendScintilla(static_cast<unsigned int>(msg), *col);
}

long QsciScintillaBase_SendScintilla11(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPainter* hdc, const QRect* rc, long cpMin, long cpMax) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), hdc, *rc, static_cast<long>(cpMin), static_cast<long>(cpMax));
}

long QsciScintillaBase_SendScintilla12(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, const QPixmap* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

long QsciScintillaBase_SendScintilla13(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, const QImage* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

void* QsciScintillaBase_SendScintillaPtrResult(const QsciScintillaBase* self, unsigned int msg) {
    return self->SendScintillaPtrResult(static_cast<unsigned int>(msg));
}

int QsciScintillaBase_CommandKey(int qt_key, int* modifiers) {
    return QsciScintillaBase::commandKey(static_cast<int>(qt_key), static_cast<int&>(*modifiers));
}

void QsciScintillaBase_QSCN_SELCHANGED(QsciScintillaBase* self, bool yes) {
    self->QSCN_SELCHANGED(yes);
}

void QsciScintillaBase_Connect_QSCN_SELCHANGED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, bool) = reinterpret_cast<void (*)(QsciScintillaBase*, bool)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(bool)>(&QsciScintillaBase::QSCN_SELCHANGED),
                               [self, slotFunc](bool yes) {
                                   bool sigval1 = yes;
                                   slotFunc(self, sigval1);
                               });
}

void QsciScintillaBase_SCN_AUTOCCANCELLED(QsciScintillaBase* self) {
    self->SCN_AUTOCCANCELLED();
}

void QsciScintillaBase_Connect_SCN_AUTOCCANCELLED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_AUTOCCANCELLED),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QsciScintillaBase_SCN_AUTOCCHARDELETED(QsciScintillaBase* self) {
    self->SCN_AUTOCCHARDELETED();
}

void QsciScintillaBase_Connect_SCN_AUTOCCHARDELETED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_AUTOCCHARDELETED),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QsciScintillaBase_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
    self->SCN_AUTOCCOMPLETED(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_Connect_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, const char*, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, const char*, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_AUTOCCOMPLETED),
                               [self, slotFunc](const char* selection, int position, int ch, int method) {
                                   const char* sigval1 = (const char*)selection;
                                   int sigval2 = position;
                                   int sigval3 = ch;
                                   int sigval4 = method;
                                   slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                               });
}

void QsciScintillaBase_SCN_AUTOCSELECTION(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
    self->SCN_AUTOCSELECTION(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_Connect_SCN_AUTOCSELECTION(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, const char*, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, const char*, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_AUTOCSELECTION),
                               [self, slotFunc](const char* selection, int position, int ch, int method) {
                                   const char* sigval1 = (const char*)selection;
                                   int sigval2 = position;
                                   int sigval3 = ch;
                                   int sigval4 = method;
                                   slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                               });
}

void QsciScintillaBase_SCN_AUTOCSELECTION2(QsciScintillaBase* self, const char* selection, int position) {
    self->SCN_AUTOCSELECTION(selection, static_cast<int>(position));
}

void QsciScintillaBase_Connect_SCN_AUTOCSELECTION2(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, const char*, int) = reinterpret_cast<void (*)(QsciScintillaBase*, const char*, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(const char*, int)>(&QsciScintillaBase::SCN_AUTOCSELECTION),
                               [self, slotFunc](const char* selection, int position) {
                                   const char* sigval1 = (const char*)selection;
                                   int sigval2 = position;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, const char* selection, int id, int position) {
    self->SCN_AUTOCSELECTIONCHANGE(selection, static_cast<int>(id), static_cast<int>(position));
}

void QsciScintillaBase_Connect_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, const char*, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, const char*, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(const char*, int, int)>(&QsciScintillaBase::SCN_AUTOCSELECTIONCHANGE),
                               [self, slotFunc](const char* selection, int id, int position) {
                                   const char* sigval1 = (const char*)selection;
                                   int sigval2 = id;
                                   int sigval3 = position;
                                   slotFunc(self, sigval1, sigval2, sigval3);
                               });
}

void QsciScintillaBase_SCEN_CHANGE(QsciScintillaBase* self) {
    self->SCEN_CHANGE();
}

void QsciScintillaBase_Connect_SCEN_CHANGE(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCEN_CHANGE),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QsciScintillaBase_SCN_CALLTIPCLICK(QsciScintillaBase* self, int direction) {
    self->SCN_CALLTIPCLICK(static_cast<int>(direction));
}

void QsciScintillaBase_Connect_SCN_CALLTIPCLICK(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_CALLTIPCLICK),
                               [self, slotFunc](int direction) {
                                   int sigval1 = direction;
                                   slotFunc(self, sigval1);
                               });
}

void QsciScintillaBase_SCN_CHARADDED(QsciScintillaBase* self, int charadded) {
    self->SCN_CHARADDED(static_cast<int>(charadded));
}

void QsciScintillaBase_Connect_SCN_CHARADDED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_CHARADDED),
                               [self, slotFunc](int charadded) {
                                   int sigval1 = charadded;
                                   slotFunc(self, sigval1);
                               });
}

void QsciScintillaBase_SCN_DOUBLECLICK(QsciScintillaBase* self, int position, int line, int modifiers) {
    self->SCN_DOUBLECLICK(static_cast<int>(position), static_cast<int>(line), static_cast<int>(modifiers));
}

void QsciScintillaBase_Connect_SCN_DOUBLECLICK(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DOUBLECLICK),
                               [self, slotFunc](int position, int line, int modifiers) {
                                   int sigval1 = position;
                                   int sigval2 = line;
                                   int sigval3 = modifiers;
                                   slotFunc(self, sigval1, sigval2, sigval3);
                               });
}

void QsciScintillaBase_SCN_DWELLEND(QsciScintillaBase* self, int position, int x, int y) {
    self->SCN_DWELLEND(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_Connect_SCN_DWELLEND(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DWELLEND),
                               [self, slotFunc](int position, int x, int y) {
                                   int sigval1 = position;
                                   int sigval2 = x;
                                   int sigval3 = y;
                                   slotFunc(self, sigval1, sigval2, sigval3);
                               });
}

void QsciScintillaBase_SCN_DWELLSTART(QsciScintillaBase* self, int position, int x, int y) {
    self->SCN_DWELLSTART(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_Connect_SCN_DWELLSTART(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_DWELLSTART),
                               [self, slotFunc](int position, int x, int y) {
                                   int sigval1 = position;
                                   int sigval2 = x;
                                   int sigval3 = y;
                                   slotFunc(self, sigval1, sigval2, sigval3);
                               });
}

void QsciScintillaBase_SCN_FOCUSIN(QsciScintillaBase* self) {
    self->SCN_FOCUSIN();
}

void QsciScintillaBase_Connect_SCN_FOCUSIN(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_FOCUSIN),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QsciScintillaBase_SCN_FOCUSOUT(QsciScintillaBase* self) {
    self->SCN_FOCUSOUT();
}

void QsciScintillaBase_Connect_SCN_FOCUSOUT(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_FOCUSOUT),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QsciScintillaBase_SCN_HOTSPOTCLICK(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_HOTSPOTCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_Connect_SCN_HOTSPOTCLICK(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTCLICK),
                               [self, slotFunc](int position, int modifiers) {
                                   int sigval1 = position;
                                   int sigval2 = modifiers;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_HOTSPOTDOUBLECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_Connect_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTDOUBLECLICK),
                               [self, slotFunc](int position, int modifiers) {
                                   int sigval1 = position;
                                   int sigval2 = modifiers;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_HOTSPOTRELEASECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_Connect_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_HOTSPOTRELEASECLICK),
                               [self, slotFunc](int position, int modifiers) {
                                   int sigval1 = position;
                                   int sigval2 = modifiers;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QsciScintillaBase_SCN_INDICATORCLICK(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_INDICATORCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_Connect_SCN_INDICATORCLICK(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_INDICATORCLICK),
                               [self, slotFunc](int position, int modifiers) {
                                   int sigval1 = position;
                                   int sigval2 = modifiers;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QsciScintillaBase_SCN_INDICATORRELEASE(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_INDICATORRELEASE(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_Connect_SCN_INDICATORRELEASE(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_INDICATORRELEASE),
                               [self, slotFunc](int position, int modifiers) {
                                   int sigval1 = position;
                                   int sigval2 = modifiers;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QsciScintillaBase_SCN_MACRORECORD(QsciScintillaBase* self, unsigned int param1, unsigned long param2, void* param3) {
    self->SCN_MACRORECORD(static_cast<unsigned int>(param1), static_cast<unsigned long>(param2), param3);
}

void QsciScintillaBase_Connect_SCN_MACRORECORD(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, unsigned int, unsigned long, void*) = reinterpret_cast<void (*)(QsciScintillaBase*, unsigned int, unsigned long, void*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(unsigned int, unsigned long, void*)>(&QsciScintillaBase::SCN_MACRORECORD),
                               [self, slotFunc](unsigned int param1, unsigned long param2, void* param3) {
                                   unsigned int sigval1 = param1;
                                   unsigned long sigval2 = param2;
                                   void* sigval3 = param3;
                                   slotFunc(self, sigval1, sigval2, sigval3);
                               });
}

void QsciScintillaBase_SCN_MARGINCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
    self->SCN_MARGINCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_Connect_SCN_MARGINCLICK(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_MARGINCLICK),
                               [self, slotFunc](int position, int modifiers, int margin) {
                                   int sigval1 = position;
                                   int sigval2 = modifiers;
                                   int sigval3 = margin;
                                   slotFunc(self, sigval1, sigval2, sigval3);
                               });
}

void QsciScintillaBase_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
    self->SCN_MARGINRIGHTCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_Connect_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int, int)>(&QsciScintillaBase::SCN_MARGINRIGHTCLICK),
                               [self, slotFunc](int position, int modifiers, int margin) {
                                   int sigval1 = position;
                                   int sigval2 = modifiers;
                                   int sigval3 = margin;
                                   slotFunc(self, sigval1, sigval2, sigval3);
                               });
}

void QsciScintillaBase_SCN_MODIFIED(QsciScintillaBase* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    self->SCN_MODIFIED(static_cast<int>(param1), static_cast<int>(param2), param3, static_cast<int>(param4), static_cast<int>(param5), static_cast<int>(param6), static_cast<int>(param7), static_cast<int>(param8), static_cast<int>(param9), static_cast<int>(param10));
}

void QsciScintillaBase_Connect_SCN_MODIFIED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int, const char*, int, int, int, int, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int, const char*, int, int, int, int, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int, const char*, int, int, int, int, int, int, int)>(&QsciScintillaBase::SCN_MODIFIED),
                               [self, slotFunc](int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
                                   int sigval1 = param1;
                                   int sigval2 = param2;
                                   const char* sigval3 = (const char*)param3;
                                   int sigval4 = param4;
                                   int sigval5 = param5;
                                   int sigval6 = param6;
                                   int sigval7 = param7;
                                   int sigval8 = param8;
                                   int sigval9 = param9;
                                   int sigval10 = param10;
                                   slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5, sigval6, sigval7, sigval8, sigval9, sigval10);
                               });
}

void QsciScintillaBase_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self) {
    self->SCN_MODIFYATTEMPTRO();
}

void QsciScintillaBase_Connect_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_MODIFYATTEMPTRO),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QsciScintillaBase_SCN_NEEDSHOWN(QsciScintillaBase* self, int param1, int param2) {
    self->SCN_NEEDSHOWN(static_cast<int>(param1), static_cast<int>(param2));
}

void QsciScintillaBase_Connect_SCN_NEEDSHOWN(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int, int)>(&QsciScintillaBase::SCN_NEEDSHOWN),
                               [self, slotFunc](int param1, int param2) {
                                   int sigval1 = param1;
                                   int sigval2 = param2;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QsciScintillaBase_SCN_PAINTED(QsciScintillaBase* self) {
    self->SCN_PAINTED();
}

void QsciScintillaBase_Connect_SCN_PAINTED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_PAINTED),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QsciScintillaBase_SCN_SAVEPOINTLEFT(QsciScintillaBase* self) {
    self->SCN_SAVEPOINTLEFT();
}

void QsciScintillaBase_Connect_SCN_SAVEPOINTLEFT(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_SAVEPOINTLEFT),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QsciScintillaBase_SCN_SAVEPOINTREACHED(QsciScintillaBase* self) {
    self->SCN_SAVEPOINTREACHED();
}

void QsciScintillaBase_Connect_SCN_SAVEPOINTREACHED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_SAVEPOINTREACHED),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

void QsciScintillaBase_SCN_STYLENEEDED(QsciScintillaBase* self, int position) {
    self->SCN_STYLENEEDED(static_cast<int>(position));
}

void QsciScintillaBase_Connect_SCN_STYLENEEDED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_STYLENEEDED),
                               [self, slotFunc](int position) {
                                   int sigval1 = position;
                                   slotFunc(self, sigval1);
                               });
}

void QsciScintillaBase_SCN_URIDROPPED(QsciScintillaBase* self, const QUrl* url) {
    self->SCN_URIDROPPED(*url);
}

void QsciScintillaBase_Connect_SCN_URIDROPPED(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, QUrl*) = reinterpret_cast<void (*)(QsciScintillaBase*, QUrl*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(const QUrl&)>(&QsciScintillaBase::SCN_URIDROPPED),
                               [self, slotFunc](const QUrl& url) {
                                   const QUrl& url_ret = url;
                                   // Cast returned reference into pointer
                                   QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                                   slotFunc(self, sigval1);
                               });
}

void QsciScintillaBase_SCN_UPDATEUI(QsciScintillaBase* self, int updated) {
    self->SCN_UPDATEUI(static_cast<int>(updated));
}

void QsciScintillaBase_Connect_SCN_UPDATEUI(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, int) = reinterpret_cast<void (*)(QsciScintillaBase*, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(int)>(&QsciScintillaBase::SCN_UPDATEUI),
                               [self, slotFunc](int updated) {
                                   int sigval1 = updated;
                                   slotFunc(self, sigval1);
                               });
}

void QsciScintillaBase_SCN_USERLISTSELECTION(QsciScintillaBase* self, const char* selection, int id, int ch, int method, int position) {
    self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method), static_cast<int>(position));
}

void QsciScintillaBase_Connect_SCN_USERLISTSELECTION(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, const char*, int, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, const char*, int, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(const char*, int, int, int, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION),
                               [self, slotFunc](const char* selection, int id, int ch, int method, int position) {
                                   const char* sigval1 = (const char*)selection;
                                   int sigval2 = id;
                                   int sigval3 = ch;
                                   int sigval4 = method;
                                   int sigval5 = position;
                                   slotFunc(self, sigval1, sigval2, sigval3, sigval4, sigval5);
                               });
}

void QsciScintillaBase_SCN_USERLISTSELECTION2(QsciScintillaBase* self, const char* selection, int id, int ch, int method) {
    self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_Connect_SCN_USERLISTSELECTION2(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, const char*, int, int, int) = reinterpret_cast<void (*)(QsciScintillaBase*, const char*, int, int, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(const char*, int, int, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION),
                               [self, slotFunc](const char* selection, int id, int ch, int method) {
                                   const char* sigval1 = (const char*)selection;
                                   int sigval2 = id;
                                   int sigval3 = ch;
                                   int sigval4 = method;
                                   slotFunc(self, sigval1, sigval2, sigval3, sigval4);
                               });
}

void QsciScintillaBase_SCN_USERLISTSELECTION3(QsciScintillaBase* self, const char* selection, int id) {
    self->SCN_USERLISTSELECTION(selection, static_cast<int>(id));
}

void QsciScintillaBase_Connect_SCN_USERLISTSELECTION3(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*, const char*, int) = reinterpret_cast<void (*)(QsciScintillaBase*, const char*, int)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)(const char*, int)>(&QsciScintillaBase::SCN_USERLISTSELECTION),
                               [self, slotFunc](const char* selection, int id) {
                                   const char* sigval1 = (const char*)selection;
                                   int sigval2 = id;
                                   slotFunc(self, sigval1, sigval2);
                               });
}

void QsciScintillaBase_SCN_ZOOM(QsciScintillaBase* self) {
    self->SCN_ZOOM();
}

void QsciScintillaBase_Connect_SCN_ZOOM(QsciScintillaBase* self, intptr_t slot) {
    void (*slotFunc)(QsciScintillaBase*) = reinterpret_cast<void (*)(QsciScintillaBase*)>(slot);
    QsciScintillaBase::connect(self,
                               static_cast<void (QsciScintillaBase::*)()>(&QsciScintillaBase::SCN_ZOOM),
                               [self, slotFunc]() {
                                   slotFunc(self);
                               });
}

bool QsciScintillaBase_CanInsertFromMimeData(const QsciScintillaBase* self, const QMimeData* source) {
    auto* vqsciscintillabase = dynamic_cast<const VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        return vqsciscintillabase->canInsertFromMimeData(source);
    }
    qFatal("Error: Protected method QsciScintillaBase::canInsertFromMimeData called without a directly constructed type");
}

libqt_string QsciScintillaBase_FromMimeData(const QsciScintillaBase* self, const QMimeData* source, bool* rectangular) {
    auto* vqsciscintillabase = dynamic_cast<const VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        QByteArray _qb = vqsciscintillabase->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    }
    qFatal("Error: Protected method QsciScintillaBase::fromMimeData called without a directly constructed type");
}

QMimeData* QsciScintillaBase_ToMimeData(const QsciScintillaBase* self, const libqt_string text, bool rectangular) {
    QByteArray text_QByteArray(text.data, text.len);
    auto* vqsciscintillabase = dynamic_cast<const VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        return vqsciscintillabase->toMimeData(text_QByteArray, rectangular);
    }
    qFatal("Error: Protected method QsciScintillaBase::toMimeData called without a directly constructed type");
}

void QsciScintillaBase_ChangeEvent(QsciScintillaBase* self, QEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->changeEvent(e);
    }
}

void QsciScintillaBase_ContextMenuEvent(QsciScintillaBase* self, QContextMenuEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->contextMenuEvent(e);
    }
}

void QsciScintillaBase_DragEnterEvent(QsciScintillaBase* self, QDragEnterEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->dragEnterEvent(e);
    }
}

void QsciScintillaBase_DragLeaveEvent(QsciScintillaBase* self, QDragLeaveEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->dragLeaveEvent(e);
    }
}

void QsciScintillaBase_DragMoveEvent(QsciScintillaBase* self, QDragMoveEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->dragMoveEvent(e);
    }
}

void QsciScintillaBase_DropEvent(QsciScintillaBase* self, QDropEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->dropEvent(e);
    }
}

void QsciScintillaBase_FocusInEvent(QsciScintillaBase* self, QFocusEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->focusInEvent(e);
    }
}

void QsciScintillaBase_FocusOutEvent(QsciScintillaBase* self, QFocusEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->focusOutEvent(e);
    }
}

bool QsciScintillaBase_FocusNextPrevChild(QsciScintillaBase* self, bool next) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        return vqsciscintillabase->focusNextPrevChild(next);
    }
    qFatal("Error: Protected method QsciScintillaBase::focusNextPrevChild called without a directly constructed type");
}

void QsciScintillaBase_KeyPressEvent(QsciScintillaBase* self, QKeyEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->keyPressEvent(e);
    }
}

void QsciScintillaBase_InputMethodEvent(QsciScintillaBase* self, QInputMethodEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->inputMethodEvent(event);
    }
}

QVariant* QsciScintillaBase_InputMethodQuery(const QsciScintillaBase* self, int query) {
    auto* vqsciscintillabase = dynamic_cast<const VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        return new QVariant(vqsciscintillabase->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
    qFatal("Error: Protected method QsciScintillaBase::inputMethodQuery called without a directly constructed type");
}

void QsciScintillaBase_MouseDoubleClickEvent(QsciScintillaBase* self, QMouseEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->mouseDoubleClickEvent(e);
    }
}

void QsciScintillaBase_MouseMoveEvent(QsciScintillaBase* self, QMouseEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->mouseMoveEvent(e);
    }
}

void QsciScintillaBase_MousePressEvent(QsciScintillaBase* self, QMouseEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->mousePressEvent(e);
    }
}

void QsciScintillaBase_MouseReleaseEvent(QsciScintillaBase* self, QMouseEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->mouseReleaseEvent(e);
    }
}

void QsciScintillaBase_PaintEvent(QsciScintillaBase* self, QPaintEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->paintEvent(e);
    }
}

void QsciScintillaBase_ResizeEvent(QsciScintillaBase* self, QResizeEvent* e) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->resizeEvent(e);
    }
}

void QsciScintillaBase_ScrollContentsBy(QsciScintillaBase* self, int dx, int dy) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

libqt_string QsciScintillaBase_Tr2(const char* s, const char* c) {
    auto _ret = QsciScintillaBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciScintillaBase_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciScintillaBase::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

long QsciScintillaBase_SendScintilla22(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam));
}

long QsciScintillaBase_SendScintilla32(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, long lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), static_cast<long>(lParam));
}

// Base class handler implementation
QMetaObject* QsciScintillaBase_SuperMetaObject(const QsciScintillaBase* self) {
    return (QMetaObject*)self->QsciScintillaBase::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMetaObject(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_metaobject_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciScintillaBase_SuperMetacast(QsciScintillaBase* self, const char* param1) {
    return self->QsciScintillaBase::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMetacast(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_metacast_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciScintillaBase_SuperMetacall(QsciScintillaBase* self, int param1, int param2, void** param3) {
    return self->QsciScintillaBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMetacall(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_metacall_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QsciScintillaBase_SuperCanInsertFromMimeData(const QsciScintillaBase* self, const QMimeData* source) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->QsciScintillaBase::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnCanInsertFromMimeData(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_caninsertfrommimedata_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_CanInsertFromMimeData_Callback>(slot);
}

// Base class handler implementation
libqt_string QsciScintillaBase_SuperFromMimeData(const QsciScintillaBase* self, const QMimeData* source, bool* rectangular) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        QByteArray _qb = vqsciscintillabase->QsciScintillaBase::fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::fromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFromMimeData(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_frommimedata_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FromMimeData_Callback>(slot);
}

// Base class handler implementation
QMimeData* QsciScintillaBase_SuperToMimeData(const QsciScintillaBase* self, const libqt_string text, bool rectangular) {
    QByteArray text_QByteArray(text.data, text.len);
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->QsciScintillaBase::toMimeData(text_QByteArray, rectangular);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::toMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnToMimeData(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_tomimedata_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ToMimeData_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperChangeEvent(QsciScintillaBase* self, QEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnChangeEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_changeevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperContextMenuEvent(QsciScintillaBase* self, QContextMenuEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnContextMenuEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_contextmenuevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperDragEnterEvent(QsciScintillaBase* self, QDragEnterEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDragEnterEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_dragenterevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperDragLeaveEvent(QsciScintillaBase* self, QDragLeaveEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDragLeaveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_dragleaveevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperDragMoveEvent(QsciScintillaBase* self, QDragMoveEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDragMoveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_dragmoveevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperDropEvent(QsciScintillaBase* self, QDropEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDropEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_dropevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DropEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperFocusInEvent(QsciScintillaBase* self, QFocusEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFocusInEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_focusinevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperFocusOutEvent(QsciScintillaBase* self, QFocusEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFocusOutEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_focusoutevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
bool QsciScintillaBase_SuperFocusNextPrevChild(QsciScintillaBase* self, bool next) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->QsciScintillaBase::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFocusNextPrevChild(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_focusnextprevchild_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FocusNextPrevChild_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperKeyPressEvent(QsciScintillaBase* self, QKeyEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnKeyPressEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_keypressevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperInputMethodEvent(QsciScintillaBase* self, QInputMethodEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnInputMethodEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_inputmethodevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
QVariant* QsciScintillaBase_SuperInputMethodQuery(const QsciScintillaBase* self, int query) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        return new QVariant(vqsciscintillabase->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    qFatal("Error: Protected virtual method QsciScintillaBase::inputMethodQuery called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnInputMethodQuery(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_inputmethodquery_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperMouseDoubleClickEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMouseDoubleClickEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_mousedoubleclickevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MouseDoubleClickEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperMouseMoveEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMouseMoveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_mousemoveevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperMousePressEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMousePressEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_mousepressevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperMouseReleaseEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMouseReleaseEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_mousereleaseevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperPaintEvent(QsciScintillaBase* self, QPaintEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnPaintEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_paintevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperResizeEvent(QsciScintillaBase* self, QResizeEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnResizeEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_resizeevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QsciScintillaBase_SuperScrollContentsBy(QsciScintillaBase* self, int dx, int dy) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnScrollContentsBy(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_scrollcontentsby_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
QSize* QsciScintillaBase_MinimumSizeHint(const QsciScintillaBase* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QsciScintillaBase_SuperMinimumSizeHint(const QsciScintillaBase* self) {
    return new QSize(self->QsciScintillaBase::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMinimumSizeHint(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_minimumsizehint_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QsciScintillaBase_SizeHint(const QsciScintillaBase* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QsciScintillaBase_SuperSizeHint(const QsciScintillaBase* self) {
    return new QSize(self->QsciScintillaBase::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSizeHint(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_sizehint_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_SetupViewport(QsciScintillaBase* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QsciScintillaBase_SuperSetupViewport(QsciScintillaBase* self, QWidget* viewport) {
    self->QsciScintillaBase::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSetupViewport(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_setupviewport_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintillaBase_EventFilter(QsciScintillaBase* self, QObject* param1, QEvent* param2) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        return vqsciscintillabase->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciScintillaBase_SuperEventFilter(QsciScintillaBase* self, QObject* param1, QEvent* param2) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->QsciScintillaBase::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnEventFilter(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_eventfilter_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintillaBase_Event(QsciScintillaBase* self, QEvent* param1) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        return vqsciscintillabase->event(param1);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciScintillaBase_SuperEvent(QsciScintillaBase* self, QEvent* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->QsciScintillaBase::event(param1);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_event_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintillaBase_ViewportEvent(QsciScintillaBase* self, QEvent* param1) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        return vqsciscintillabase->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciScintillaBase_SuperViewportEvent(QsciScintillaBase* self, QEvent* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->QsciScintillaBase::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnViewportEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_viewportevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_WheelEvent(QsciScintillaBase* self, QWheelEvent* param1) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperWheelEvent(QsciScintillaBase* self, QWheelEvent* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnWheelEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_wheelevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QsciScintillaBase_ViewportSizeHint(const QsciScintillaBase* self) {
    return new QSize((self->*&VirtualQsciScintillaBase::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QsciScintillaBase_SuperViewportSizeHint(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        return new QSize(vqsciscintillabase->viewportSizeHint());
    qFatal("Error: Protected virtual method QsciScintillaBase::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnViewportSizeHint(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_viewportsizehint_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_InitStyleOption(const QsciScintillaBase* self, QStyleOptionFrame* option) {
    auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self));
    if (vqsciscintillabase) {
        vqsciscintillabase->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperInitStyleOption(const QsciScintillaBase* self, QStyleOptionFrame* option) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->QsciScintillaBase::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnInitStyleOption(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_initstyleoption_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QsciScintillaBase_DevType(const QsciScintillaBase* self) {
    return self->devType();
}

// Base class handler implementation
int QsciScintillaBase_SuperDevType(const QsciScintillaBase* self) {
    return self->QsciScintillaBase::devType();
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDevType(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_devtype_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DevType_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_SetVisible(QsciScintillaBase* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QsciScintillaBase_SuperSetVisible(QsciScintillaBase* self, bool visible) {
    self->QsciScintillaBase::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSetVisible(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_setvisible_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QsciScintillaBase_HeightForWidth(const QsciScintillaBase* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QsciScintillaBase_SuperHeightForWidth(const QsciScintillaBase* self, int param1) {
    return self->QsciScintillaBase::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnHeightForWidth(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_heightforwidth_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintillaBase_HasHeightForWidth(const QsciScintillaBase* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QsciScintillaBase_SuperHasHeightForWidth(const QsciScintillaBase* self) {
    return self->QsciScintillaBase::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnHasHeightForWidth(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_hasheightforwidth_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QsciScintillaBase_PaintEngine(const QsciScintillaBase* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QsciScintillaBase_SuperPaintEngine(const QsciScintillaBase* self) {
    return self->QsciScintillaBase::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnPaintEngine(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_paintengine_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_KeyReleaseEvent(QsciScintillaBase* self, QKeyEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperKeyReleaseEvent(QsciScintillaBase* self, QKeyEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnKeyReleaseEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_keyreleaseevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_EnterEvent(QsciScintillaBase* self, QEnterEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperEnterEvent(QsciScintillaBase* self, QEnterEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnEnterEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_enterevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_LeaveEvent(QsciScintillaBase* self, QEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperLeaveEvent(QsciScintillaBase* self, QEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnLeaveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_leaveevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_MoveEvent(QsciScintillaBase* self, QMoveEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperMoveEvent(QsciScintillaBase* self, QMoveEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMoveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_moveevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_CloseEvent(QsciScintillaBase* self, QCloseEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperCloseEvent(QsciScintillaBase* self, QCloseEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnCloseEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_closeevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_TabletEvent(QsciScintillaBase* self, QTabletEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperTabletEvent(QsciScintillaBase* self, QTabletEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnTabletEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_tabletevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_ActionEvent(QsciScintillaBase* self, QActionEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperActionEvent(QsciScintillaBase* self, QActionEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnActionEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_actionevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_ShowEvent(QsciScintillaBase* self, QShowEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperShowEvent(QsciScintillaBase* self, QShowEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnShowEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_showevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_HideEvent(QsciScintillaBase* self, QHideEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperHideEvent(QsciScintillaBase* self, QHideEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnHideEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_hideevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QsciScintillaBase_NativeEvent(QsciScintillaBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        return vqsciscintillabase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QsciScintillaBase_SuperNativeEvent(QsciScintillaBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->QsciScintillaBase::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnNativeEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_nativeevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QsciScintillaBase_Metric(const QsciScintillaBase* self, int param1) {
    auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self));
    if (vqsciscintillabase) {
        return vqsciscintillabase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QsciScintillaBase_SuperMetric(const QsciScintillaBase* self, int param1) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->QsciScintillaBase::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMetric(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_metric_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Metric_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_InitPainter(const QsciScintillaBase* self, QPainter* painter) {
    auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self));
    if (vqsciscintillabase) {
        vqsciscintillabase->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperInitPainter(const QsciScintillaBase* self, QPainter* painter) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->QsciScintillaBase::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnInitPainter(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_initpainter_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QsciScintillaBase_Redirected(const QsciScintillaBase* self, QPoint* offset) {
    auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self));
    if (vqsciscintillabase) {
        return vqsciscintillabase->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QsciScintillaBase_SuperRedirected(const QsciScintillaBase* self, QPoint* offset) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->QsciScintillaBase::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnRedirected(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_redirected_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QsciScintillaBase_SharedPainter(const QsciScintillaBase* self) {
    auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self));
    if (vqsciscintillabase) {
        return vqsciscintillabase->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QsciScintillaBase_SuperSharedPainter(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->QsciScintillaBase::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSharedPainter(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        vqsciscintillabase->qsciscintillabase_sharedpainter_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_TimerEvent(QsciScintillaBase* self, QTimerEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperTimerEvent(QsciScintillaBase* self, QTimerEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnTimerEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_timerevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_ChildEvent(QsciScintillaBase* self, QChildEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperChildEvent(QsciScintillaBase* self, QChildEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnChildEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_childevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_CustomEvent(QsciScintillaBase* self, QEvent* event) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperCustomEvent(QsciScintillaBase* self, QEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnCustomEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_customevent_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_ConnectNotify(QsciScintillaBase* self, const QMetaMethod* signal) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperConnectNotify(QsciScintillaBase* self, const QMetaMethod* signal) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnConnectNotify(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_connectnotify_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciScintillaBase_DisconnectNotify(QsciScintillaBase* self, const QMetaMethod* signal) {
    auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self);
    if (vqsciscintillabase) {
        vqsciscintillabase->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciScintillaBase::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciScintillaBase_SuperDisconnectNotify(QsciScintillaBase* self, const QMetaMethod* signal) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->QsciScintillaBase::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciScintillaBase::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDisconnectNotify(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self))
        vqsciscintillabase->qsciscintillabase_disconnectnotify_callback = reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QsciScintillaBase_SetScrollBars(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->VirtualQsciScintillaBase::setScrollBars();
    } else
        qFatal("Error: Protected method QsciScintillaBase::setScrollBars called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciScintillaBase_TextAsBytes(const QsciScintillaBase* self, const libqt_string text) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        QString text_QString = QString::fromUtf8(text.data, text.len);
        QByteArray _qb = vqsciscintillabase->VirtualQsciScintillaBase::textAsBytes(text_QString);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc(_str.len));
        memcpy((void*)_str.data, _qb.data(), _str.len);
        return _str;
    } else
        qFatal("Error: Protected method QsciScintillaBase::textAsBytes called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_string QsciScintillaBase_BytesAsText(const QsciScintillaBase* self, const char* bytes, int size) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        auto _ret = vqsciscintillabase->VirtualQsciScintillaBase::bytesAsText(bytes, static_cast<int>(size));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else
        qFatal("Error: Protected method QsciScintillaBase::bytesAsText called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciScintillaBase_ContextMenuNeeded(const QsciScintillaBase* self, int x, int y) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->VirtualQsciScintillaBase::contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    } else
        qFatal("Error: Protected method QsciScintillaBase::contextMenuNeeded called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintillaBase_SetViewportMargins(QsciScintillaBase* self, int left, int top, int right, int bottom) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->VirtualQsciScintillaBase::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QsciScintillaBase::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QsciScintillaBase_ViewportMargins(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self)))
        return new QMargins(vqsciscintillabase->viewportMargins());
    qFatal("Error: Protected method QsciScintillaBase::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintillaBase_DrawFrame(QsciScintillaBase* self, QPainter* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->VirtualQsciScintillaBase::drawFrame(param1);
    } else
        qFatal("Error: Protected method QsciScintillaBase::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintillaBase_UpdateMicroFocus(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->VirtualQsciScintillaBase::updateMicroFocus();
    } else
        qFatal("Error: Protected method QsciScintillaBase::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintillaBase_Create(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->VirtualQsciScintillaBase::create();
    } else
        qFatal("Error: Protected method QsciScintillaBase::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QsciScintillaBase_Destroy(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->VirtualQsciScintillaBase::destroy();
    } else
        qFatal("Error: Protected method QsciScintillaBase::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciScintillaBase_FocusNextChild(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->VirtualQsciScintillaBase::focusNextChild();
    } else
        qFatal("Error: Protected method QsciScintillaBase::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciScintillaBase_FocusPreviousChild(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->VirtualQsciScintillaBase::focusPreviousChild();
    } else
        qFatal("Error: Protected method QsciScintillaBase::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QsciScintillaBase_Sender(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->VirtualQsciScintillaBase::sender();
    } else
        qFatal("Error: Protected method QsciScintillaBase::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciScintillaBase_SenderSignalIndex(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->VirtualQsciScintillaBase::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciScintillaBase::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciScintillaBase_Receivers(const QsciScintillaBase* self, const char* signal) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->VirtualQsciScintillaBase::receivers(signal);
    } else
        qFatal("Error: Protected method QsciScintillaBase::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciScintillaBase_IsSignalConnected(const QsciScintillaBase* self, const QMetaMethod* signal) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->VirtualQsciScintillaBase::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciScintillaBase::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QsciScintillaBase_GetDecodedMetricF(const QsciScintillaBase* self, int metricA, int metricB) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->VirtualQsciScintillaBase::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QsciScintillaBase::getDecodedMetricF called without a directly constructed type");
}

void QsciScintillaBase_Delete(QsciScintillaBase* self) {
    delete self;
}
