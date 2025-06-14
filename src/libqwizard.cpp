#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWizard>
#include <QWizardPage>
#include <qwizard.h>
#include "libqwizard.h"
#include "libqwizard.hxx"

QWizard* QWizard_new(QWidget* parent) {
    return new VirtualQWizard(parent);
}

QWizard* QWizard_new2() {
    return new VirtualQWizard();
}

QWizard* QWizard_new3(QWidget* parent, int flags) {
    return new VirtualQWizard(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QWizard_MetaObject(const QWizard* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWizard_Metacast(QWizard* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWizard_Metacall(QWizard* self, int param1, int param2, void** param3) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWizard*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWizard_OnMetacall(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Metacall_Callback(reinterpret_cast<VirtualQWizard::QWizard_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWizard_QBaseMetacall(QWizard* self, int param1, int param2, void** param3) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Metacall_IsBase(true);
        return vqwizard->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWizard*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWizard_Tr(const char* s) {
    QString _ret = QWizard::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QWizard_AddPage(QWizard* self, QWizardPage* page) {
    return self->addPage(page);
}

void QWizard_SetPage(QWizard* self, int id, QWizardPage* page) {
    self->setPage(static_cast<int>(id), page);
}

void QWizard_RemovePage(QWizard* self, int id) {
    self->removePage(static_cast<int>(id));
}

QWizardPage* QWizard_Page(const QWizard* self, int id) {
    return self->page(static_cast<int>(id));
}

bool QWizard_HasVisitedPage(const QWizard* self, int id) {
    return self->hasVisitedPage(static_cast<int>(id));
}

libqt_list /* of int */ QWizard_VisitedIds(const QWizard* self) {
    QList<int> _ret = self->visitedIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of int */ QWizard_PageIds(const QWizard* self) {
    QList<int> _ret = self->pageIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QWizard_SetStartId(QWizard* self, int id) {
    self->setStartId(static_cast<int>(id));
}

int QWizard_StartId(const QWizard* self) {
    return self->startId();
}

QWizardPage* QWizard_CurrentPage(const QWizard* self) {
    return self->currentPage();
}

int QWizard_CurrentId(const QWizard* self) {
    return self->currentId();
}

void QWizard_SetField(QWizard* self, const libqt_string name, const QVariant* value) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setField(name_QString, *value);
}

QVariant* QWizard_Field(const QWizard* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QVariant(self->field(name_QString));
}

void QWizard_SetWizardStyle(QWizard* self, int style) {
    self->setWizardStyle(static_cast<QWizard::WizardStyle>(style));
}

int QWizard_WizardStyle(const QWizard* self) {
    return static_cast<int>(self->wizardStyle());
}

void QWizard_SetOption(QWizard* self, int option) {
    self->setOption(static_cast<QWizard::WizardOption>(option));
}

bool QWizard_TestOption(const QWizard* self, int option) {
    return self->testOption(static_cast<QWizard::WizardOption>(option));
}

void QWizard_SetOptions(QWizard* self, int options) {
    self->setOptions(static_cast<QWizard::WizardOptions>(options));
}

int QWizard_Options(const QWizard* self) {
    return static_cast<int>(self->options());
}

void QWizard_SetButtonText(QWizard* self, int which, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

libqt_string QWizard_ButtonText(const QWizard* self, int which) {
    QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizard_SetButtonLayout(QWizard* self, const libqt_list /* of int */ layout) {
    QList<QWizard::WizardButton> layout_QList;
    layout_QList.reserve(layout.len);
    int* layout_arr = static_cast<int*>(layout.data);
    for (size_t i = 0; i < layout.len; ++i) {
        layout_QList.push_back(static_cast<QWizard::WizardButton>(layout_arr[i]));
    }
    self->setButtonLayout(layout_QList);
}

void QWizard_SetButton(QWizard* self, int which, QAbstractButton* button) {
    self->setButton(static_cast<QWizard::WizardButton>(which), button);
}

QAbstractButton* QWizard_Button(const QWizard* self, int which) {
    return self->button(static_cast<QWizard::WizardButton>(which));
}

void QWizard_SetTitleFormat(QWizard* self, int format) {
    self->setTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_TitleFormat(const QWizard* self) {
    return static_cast<int>(self->titleFormat());
}

void QWizard_SetSubTitleFormat(QWizard* self, int format) {
    self->setSubTitleFormat(static_cast<Qt::TextFormat>(format));
}

int QWizard_SubTitleFormat(const QWizard* self) {
    return static_cast<int>(self->subTitleFormat());
}

void QWizard_SetPixmap(QWizard* self, int which, const QPixmap* pixmap) {
    self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizard_Pixmap(const QWizard* self, int which) {
    return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizard_SetSideWidget(QWizard* self, QWidget* widget) {
    self->setSideWidget(widget);
}

QWidget* QWizard_SideWidget(const QWizard* self) {
    return self->sideWidget();
}

void QWizard_SetDefaultProperty(QWizard* self, const char* className, const char* property, const char* changedSignal) {
    self->setDefaultProperty(className, property, changedSignal);
}

void QWizard_CurrentIdChanged(QWizard* self, int id) {
    self->currentIdChanged(static_cast<int>(id));
}

void QWizard_Connect_CurrentIdChanged(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::currentIdChanged, [self, slotFunc](int id) {
        int sigval1 = id;
        slotFunc(self, sigval1);
    });
}

void QWizard_HelpRequested(QWizard* self) {
    self->helpRequested();
}

void QWizard_Connect_HelpRequested(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*) = reinterpret_cast<void (*)(QWizard*)>(slot);
    QWizard::connect(self, &QWizard::helpRequested, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWizard_CustomButtonClicked(QWizard* self, int which) {
    self->customButtonClicked(static_cast<int>(which));
}

void QWizard_Connect_CustomButtonClicked(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::customButtonClicked, [self, slotFunc](int which) {
        int sigval1 = which;
        slotFunc(self, sigval1);
    });
}

void QWizard_PageAdded(QWizard* self, int id) {
    self->pageAdded(static_cast<int>(id));
}

void QWizard_Connect_PageAdded(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::pageAdded, [self, slotFunc](int id) {
        int sigval1 = id;
        slotFunc(self, sigval1);
    });
}

void QWizard_PageRemoved(QWizard* self, int id) {
    self->pageRemoved(static_cast<int>(id));
}

void QWizard_Connect_PageRemoved(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self, &QWizard::pageRemoved, [self, slotFunc](int id) {
        int sigval1 = id;
        slotFunc(self, sigval1);
    });
}

void QWizard_Back(QWizard* self) {
    self->back();
}

void QWizard_Next(QWizard* self) {
    self->next();
}

void QWizard_SetCurrentId(QWizard* self, int id) {
    self->setCurrentId(static_cast<int>(id));
}

void QWizard_Restart(QWizard* self) {
    self->restart();
}

libqt_string QWizard_Tr2(const char* s, const char* c) {
    QString _ret = QWizard::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWizard_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWizard::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizard_SetOption2(QWizard* self, int option, bool on) {
    self->setOption(static_cast<QWizard::WizardOption>(option), on);
}

// Derived class handler implementation
bool QWizard_ValidateCurrentPage(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->validateCurrentPage();
    } else {
        return self->QWizard::validateCurrentPage();
    }
}

// Base class handler implementation
bool QWizard_QBaseValidateCurrentPage(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ValidateCurrentPage_IsBase(true);
        return vqwizard->validateCurrentPage();
    } else {
        return self->QWizard::validateCurrentPage();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnValidateCurrentPage(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ValidateCurrentPage_Callback(reinterpret_cast<VirtualQWizard::QWizard_ValidateCurrentPage_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_NextId(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->nextId();
    } else {
        return self->QWizard::nextId();
    }
}

// Base class handler implementation
int QWizard_QBaseNextId(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_NextId_IsBase(true);
        return vqwizard->nextId();
    } else {
        return self->QWizard::nextId();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnNextId(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_NextId_Callback(reinterpret_cast<VirtualQWizard::QWizard_NextId_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_SetVisible(QWizard* self, bool visible) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setVisible(visible);
    } else {
        self->QWizard::setVisible(visible);
    }
}

// Base class handler implementation
void QWizard_QBaseSetVisible(QWizard* self, bool visible) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_SetVisible_IsBase(true);
        vqwizard->setVisible(visible);
    } else {
        self->QWizard::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSetVisible(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_SetVisible_Callback(reinterpret_cast<VirtualQWizard::QWizard_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWizard_SizeHint(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return new QSize(vqwizard->sizeHint());
    } else {
        return new QSize(((VirtualQWizard*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QWizard_QBaseSizeHint(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_SizeHint_IsBase(true);
        return new QSize(vqwizard->sizeHint());
    } else {
        return new QSize(((VirtualQWizard*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSizeHint(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_SizeHint_Callback(reinterpret_cast<VirtualQWizard::QWizard_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_Event(QWizard* self, QEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->event(event);
    } else {
        return ((VirtualQWizard*)self)->event(event);
    }
}

// Base class handler implementation
bool QWizard_QBaseEvent(QWizard* self, QEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Event_IsBase(true);
        return vqwizard->event(event);
    } else {
        return ((VirtualQWizard*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Event_Callback(reinterpret_cast<VirtualQWizard::QWizard_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ResizeEvent(QWizard* self, QResizeEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->resizeEvent(event);
    } else {
        ((VirtualQWizard*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseResizeEvent(QWizard* self, QResizeEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ResizeEvent_IsBase(true);
        vqwizard->resizeEvent(event);
    } else {
        ((VirtualQWizard*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnResizeEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ResizeEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_PaintEvent(QWizard* self, QPaintEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->paintEvent(event);
    } else {
        ((VirtualQWizard*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBasePaintEvent(QWizard* self, QPaintEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_PaintEvent_IsBase(true);
        vqwizard->paintEvent(event);
    } else {
        ((VirtualQWizard*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnPaintEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_PaintEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Done(QWizard* self, int result) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->done(static_cast<int>(result));
    } else {
        ((VirtualQWizard*)self)->done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QWizard_QBaseDone(QWizard* self, int result) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Done_IsBase(true);
        vqwizard->done(static_cast<int>(result));
    } else {
        ((VirtualQWizard*)self)->done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDone(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Done_Callback(reinterpret_cast<VirtualQWizard::QWizard_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_InitializePage(QWizard* self, int id) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->initializePage(static_cast<int>(id));
    } else {
        ((VirtualQWizard*)self)->initializePage(static_cast<int>(id));
    }
}

// Base class handler implementation
void QWizard_QBaseInitializePage(QWizard* self, int id) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_InitializePage_IsBase(true);
        vqwizard->initializePage(static_cast<int>(id));
    } else {
        ((VirtualQWizard*)self)->initializePage(static_cast<int>(id));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInitializePage(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_InitializePage_Callback(reinterpret_cast<VirtualQWizard::QWizard_InitializePage_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_CleanupPage(QWizard* self, int id) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->cleanupPage(static_cast<int>(id));
    } else {
        ((VirtualQWizard*)self)->cleanupPage(static_cast<int>(id));
    }
}

// Base class handler implementation
void QWizard_QBaseCleanupPage(QWizard* self, int id) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_CleanupPage_IsBase(true);
        vqwizard->cleanupPage(static_cast<int>(id));
    } else {
        ((VirtualQWizard*)self)->cleanupPage(static_cast<int>(id));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCleanupPage(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_CleanupPage_Callback(reinterpret_cast<VirtualQWizard::QWizard_CleanupPage_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWizard_MinimumSizeHint(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return new QSize(vqwizard->minimumSizeHint());
    } else {
        return new QSize(((VirtualQWizard*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QWizard_QBaseMinimumSizeHint(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MinimumSizeHint_IsBase(true);
        return new QSize(vqwizard->minimumSizeHint());
    } else {
        return new QSize(((VirtualQWizard*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMinimumSizeHint(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MinimumSizeHint_Callback(reinterpret_cast<VirtualQWizard::QWizard_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Open(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->open();
    } else {
        self->QWizard::open();
    }
}

// Base class handler implementation
void QWizard_QBaseOpen(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Open_IsBase(true);
        vqwizard->open();
    } else {
        self->QWizard::open();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnOpen(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Open_Callback(reinterpret_cast<VirtualQWizard::QWizard_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_Exec(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->exec();
    } else {
        return self->QWizard::exec();
    }
}

// Base class handler implementation
int QWizard_QBaseExec(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Exec_IsBase(true);
        return vqwizard->exec();
    } else {
        return self->QWizard::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnExec(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Exec_Callback(reinterpret_cast<VirtualQWizard::QWizard_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Accept(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->accept();
    } else {
        self->QWizard::accept();
    }
}

// Base class handler implementation
void QWizard_QBaseAccept(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Accept_IsBase(true);
        vqwizard->accept();
    } else {
        self->QWizard::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnAccept(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Accept_Callback(reinterpret_cast<VirtualQWizard::QWizard_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Reject(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->reject();
    } else {
        self->QWizard::reject();
    }
}

// Base class handler implementation
void QWizard_QBaseReject(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Reject_IsBase(true);
        vqwizard->reject();
    } else {
        self->QWizard::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnReject(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Reject_Callback(reinterpret_cast<VirtualQWizard::QWizard_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_KeyPressEvent(QWizard* self, QKeyEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->keyPressEvent(param1);
    } else {
        ((VirtualQWizard*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseKeyPressEvent(QWizard* self, QKeyEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_KeyPressEvent_IsBase(true);
        vqwizard->keyPressEvent(param1);
    } else {
        ((VirtualQWizard*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnKeyPressEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_KeyPressEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_CloseEvent(QWizard* self, QCloseEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->closeEvent(param1);
    } else {
        ((VirtualQWizard*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseCloseEvent(QWizard* self, QCloseEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_CloseEvent_IsBase(true);
        vqwizard->closeEvent(param1);
    } else {
        ((VirtualQWizard*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCloseEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_CloseEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ShowEvent(QWizard* self, QShowEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->showEvent(param1);
    } else {
        ((VirtualQWizard*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseShowEvent(QWizard* self, QShowEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ShowEvent_IsBase(true);
        vqwizard->showEvent(param1);
    } else {
        ((VirtualQWizard*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnShowEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ShowEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ContextMenuEvent(QWizard* self, QContextMenuEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->contextMenuEvent(param1);
    } else {
        ((VirtualQWizard*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseContextMenuEvent(QWizard* self, QContextMenuEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ContextMenuEvent_IsBase(true);
        vqwizard->contextMenuEvent(param1);
    } else {
        ((VirtualQWizard*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnContextMenuEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ContextMenuEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_EventFilter(QWizard* self, QObject* param1, QEvent* param2) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->eventFilter(param1, param2);
    } else {
        return ((VirtualQWizard*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QWizard_QBaseEventFilter(QWizard* self, QObject* param1, QEvent* param2) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_EventFilter_IsBase(true);
        return vqwizard->eventFilter(param1, param2);
    } else {
        return ((VirtualQWizard*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEventFilter(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_EventFilter_Callback(reinterpret_cast<VirtualQWizard::QWizard_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_DevType(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->devType();
    } else {
        return self->QWizard::devType();
    }
}

// Base class handler implementation
int QWizard_QBaseDevType(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DevType_IsBase(true);
        return vqwizard->devType();
    } else {
        return self->QWizard::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDevType(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DevType_Callback(reinterpret_cast<VirtualQWizard::QWizard_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_HeightForWidth(const QWizard* self, int param1) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QWizard::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QWizard_QBaseHeightForWidth(const QWizard* self, int param1) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_HeightForWidth_IsBase(true);
        return vqwizard->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QWizard::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnHeightForWidth(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_HeightForWidth_Callback(reinterpret_cast<VirtualQWizard::QWizard_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_HasHeightForWidth(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->hasHeightForWidth();
    } else {
        return self->QWizard::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QWizard_QBaseHasHeightForWidth(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_HasHeightForWidth_IsBase(true);
        return vqwizard->hasHeightForWidth();
    } else {
        return self->QWizard::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnHasHeightForWidth(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWizard::QWizard_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QWizard_PaintEngine(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->paintEngine();
    } else {
        return self->QWizard::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QWizard_QBasePaintEngine(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_PaintEngine_IsBase(true);
        return vqwizard->paintEngine();
    } else {
        return self->QWizard::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnPaintEngine(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_PaintEngine_Callback(reinterpret_cast<VirtualQWizard::QWizard_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MousePressEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->mousePressEvent(event);
    } else {
        ((VirtualQWizard*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMousePressEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MousePressEvent_IsBase(true);
        vqwizard->mousePressEvent(event);
    } else {
        ((VirtualQWizard*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMousePressEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MousePressEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MouseReleaseEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->mouseReleaseEvent(event);
    } else {
        ((VirtualQWizard*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMouseReleaseEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MouseReleaseEvent_IsBase(true);
        vqwizard->mouseReleaseEvent(event);
    } else {
        ((VirtualQWizard*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMouseReleaseEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MouseDoubleClickEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQWizard*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMouseDoubleClickEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MouseDoubleClickEvent_IsBase(true);
        vqwizard->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQWizard*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMouseDoubleClickEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MouseMoveEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->mouseMoveEvent(event);
    } else {
        ((VirtualQWizard*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMouseMoveEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MouseMoveEvent_IsBase(true);
        vqwizard->mouseMoveEvent(event);
    } else {
        ((VirtualQWizard*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMouseMoveEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MouseMoveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_WheelEvent(QWizard* self, QWheelEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->wheelEvent(event);
    } else {
        ((VirtualQWizard*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseWheelEvent(QWizard* self, QWheelEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_WheelEvent_IsBase(true);
        vqwizard->wheelEvent(event);
    } else {
        ((VirtualQWizard*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnWheelEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_WheelEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_KeyReleaseEvent(QWizard* self, QKeyEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->keyReleaseEvent(event);
    } else {
        ((VirtualQWizard*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseKeyReleaseEvent(QWizard* self, QKeyEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_KeyReleaseEvent_IsBase(true);
        vqwizard->keyReleaseEvent(event);
    } else {
        ((VirtualQWizard*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnKeyReleaseEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_FocusInEvent(QWizard* self, QFocusEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->focusInEvent(event);
    } else {
        ((VirtualQWizard*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseFocusInEvent(QWizard* self, QFocusEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusInEvent_IsBase(true);
        vqwizard->focusInEvent(event);
    } else {
        ((VirtualQWizard*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusInEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusInEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_FocusOutEvent(QWizard* self, QFocusEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->focusOutEvent(event);
    } else {
        ((VirtualQWizard*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseFocusOutEvent(QWizard* self, QFocusEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusOutEvent_IsBase(true);
        vqwizard->focusOutEvent(event);
    } else {
        ((VirtualQWizard*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusOutEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusOutEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_EnterEvent(QWizard* self, QEnterEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->enterEvent(event);
    } else {
        ((VirtualQWizard*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseEnterEvent(QWizard* self, QEnterEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_EnterEvent_IsBase(true);
        vqwizard->enterEvent(event);
    } else {
        ((VirtualQWizard*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEnterEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_EnterEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_LeaveEvent(QWizard* self, QEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->leaveEvent(event);
    } else {
        ((VirtualQWizard*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseLeaveEvent(QWizard* self, QEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_LeaveEvent_IsBase(true);
        vqwizard->leaveEvent(event);
    } else {
        ((VirtualQWizard*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnLeaveEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_LeaveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_MoveEvent(QWizard* self, QMoveEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->moveEvent(event);
    } else {
        ((VirtualQWizard*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseMoveEvent(QWizard* self, QMoveEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MoveEvent_IsBase(true);
        vqwizard->moveEvent(event);
    } else {
        ((VirtualQWizard*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMoveEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_MoveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_TabletEvent(QWizard* self, QTabletEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->tabletEvent(event);
    } else {
        ((VirtualQWizard*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseTabletEvent(QWizard* self, QTabletEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_TabletEvent_IsBase(true);
        vqwizard->tabletEvent(event);
    } else {
        ((VirtualQWizard*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnTabletEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_TabletEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ActionEvent(QWizard* self, QActionEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->actionEvent(event);
    } else {
        ((VirtualQWizard*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseActionEvent(QWizard* self, QActionEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ActionEvent_IsBase(true);
        vqwizard->actionEvent(event);
    } else {
        ((VirtualQWizard*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnActionEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ActionEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DragEnterEvent(QWizard* self, QDragEnterEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->dragEnterEvent(event);
    } else {
        ((VirtualQWizard*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseDragEnterEvent(QWizard* self, QDragEnterEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DragEnterEvent_IsBase(true);
        vqwizard->dragEnterEvent(event);
    } else {
        ((VirtualQWizard*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDragEnterEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DragEnterEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DragMoveEvent(QWizard* self, QDragMoveEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->dragMoveEvent(event);
    } else {
        ((VirtualQWizard*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseDragMoveEvent(QWizard* self, QDragMoveEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DragMoveEvent_IsBase(true);
        vqwizard->dragMoveEvent(event);
    } else {
        ((VirtualQWizard*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDragMoveEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DragMoveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DragLeaveEvent(QWizard* self, QDragLeaveEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->dragLeaveEvent(event);
    } else {
        ((VirtualQWizard*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseDragLeaveEvent(QWizard* self, QDragLeaveEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DragLeaveEvent_IsBase(true);
        vqwizard->dragLeaveEvent(event);
    } else {
        ((VirtualQWizard*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDragLeaveEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DragLeaveEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DropEvent(QWizard* self, QDropEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->dropEvent(event);
    } else {
        ((VirtualQWizard*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseDropEvent(QWizard* self, QDropEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DropEvent_IsBase(true);
        vqwizard->dropEvent(event);
    } else {
        ((VirtualQWizard*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDropEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DropEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_HideEvent(QWizard* self, QHideEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->hideEvent(event);
    } else {
        ((VirtualQWizard*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseHideEvent(QWizard* self, QHideEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_HideEvent_IsBase(true);
        vqwizard->hideEvent(event);
    } else {
        ((VirtualQWizard*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnHideEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_HideEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_NativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQWizard*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QWizard_QBaseNativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_NativeEvent_IsBase(true);
        return vqwizard->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQWizard*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnNativeEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_NativeEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ChangeEvent(QWizard* self, QEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->changeEvent(param1);
    } else {
        ((VirtualQWizard*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseChangeEvent(QWizard* self, QEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ChangeEvent_IsBase(true);
        vqwizard->changeEvent(param1);
    } else {
        ((VirtualQWizard*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnChangeEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ChangeEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_Metric(const QWizard* self, int param1) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQWizard*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QWizard_QBaseMetric(const QWizard* self, int param1) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Metric_IsBase(true);
        return vqwizard->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQWizard*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMetric(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Metric_Callback(reinterpret_cast<VirtualQWizard::QWizard_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_InitPainter(const QWizard* self, QPainter* painter) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->initPainter(painter);
    } else {
        ((VirtualQWizard*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QWizard_QBaseInitPainter(const QWizard* self, QPainter* painter) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_InitPainter_IsBase(true);
        vqwizard->initPainter(painter);
    } else {
        ((VirtualQWizard*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInitPainter(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_InitPainter_Callback(reinterpret_cast<VirtualQWizard::QWizard_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QWizard_Redirected(const QWizard* self, QPoint* offset) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->redirected(offset);
    } else {
        return ((VirtualQWizard*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QWizard_QBaseRedirected(const QWizard* self, QPoint* offset) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Redirected_IsBase(true);
        return vqwizard->redirected(offset);
    } else {
        return ((VirtualQWizard*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnRedirected(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Redirected_Callback(reinterpret_cast<VirtualQWizard::QWizard_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QWizard_SharedPainter(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->sharedPainter();
    } else {
        return ((VirtualQWizard*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QWizard_QBaseSharedPainter(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_SharedPainter_IsBase(true);
        return vqwizard->sharedPainter();
    } else {
        return ((VirtualQWizard*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSharedPainter(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_SharedPainter_Callback(reinterpret_cast<VirtualQWizard::QWizard_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_InputMethodEvent(QWizard* self, QInputMethodEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->inputMethodEvent(param1);
    } else {
        ((VirtualQWizard*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseInputMethodEvent(QWizard* self, QInputMethodEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_InputMethodEvent_IsBase(true);
        vqwizard->inputMethodEvent(param1);
    } else {
        ((VirtualQWizard*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInputMethodEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_InputMethodEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QWizard_InputMethodQuery(const QWizard* self, int param1) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return new QVariant(vqwizard->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQWizard*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QWizard_QBaseInputMethodQuery(const QWizard* self, int param1) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_InputMethodQuery_IsBase(true);
        return new QVariant(vqwizard->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQWizard*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInputMethodQuery(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_InputMethodQuery_Callback(reinterpret_cast<VirtualQWizard::QWizard_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_FocusNextPrevChild(QWizard* self, bool next) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->focusNextPrevChild(next);
    } else {
        return ((VirtualQWizard*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QWizard_QBaseFocusNextPrevChild(QWizard* self, bool next) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusNextPrevChild_IsBase(true);
        return vqwizard->focusNextPrevChild(next);
    } else {
        return ((VirtualQWizard*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusNextPrevChild(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_TimerEvent(QWizard* self, QTimerEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->timerEvent(event);
    } else {
        ((VirtualQWizard*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseTimerEvent(QWizard* self, QTimerEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_TimerEvent_IsBase(true);
        vqwizard->timerEvent(event);
    } else {
        ((VirtualQWizard*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnTimerEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_TimerEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ChildEvent(QWizard* self, QChildEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->childEvent(event);
    } else {
        ((VirtualQWizard*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseChildEvent(QWizard* self, QChildEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ChildEvent_IsBase(true);
        vqwizard->childEvent(event);
    } else {
        ((VirtualQWizard*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnChildEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ChildEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_CustomEvent(QWizard* self, QEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->customEvent(event);
    } else {
        ((VirtualQWizard*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWizard_QBaseCustomEvent(QWizard* self, QEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_CustomEvent_IsBase(true);
        vqwizard->customEvent(event);
    } else {
        ((VirtualQWizard*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCustomEvent(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_CustomEvent_Callback(reinterpret_cast<VirtualQWizard::QWizard_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_ConnectNotify(QWizard* self, const QMetaMethod* signal) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->connectNotify(*signal);
    } else {
        ((VirtualQWizard*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWizard_QBaseConnectNotify(QWizard* self, const QMetaMethod* signal) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ConnectNotify_IsBase(true);
        vqwizard->connectNotify(*signal);
    } else {
        ((VirtualQWizard*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnConnectNotify(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_ConnectNotify_Callback(reinterpret_cast<VirtualQWizard::QWizard_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_DisconnectNotify(QWizard* self, const QMetaMethod* signal) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->disconnectNotify(*signal);
    } else {
        ((VirtualQWizard*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWizard_QBaseDisconnectNotify(QWizard* self, const QMetaMethod* signal) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DisconnectNotify_IsBase(true);
        vqwizard->disconnectNotify(*signal);
    } else {
        ((VirtualQWizard*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDisconnectNotify(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_DisconnectNotify_Callback(reinterpret_cast<VirtualQWizard::QWizard_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_AdjustPosition(QWizard* self, QWidget* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->adjustPosition(param1);
    } else {
        ((VirtualQWizard*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void QWizard_QBaseAdjustPosition(QWizard* self, QWidget* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_AdjustPosition_IsBase(true);
        vqwizard->adjustPosition(param1);
    } else {
        ((VirtualQWizard*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnAdjustPosition(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_AdjustPosition_Callback(reinterpret_cast<VirtualQWizard::QWizard_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_UpdateMicroFocus(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->updateMicroFocus();
    } else {
        ((VirtualQWizard*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QWizard_QBaseUpdateMicroFocus(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_UpdateMicroFocus_IsBase(true);
        vqwizard->updateMicroFocus();
    } else {
        ((VirtualQWizard*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnUpdateMicroFocus(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQWizard::QWizard_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Create(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->create();
    } else {
        ((VirtualQWizard*)self)->create();
    }
}

// Base class handler implementation
void QWizard_QBaseCreate(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Create_IsBase(true);
        vqwizard->create();
    } else {
        ((VirtualQWizard*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCreate(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Create_Callback(reinterpret_cast<VirtualQWizard::QWizard_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizard_Destroy(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->destroy();
    } else {
        ((VirtualQWizard*)self)->destroy();
    }
}

// Base class handler implementation
void QWizard_QBaseDestroy(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Destroy_IsBase(true);
        vqwizard->destroy();
    } else {
        ((VirtualQWizard*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDestroy(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Destroy_Callback(reinterpret_cast<VirtualQWizard::QWizard_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_FocusNextChild(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->focusNextChild();
    } else {
        return ((VirtualQWizard*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QWizard_QBaseFocusNextChild(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusNextChild_IsBase(true);
        return vqwizard->focusNextChild();
    } else {
        return ((VirtualQWizard*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusNextChild(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusNextChild_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_FocusPreviousChild(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->focusPreviousChild();
    } else {
        return ((VirtualQWizard*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QWizard_QBaseFocusPreviousChild(QWizard* self) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusPreviousChild_IsBase(true);
        return vqwizard->focusPreviousChild();
    } else {
        return ((VirtualQWizard*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusPreviousChild(QWizard* self, intptr_t slot) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_FocusPreviousChild_Callback(reinterpret_cast<VirtualQWizard::QWizard_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWizard_Sender(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->sender();
    } else {
        return ((VirtualQWizard*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWizard_QBaseSender(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Sender_IsBase(true);
        return vqwizard->sender();
    } else {
        return ((VirtualQWizard*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSender(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Sender_Callback(reinterpret_cast<VirtualQWizard::QWizard_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_SenderSignalIndex(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->senderSignalIndex();
    } else {
        return ((VirtualQWizard*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWizard_QBaseSenderSignalIndex(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_SenderSignalIndex_IsBase(true);
        return vqwizard->senderSignalIndex();
    } else {
        return ((VirtualQWizard*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSenderSignalIndex(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWizard::QWizard_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizard_Receivers(const QWizard* self, const char* signal) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->receivers(signal);
    } else {
        return ((VirtualQWizard*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWizard_QBaseReceivers(const QWizard* self, const char* signal) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Receivers_IsBase(true);
        return vqwizard->receivers(signal);
    } else {
        return ((VirtualQWizard*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnReceivers(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_Receivers_Callback(reinterpret_cast<VirtualQWizard::QWizard_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizard_IsSignalConnected(const QWizard* self, const QMetaMethod* signal) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        return vqwizard->isSignalConnected(*signal);
    } else {
        return ((VirtualQWizard*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWizard_QBaseIsSignalConnected(const QWizard* self, const QMetaMethod* signal) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_IsSignalConnected_IsBase(true);
        return vqwizard->isSignalConnected(*signal);
    } else {
        return ((VirtualQWizard*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnIsSignalConnected(const QWizard* self, intptr_t slot) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard && vqwizard->isVirtualQWizard) {
        vqwizard->setQWizard_IsSignalConnected_Callback(reinterpret_cast<VirtualQWizard::QWizard_IsSignalConnected_Callback>(slot));
    }
}

void QWizard_Delete(QWizard* self) {
    delete self;
}

QWizardPage* QWizardPage_new(QWidget* parent) {
    return new VirtualQWizardPage(parent);
}

QWizardPage* QWizardPage_new2() {
    return new VirtualQWizardPage();
}

QMetaObject* QWizardPage_MetaObject(const QWizardPage* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWizardPage_Metacast(QWizardPage* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWizardPage_Metacall(QWizardPage* self, int param1, int param2, void** param3) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWizardPage*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWizardPage_OnMetacall(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Metacall_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWizardPage_QBaseMetacall(QWizardPage* self, int param1, int param2, void** param3) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Metacall_IsBase(true);
        return vqwizardpage->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQWizardPage*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWizardPage_Tr(const char* s) {
    QString _ret = QWizardPage::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizardPage_SetTitle(QWizardPage* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string QWizardPage_Title(const QWizardPage* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizardPage_SetSubTitle(QWizardPage* self, const libqt_string subTitle) {
    QString subTitle_QString = QString::fromUtf8(subTitle.data, subTitle.len);
    self->setSubTitle(subTitle_QString);
}

libqt_string QWizardPage_SubTitle(const QWizardPage* self) {
    QString _ret = self->subTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizardPage_SetPixmap(QWizardPage* self, int which, const QPixmap* pixmap) {
    self->setPixmap(static_cast<QWizard::WizardPixmap>(which), *pixmap);
}

QPixmap* QWizardPage_Pixmap(const QWizardPage* self, int which) {
    return new QPixmap(self->pixmap(static_cast<QWizard::WizardPixmap>(which)));
}

void QWizardPage_SetFinalPage(QWizardPage* self, bool finalPage) {
    self->setFinalPage(finalPage);
}

bool QWizardPage_IsFinalPage(const QWizardPage* self) {
    return self->isFinalPage();
}

void QWizardPage_SetCommitPage(QWizardPage* self, bool commitPage) {
    self->setCommitPage(commitPage);
}

bool QWizardPage_IsCommitPage(const QWizardPage* self) {
    return self->isCommitPage();
}

void QWizardPage_SetButtonText(QWizardPage* self, int which, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setButtonText(static_cast<QWizard::WizardButton>(which), text_QString);
}

libqt_string QWizardPage_ButtonText(const QWizardPage* self, int which) {
    QString _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizardPage_CompleteChanged(QWizardPage* self) {
    self->completeChanged();
}

void QWizardPage_Connect_CompleteChanged(QWizardPage* self, intptr_t slot) {
    void (*slotFunc)(QWizardPage*) = reinterpret_cast<void (*)(QWizardPage*)>(slot);
    QWizardPage::connect(self, &QWizardPage::completeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QWizardPage_Tr2(const char* s, const char* c) {
    QString _ret = QWizardPage::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWizardPage_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWizardPage::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QWizardPage_InitializePage(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->initializePage();
    } else {
        self->QWizardPage::initializePage();
    }
}

// Base class handler implementation
void QWizardPage_QBaseInitializePage(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_InitializePage_IsBase(true);
        vqwizardpage->initializePage();
    } else {
        self->QWizardPage::initializePage();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInitializePage(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_InitializePage_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_InitializePage_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_CleanupPage(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->cleanupPage();
    } else {
        self->QWizardPage::cleanupPage();
    }
}

// Base class handler implementation
void QWizardPage_QBaseCleanupPage(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_CleanupPage_IsBase(true);
        vqwizardpage->cleanupPage();
    } else {
        self->QWizardPage::cleanupPage();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCleanupPage(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_CleanupPage_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_CleanupPage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_ValidatePage(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->validatePage();
    } else {
        return self->QWizardPage::validatePage();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseValidatePage(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ValidatePage_IsBase(true);
        return vqwizardpage->validatePage();
    } else {
        return self->QWizardPage::validatePage();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnValidatePage(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ValidatePage_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ValidatePage_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_IsComplete(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->isComplete();
    } else {
        return self->QWizardPage::isComplete();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseIsComplete(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_IsComplete_IsBase(true);
        return vqwizardpage->isComplete();
    } else {
        return self->QWizardPage::isComplete();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnIsComplete(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_IsComplete_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_IsComplete_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_NextId(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->nextId();
    } else {
        return self->QWizardPage::nextId();
    }
}

// Base class handler implementation
int QWizardPage_QBaseNextId(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_NextId_IsBase(true);
        return vqwizardpage->nextId();
    } else {
        return self->QWizardPage::nextId();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnNextId(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_NextId_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_NextId_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_DevType(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->devType();
    } else {
        return self->QWizardPage::devType();
    }
}

// Base class handler implementation
int QWizardPage_QBaseDevType(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DevType_IsBase(true);
        return vqwizardpage->devType();
    } else {
        return self->QWizardPage::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDevType(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DevType_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_SetVisible(QWizardPage* self, bool visible) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setVisible(visible);
    } else {
        self->QWizardPage::setVisible(visible);
    }
}

// Base class handler implementation
void QWizardPage_QBaseSetVisible(QWizardPage* self, bool visible) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SetVisible_IsBase(true);
        vqwizardpage->setVisible(visible);
    } else {
        self->QWizardPage::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSetVisible(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SetVisible_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWizardPage_SizeHint(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return new QSize(vqwizardpage->sizeHint());
    } else {
        return new QSize(((VirtualQWizardPage*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QWizardPage_QBaseSizeHint(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SizeHint_IsBase(true);
        return new QSize(vqwizardpage->sizeHint());
    } else {
        return new QSize(((VirtualQWizardPage*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSizeHint(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SizeHint_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWizardPage_MinimumSizeHint(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return new QSize(vqwizardpage->minimumSizeHint());
    } else {
        return new QSize(((VirtualQWizardPage*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QWizardPage_QBaseMinimumSizeHint(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MinimumSizeHint_IsBase(true);
        return new QSize(vqwizardpage->minimumSizeHint());
    } else {
        return new QSize(((VirtualQWizardPage*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMinimumSizeHint(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MinimumSizeHint_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_HeightForWidth(const QWizardPage* self, int param1) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QWizardPage::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QWizardPage_QBaseHeightForWidth(const QWizardPage* self, int param1) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_HeightForWidth_IsBase(true);
        return vqwizardpage->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QWizardPage::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnHeightForWidth(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_HeightForWidth_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_HasHeightForWidth(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->hasHeightForWidth();
    } else {
        return self->QWizardPage::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseHasHeightForWidth(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_HasHeightForWidth_IsBase(true);
        return vqwizardpage->hasHeightForWidth();
    } else {
        return self->QWizardPage::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnHasHeightForWidth(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QWizardPage_PaintEngine(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->paintEngine();
    } else {
        return self->QWizardPage::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QWizardPage_QBasePaintEngine(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_PaintEngine_IsBase(true);
        return vqwizardpage->paintEngine();
    } else {
        return self->QWizardPage::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnPaintEngine(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_PaintEngine_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_Event(QWizardPage* self, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->event(event);
    } else {
        return ((VirtualQWizardPage*)self)->event(event);
    }
}

// Base class handler implementation
bool QWizardPage_QBaseEvent(QWizardPage* self, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Event_IsBase(true);
        return vqwizardpage->event(event);
    } else {
        return ((VirtualQWizardPage*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Event_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MousePressEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->mousePressEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMousePressEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MousePressEvent_IsBase(true);
        vqwizardpage->mousePressEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMousePressEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MousePressEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MouseReleaseEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->mouseReleaseEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMouseReleaseEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MouseReleaseEvent_IsBase(true);
        vqwizardpage->mouseReleaseEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMouseReleaseEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MouseDoubleClickEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMouseDoubleClickEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MouseDoubleClickEvent_IsBase(true);
        vqwizardpage->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMouseDoubleClickEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MouseMoveEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->mouseMoveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMouseMoveEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MouseMoveEvent_IsBase(true);
        vqwizardpage->mouseMoveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMouseMoveEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MouseMoveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_WheelEvent(QWizardPage* self, QWheelEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->wheelEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseWheelEvent(QWizardPage* self, QWheelEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_WheelEvent_IsBase(true);
        vqwizardpage->wheelEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnWheelEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_WheelEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_KeyPressEvent(QWizardPage* self, QKeyEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->keyPressEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseKeyPressEvent(QWizardPage* self, QKeyEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_KeyPressEvent_IsBase(true);
        vqwizardpage->keyPressEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnKeyPressEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_KeyPressEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_KeyReleaseEvent(QWizardPage* self, QKeyEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->keyReleaseEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseKeyReleaseEvent(QWizardPage* self, QKeyEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_KeyReleaseEvent_IsBase(true);
        vqwizardpage->keyReleaseEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnKeyReleaseEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_FocusInEvent(QWizardPage* self, QFocusEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->focusInEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseFocusInEvent(QWizardPage* self, QFocusEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusInEvent_IsBase(true);
        vqwizardpage->focusInEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusInEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusInEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_FocusOutEvent(QWizardPage* self, QFocusEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->focusOutEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseFocusOutEvent(QWizardPage* self, QFocusEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusOutEvent_IsBase(true);
        vqwizardpage->focusOutEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusOutEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusOutEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_EnterEvent(QWizardPage* self, QEnterEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->enterEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseEnterEvent(QWizardPage* self, QEnterEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_EnterEvent_IsBase(true);
        vqwizardpage->enterEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnEnterEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_EnterEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_LeaveEvent(QWizardPage* self, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->leaveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseLeaveEvent(QWizardPage* self, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_LeaveEvent_IsBase(true);
        vqwizardpage->leaveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnLeaveEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_LeaveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_PaintEvent(QWizardPage* self, QPaintEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->paintEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBasePaintEvent(QWizardPage* self, QPaintEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_PaintEvent_IsBase(true);
        vqwizardpage->paintEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnPaintEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_PaintEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_MoveEvent(QWizardPage* self, QMoveEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->moveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseMoveEvent(QWizardPage* self, QMoveEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MoveEvent_IsBase(true);
        vqwizardpage->moveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMoveEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_MoveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ResizeEvent(QWizardPage* self, QResizeEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->resizeEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseResizeEvent(QWizardPage* self, QResizeEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ResizeEvent_IsBase(true);
        vqwizardpage->resizeEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnResizeEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ResizeEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_CloseEvent(QWizardPage* self, QCloseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->closeEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseCloseEvent(QWizardPage* self, QCloseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_CloseEvent_IsBase(true);
        vqwizardpage->closeEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCloseEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_CloseEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ContextMenuEvent(QWizardPage* self, QContextMenuEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->contextMenuEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseContextMenuEvent(QWizardPage* self, QContextMenuEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ContextMenuEvent_IsBase(true);
        vqwizardpage->contextMenuEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnContextMenuEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ContextMenuEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_TabletEvent(QWizardPage* self, QTabletEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->tabletEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseTabletEvent(QWizardPage* self, QTabletEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_TabletEvent_IsBase(true);
        vqwizardpage->tabletEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnTabletEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_TabletEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ActionEvent(QWizardPage* self, QActionEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->actionEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseActionEvent(QWizardPage* self, QActionEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ActionEvent_IsBase(true);
        vqwizardpage->actionEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnActionEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ActionEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DragEnterEvent(QWizardPage* self, QDragEnterEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->dragEnterEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDragEnterEvent(QWizardPage* self, QDragEnterEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DragEnterEvent_IsBase(true);
        vqwizardpage->dragEnterEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDragEnterEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DragEnterEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DragMoveEvent(QWizardPage* self, QDragMoveEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->dragMoveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDragMoveEvent(QWizardPage* self, QDragMoveEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DragMoveEvent_IsBase(true);
        vqwizardpage->dragMoveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDragMoveEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DragMoveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DragLeaveEvent(QWizardPage* self, QDragLeaveEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->dragLeaveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDragLeaveEvent(QWizardPage* self, QDragLeaveEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DragLeaveEvent_IsBase(true);
        vqwizardpage->dragLeaveEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDragLeaveEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DragLeaveEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DropEvent(QWizardPage* self, QDropEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->dropEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDropEvent(QWizardPage* self, QDropEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DropEvent_IsBase(true);
        vqwizardpage->dropEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDropEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DropEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ShowEvent(QWizardPage* self, QShowEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->showEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseShowEvent(QWizardPage* self, QShowEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ShowEvent_IsBase(true);
        vqwizardpage->showEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnShowEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ShowEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_HideEvent(QWizardPage* self, QHideEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->hideEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseHideEvent(QWizardPage* self, QHideEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_HideEvent_IsBase(true);
        vqwizardpage->hideEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnHideEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_HideEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_NativeEvent(QWizardPage* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQWizardPage*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QWizardPage_QBaseNativeEvent(QWizardPage* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_NativeEvent_IsBase(true);
        return vqwizardpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQWizardPage*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnNativeEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_NativeEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ChangeEvent(QWizardPage* self, QEvent* param1) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->changeEvent(param1);
    } else {
        ((VirtualQWizardPage*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QWizardPage_QBaseChangeEvent(QWizardPage* self, QEvent* param1) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ChangeEvent_IsBase(true);
        vqwizardpage->changeEvent(param1);
    } else {
        ((VirtualQWizardPage*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnChangeEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ChangeEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_Metric(const QWizardPage* self, int param1) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQWizardPage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QWizardPage_QBaseMetric(const QWizardPage* self, int param1) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Metric_IsBase(true);
        return vqwizardpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQWizardPage*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMetric(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Metric_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_InitPainter(const QWizardPage* self, QPainter* painter) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->initPainter(painter);
    } else {
        ((VirtualQWizardPage*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QWizardPage_QBaseInitPainter(const QWizardPage* self, QPainter* painter) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_InitPainter_IsBase(true);
        vqwizardpage->initPainter(painter);
    } else {
        ((VirtualQWizardPage*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInitPainter(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_InitPainter_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QWizardPage_Redirected(const QWizardPage* self, QPoint* offset) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->redirected(offset);
    } else {
        return ((VirtualQWizardPage*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QWizardPage_QBaseRedirected(const QWizardPage* self, QPoint* offset) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Redirected_IsBase(true);
        return vqwizardpage->redirected(offset);
    } else {
        return ((VirtualQWizardPage*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRedirected(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Redirected_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QWizardPage_SharedPainter(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->sharedPainter();
    } else {
        return ((VirtualQWizardPage*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QWizardPage_QBaseSharedPainter(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SharedPainter_IsBase(true);
        return vqwizardpage->sharedPainter();
    } else {
        return ((VirtualQWizardPage*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSharedPainter(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SharedPainter_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_InputMethodEvent(QWizardPage* self, QInputMethodEvent* param1) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->inputMethodEvent(param1);
    } else {
        ((VirtualQWizardPage*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QWizardPage_QBaseInputMethodEvent(QWizardPage* self, QInputMethodEvent* param1) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_InputMethodEvent_IsBase(true);
        vqwizardpage->inputMethodEvent(param1);
    } else {
        ((VirtualQWizardPage*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInputMethodEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_InputMethodEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QWizardPage_InputMethodQuery(const QWizardPage* self, int param1) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return new QVariant(vqwizardpage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQWizardPage*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QWizardPage_QBaseInputMethodQuery(const QWizardPage* self, int param1) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_InputMethodQuery_IsBase(true);
        return new QVariant(vqwizardpage->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQWizardPage*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInputMethodQuery(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_InputMethodQuery_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_FocusNextPrevChild(QWizardPage* self, bool next) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->focusNextPrevChild(next);
    } else {
        return ((VirtualQWizardPage*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QWizardPage_QBaseFocusNextPrevChild(QWizardPage* self, bool next) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusNextPrevChild_IsBase(true);
        return vqwizardpage->focusNextPrevChild(next);
    } else {
        return ((VirtualQWizardPage*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusNextPrevChild(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_EventFilter(QWizardPage* self, QObject* watched, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->eventFilter(watched, event);
    } else {
        return self->QWizardPage::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWizardPage_QBaseEventFilter(QWizardPage* self, QObject* watched, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_EventFilter_IsBase(true);
        return vqwizardpage->eventFilter(watched, event);
    } else {
        return self->QWizardPage::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnEventFilter(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_EventFilter_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_TimerEvent(QWizardPage* self, QTimerEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->timerEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseTimerEvent(QWizardPage* self, QTimerEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_TimerEvent_IsBase(true);
        vqwizardpage->timerEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnTimerEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_TimerEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ChildEvent(QWizardPage* self, QChildEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->childEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseChildEvent(QWizardPage* self, QChildEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ChildEvent_IsBase(true);
        vqwizardpage->childEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnChildEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ChildEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_CustomEvent(QWizardPage* self, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->customEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QWizardPage_QBaseCustomEvent(QWizardPage* self, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_CustomEvent_IsBase(true);
        vqwizardpage->customEvent(event);
    } else {
        ((VirtualQWizardPage*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCustomEvent(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_CustomEvent_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_ConnectNotify(QWizardPage* self, const QMetaMethod* signal) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->connectNotify(*signal);
    } else {
        ((VirtualQWizardPage*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWizardPage_QBaseConnectNotify(QWizardPage* self, const QMetaMethod* signal) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ConnectNotify_IsBase(true);
        vqwizardpage->connectNotify(*signal);
    } else {
        ((VirtualQWizardPage*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnConnectNotify(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_ConnectNotify_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_DisconnectNotify(QWizardPage* self, const QMetaMethod* signal) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->disconnectNotify(*signal);
    } else {
        ((VirtualQWizardPage*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWizardPage_QBaseDisconnectNotify(QWizardPage* self, const QMetaMethod* signal) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DisconnectNotify_IsBase(true);
        vqwizardpage->disconnectNotify(*signal);
    } else {
        ((VirtualQWizardPage*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDisconnectNotify(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_DisconnectNotify_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_SetField(QWizardPage* self, const libqt_string name, const QVariant* value) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setField(name_QString, *value);
    } else {
        ((VirtualQWizardPage*)self)->setField(name_QString, *value);
    }
}

// Base class handler implementation
void QWizardPage_QBaseSetField(QWizardPage* self, const libqt_string name, const QVariant* value) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SetField_IsBase(true);
        vqwizardpage->setField(name_QString, *value);
    } else {
        ((VirtualQWizardPage*)self)->setField(name_QString, *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSetField(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SetField_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SetField_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QWizardPage_Field(const QWizardPage* self, const libqt_string name) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return new QVariant(vqwizardpage->field(name_QString));
    }
    return {};
}

// Base class handler implementation
QVariant* QWizardPage_QBaseField(const QWizardPage* self, const libqt_string name) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Field_IsBase(true);
        return new QVariant(vqwizardpage->field(name_QString));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnField(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Field_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Field_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_RegisterField(QWizardPage* self, const libqt_string name, QWidget* widget) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->registerField(name_QString, widget);
    } else {
        ((VirtualQWizardPage*)self)->registerField(name_QString, widget);
    }
}

// Base class handler implementation
void QWizardPage_QBaseRegisterField(QWizardPage* self, const libqt_string name, QWidget* widget) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_RegisterField_IsBase(true);
        vqwizardpage->registerField(name_QString, widget);
    } else {
        ((VirtualQWizardPage*)self)->registerField(name_QString, widget);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRegisterField(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_RegisterField_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_RegisterField_Callback>(slot));
    }
}

// Derived class handler implementation
QWizard* QWizardPage_Wizard(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->wizard();
    } else {
        return ((VirtualQWizardPage*)self)->wizard();
    }
}

// Base class handler implementation
QWizard* QWizardPage_QBaseWizard(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Wizard_IsBase(true);
        return vqwizardpage->wizard();
    } else {
        return ((VirtualQWizardPage*)self)->wizard();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnWizard(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Wizard_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Wizard_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_RegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->registerField(name_QString, widget, property);
    } else {
        ((VirtualQWizardPage*)self)->registerField(name_QString, widget, property);
    }
}

// Base class handler implementation
void QWizardPage_QBaseRegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_RegisterField3_IsBase(true);
        vqwizardpage->registerField(name_QString, widget, property);
    } else {
        ((VirtualQWizardPage*)self)->registerField(name_QString, widget, property);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRegisterField3(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_RegisterField3_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_RegisterField3_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_RegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->registerField(name_QString, widget, property, changedSignal);
    } else {
        ((VirtualQWizardPage*)self)->registerField(name_QString, widget, property, changedSignal);
    }
}

// Base class handler implementation
void QWizardPage_QBaseRegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_RegisterField4_IsBase(true);
        vqwizardpage->registerField(name_QString, widget, property, changedSignal);
    } else {
        ((VirtualQWizardPage*)self)->registerField(name_QString, widget, property, changedSignal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRegisterField4(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_RegisterField4_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_RegisterField4_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_UpdateMicroFocus(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->updateMicroFocus();
    } else {
        ((VirtualQWizardPage*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QWizardPage_QBaseUpdateMicroFocus(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_UpdateMicroFocus_IsBase(true);
        vqwizardpage->updateMicroFocus();
    } else {
        ((VirtualQWizardPage*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnUpdateMicroFocus(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_Create(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->create();
    } else {
        ((VirtualQWizardPage*)self)->create();
    }
}

// Base class handler implementation
void QWizardPage_QBaseCreate(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Create_IsBase(true);
        vqwizardpage->create();
    } else {
        ((VirtualQWizardPage*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCreate(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Create_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QWizardPage_Destroy(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->destroy();
    } else {
        ((VirtualQWizardPage*)self)->destroy();
    }
}

// Base class handler implementation
void QWizardPage_QBaseDestroy(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Destroy_IsBase(true);
        vqwizardpage->destroy();
    } else {
        ((VirtualQWizardPage*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDestroy(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Destroy_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_FocusNextChild(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->focusNextChild();
    } else {
        return ((VirtualQWizardPage*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseFocusNextChild(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusNextChild_IsBase(true);
        return vqwizardpage->focusNextChild();
    } else {
        return ((VirtualQWizardPage*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusNextChild(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusNextChild_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_FocusPreviousChild(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->focusPreviousChild();
    } else {
        return ((VirtualQWizardPage*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QWizardPage_QBaseFocusPreviousChild(QWizardPage* self) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusPreviousChild_IsBase(true);
        return vqwizardpage->focusPreviousChild();
    } else {
        return ((VirtualQWizardPage*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusPreviousChild(QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_FocusPreviousChild_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWizardPage_Sender(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->sender();
    } else {
        return ((VirtualQWizardPage*)self)->sender();
    }
}

// Base class handler implementation
QObject* QWizardPage_QBaseSender(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Sender_IsBase(true);
        return vqwizardpage->sender();
    } else {
        return ((VirtualQWizardPage*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSender(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Sender_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_SenderSignalIndex(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->senderSignalIndex();
    } else {
        return ((VirtualQWizardPage*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QWizardPage_QBaseSenderSignalIndex(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SenderSignalIndex_IsBase(true);
        return vqwizardpage->senderSignalIndex();
    } else {
        return ((VirtualQWizardPage*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSenderSignalIndex(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWizardPage_Receivers(const QWizardPage* self, const char* signal) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->receivers(signal);
    } else {
        return ((VirtualQWizardPage*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QWizardPage_QBaseReceivers(const QWizardPage* self, const char* signal) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Receivers_IsBase(true);
        return vqwizardpage->receivers(signal);
    } else {
        return ((VirtualQWizardPage*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnReceivers(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_Receivers_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWizardPage_IsSignalConnected(const QWizardPage* self, const QMetaMethod* signal) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        return vqwizardpage->isSignalConnected(*signal);
    } else {
        return ((VirtualQWizardPage*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWizardPage_QBaseIsSignalConnected(const QWizardPage* self, const QMetaMethod* signal) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_IsSignalConnected_IsBase(true);
        return vqwizardpage->isSignalConnected(*signal);
    } else {
        return ((VirtualQWizardPage*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnIsSignalConnected(const QWizardPage* self, intptr_t slot) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage && vqwizardpage->isVirtualQWizardPage) {
        vqwizardpage->setQWizardPage_IsSignalConnected_Callback(reinterpret_cast<VirtualQWizardPage::QWizardPage_IsSignalConnected_Callback>(slot));
    }
}

void QWizardPage_Delete(QWizardPage* self) {
    delete self;
}
