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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWizard_Tr(const char* s) {
    auto _ret = QWizard::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of int */ QWizard_PageIds(const QWizard* self) {
    QList<int> _ret = self->pageIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
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

bool QWizard_ValidateCurrentPage(QWizard* self) {
    return self->validateCurrentPage();
}

int QWizard_NextId(const QWizard* self) {
    return self->nextId();
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
    auto _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

void QWizard_SetVisible(QWizard* self, bool visible) {
    self->setVisible(visible);
}

QSize* QWizard_SizeHint(const QWizard* self) {
    return new QSize(self->sizeHint());
}

void QWizard_CurrentIdChanged(QWizard* self, int id) {
    self->currentIdChanged(static_cast<int>(id));
}

void QWizard_Connect_CurrentIdChanged(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self,
                     static_cast<void (QWizard::*)(int)>(&QWizard::currentIdChanged),
                     [self, slotFunc](int id) {
                         int sigval1 = id;
                         slotFunc(self, sigval1);
                     });
}

void QWizard_HelpRequested(QWizard* self) {
    self->helpRequested();
}

void QWizard_Connect_HelpRequested(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*) = reinterpret_cast<void (*)(QWizard*)>(slot);
    QWizard::connect(self,
                     static_cast<void (QWizard::*)()>(&QWizard::helpRequested),
                     [self, slotFunc]() {
                         slotFunc(self);
                     });
}

void QWizard_CustomButtonClicked(QWizard* self, int which) {
    self->customButtonClicked(static_cast<int>(which));
}

void QWizard_Connect_CustomButtonClicked(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self,
                     static_cast<void (QWizard::*)(int)>(&QWizard::customButtonClicked),
                     [self, slotFunc](int which) {
                         int sigval1 = which;
                         slotFunc(self, sigval1);
                     });
}

void QWizard_PageAdded(QWizard* self, int id) {
    self->pageAdded(static_cast<int>(id));
}

void QWizard_Connect_PageAdded(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self,
                     static_cast<void (QWizard::*)(int)>(&QWizard::pageAdded),
                     [self, slotFunc](int id) {
                         int sigval1 = id;
                         slotFunc(self, sigval1);
                     });
}

void QWizard_PageRemoved(QWizard* self, int id) {
    self->pageRemoved(static_cast<int>(id));
}

void QWizard_Connect_PageRemoved(QWizard* self, intptr_t slot) {
    void (*slotFunc)(QWizard*, int) = reinterpret_cast<void (*)(QWizard*, int)>(slot);
    QWizard::connect(self,
                     static_cast<void (QWizard::*)(int)>(&QWizard::pageRemoved),
                     [self, slotFunc](int id) {
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

bool QWizard_Event(QWizard* self, QEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        return vqwizard->event(event);
    }
    qFatal("Error: Protected method QWizard::event called without a directly constructed type");
}

void QWizard_ResizeEvent(QWizard* self, QResizeEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->resizeEvent(event);
    }
}

void QWizard_PaintEvent(QWizard* self, QPaintEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->paintEvent(event);
    }
}

void QWizard_Done(QWizard* self, int result) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->done(static_cast<int>(result));
    }
}

void QWizard_InitializePage(QWizard* self, int id) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->initializePage(static_cast<int>(id));
    }
}

void QWizard_CleanupPage(QWizard* self, int id) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->cleanupPage(static_cast<int>(id));
    }
}

libqt_string QWizard_Tr2(const char* s, const char* c) {
    auto _ret = QWizard::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWizard_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWizard::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizard_SetOption2(QWizard* self, int option, bool on) {
    self->setOption(static_cast<QWizard::WizardOption>(option), on);
}

// Base class handler implementation
QMetaObject* QWizard_SuperMetaObject(const QWizard* self) {
    return (QMetaObject*)self->QWizard::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMetaObject(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_metaobject_callback = reinterpret_cast<VirtualQWizard::QWizard_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWizard_SuperMetacast(QWizard* self, const char* param1) {
    return self->QWizard::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMetacast(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_metacast_callback = reinterpret_cast<VirtualQWizard::QWizard_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWizard_SuperMetacall(QWizard* self, int param1, int param2, void** param3) {
    return self->QWizard::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMetacall(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_metacall_callback = reinterpret_cast<VirtualQWizard::QWizard_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QWizard_SuperValidateCurrentPage(QWizard* self) {
    return self->QWizard::validateCurrentPage();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnValidateCurrentPage(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_validatecurrentpage_callback = reinterpret_cast<VirtualQWizard::QWizard_ValidateCurrentPage_Callback>(slot);
}

// Base class handler implementation
int QWizard_SuperNextId(const QWizard* self) {
    return self->QWizard::nextId();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnNextId(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_nextid_callback = reinterpret_cast<VirtualQWizard::QWizard_NextId_Callback>(slot);
}

// Base class handler implementation
void QWizard_SuperSetVisible(QWizard* self, bool visible) {
    self->QWizard::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSetVisible(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_setvisible_callback = reinterpret_cast<VirtualQWizard::QWizard_SetVisible_Callback>(slot);
}

// Base class handler implementation
QSize* QWizard_SuperSizeHint(const QWizard* self) {
    return new QSize(self->QWizard::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSizeHint(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_sizehint_callback = reinterpret_cast<VirtualQWizard::QWizard_SizeHint_Callback>(slot);
}

// Base class handler implementation
bool QWizard_SuperEvent(QWizard* self, QEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->QWizard::event(event);
    } else
        qFatal("Error: Protected virtual method QWizard::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_event_callback = reinterpret_cast<VirtualQWizard::QWizard_Event_Callback>(slot);
}

// Base class handler implementation
void QWizard_SuperResizeEvent(QWizard* self, QResizeEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnResizeEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_resizeevent_callback = reinterpret_cast<VirtualQWizard::QWizard_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QWizard_SuperPaintEvent(QWizard* self, QPaintEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnPaintEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_paintevent_callback = reinterpret_cast<VirtualQWizard::QWizard_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QWizard_SuperDone(QWizard* self, int result) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::done(static_cast<int>(result));
    } else
        qFatal("Error: Protected virtual method QWizard::done called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDone(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_done_callback = reinterpret_cast<VirtualQWizard::QWizard_Done_Callback>(slot);
}

// Base class handler implementation
void QWizard_SuperInitializePage(QWizard* self, int id) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::initializePage(static_cast<int>(id));
    } else
        qFatal("Error: Protected virtual method QWizard::initializePage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInitializePage(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_initializepage_callback = reinterpret_cast<VirtualQWizard::QWizard_InitializePage_Callback>(slot);
}

// Base class handler implementation
void QWizard_SuperCleanupPage(QWizard* self, int id) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::cleanupPage(static_cast<int>(id));
    } else
        qFatal("Error: Protected virtual method QWizard::cleanupPage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCleanupPage(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_cleanuppage_callback = reinterpret_cast<VirtualQWizard::QWizard_CleanupPage_Callback>(slot);
}

// Derived class handler implementation
QSize* QWizard_MinimumSizeHint(const QWizard* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QWizard_SuperMinimumSizeHint(const QWizard* self) {
    return new QSize(self->QWizard::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMinimumSizeHint(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_minimumsizehint_callback = reinterpret_cast<VirtualQWizard::QWizard_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QWizard_Open(QWizard* self) {
    self->open();
}

// Base class handler implementation
void QWizard_SuperOpen(QWizard* self) {
    self->QWizard::open();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnOpen(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_open_callback = reinterpret_cast<VirtualQWizard::QWizard_Open_Callback>(slot);
}

// Derived class handler implementation
int QWizard_Exec(QWizard* self) {
    return self->exec();
}

// Base class handler implementation
int QWizard_SuperExec(QWizard* self) {
    return self->QWizard::exec();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnExec(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_exec_callback = reinterpret_cast<VirtualQWizard::QWizard_Exec_Callback>(slot);
}

// Derived class handler implementation
void QWizard_Accept(QWizard* self) {
    self->accept();
}

// Base class handler implementation
void QWizard_SuperAccept(QWizard* self) {
    self->QWizard::accept();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnAccept(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_accept_callback = reinterpret_cast<VirtualQWizard::QWizard_Accept_Callback>(slot);
}

// Derived class handler implementation
void QWizard_Reject(QWizard* self) {
    self->reject();
}

// Base class handler implementation
void QWizard_SuperReject(QWizard* self) {
    self->QWizard::reject();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnReject(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_reject_callback = reinterpret_cast<VirtualQWizard::QWizard_Reject_Callback>(slot);
}

// Derived class handler implementation
void QWizard_KeyPressEvent(QWizard* self, QKeyEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWizard::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperKeyPressEvent(QWizard* self, QKeyEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWizard::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnKeyPressEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_keypressevent_callback = reinterpret_cast<VirtualQWizard::QWizard_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_CloseEvent(QWizard* self, QCloseEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWizard::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperCloseEvent(QWizard* self, QCloseEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWizard::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCloseEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_closeevent_callback = reinterpret_cast<VirtualQWizard::QWizard_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_ShowEvent(QWizard* self, QShowEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWizard::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperShowEvent(QWizard* self, QShowEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWizard::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnShowEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_showevent_callback = reinterpret_cast<VirtualQWizard::QWizard_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_ContextMenuEvent(QWizard* self, QContextMenuEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWizard::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperContextMenuEvent(QWizard* self, QContextMenuEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWizard::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnContextMenuEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_contextmenuevent_callback = reinterpret_cast<VirtualQWizard::QWizard_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QWizard_EventFilter(QWizard* self, QObject* param1, QEvent* param2) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        return vqwizard->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QWizard::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QWizard_SuperEventFilter(QWizard* self, QObject* param1, QEvent* param2) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->QWizard::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QWizard::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEventFilter(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_eventfilter_callback = reinterpret_cast<VirtualQWizard::QWizard_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QWizard_DevType(const QWizard* self) {
    return self->devType();
}

// Base class handler implementation
int QWizard_SuperDevType(const QWizard* self) {
    return self->QWizard::devType();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDevType(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_devtype_callback = reinterpret_cast<VirtualQWizard::QWizard_DevType_Callback>(slot);
}

// Derived class handler implementation
int QWizard_HeightForWidth(const QWizard* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QWizard_SuperHeightForWidth(const QWizard* self, int param1) {
    return self->QWizard::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnHeightForWidth(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_heightforwidth_callback = reinterpret_cast<VirtualQWizard::QWizard_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QWizard_HasHeightForWidth(const QWizard* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QWizard_SuperHasHeightForWidth(const QWizard* self) {
    return self->QWizard::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnHasHeightForWidth(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_hasheightforwidth_callback = reinterpret_cast<VirtualQWizard::QWizard_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QWizard_PaintEngine(const QWizard* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QWizard_SuperPaintEngine(const QWizard* self) {
    return self->QWizard::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnPaintEngine(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_paintengine_callback = reinterpret_cast<VirtualQWizard::QWizard_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QWizard_MousePressEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperMousePressEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMousePressEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_mousepressevent_callback = reinterpret_cast<VirtualQWizard::QWizard_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_MouseReleaseEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperMouseReleaseEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMouseReleaseEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_mousereleaseevent_callback = reinterpret_cast<VirtualQWizard::QWizard_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_MouseDoubleClickEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperMouseDoubleClickEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMouseDoubleClickEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_mousedoubleclickevent_callback = reinterpret_cast<VirtualQWizard::QWizard_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_MouseMoveEvent(QWizard* self, QMouseEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperMouseMoveEvent(QWizard* self, QMouseEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMouseMoveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_mousemoveevent_callback = reinterpret_cast<VirtualQWizard::QWizard_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_WheelEvent(QWizard* self, QWheelEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperWheelEvent(QWizard* self, QWheelEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnWheelEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_wheelevent_callback = reinterpret_cast<VirtualQWizard::QWizard_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_KeyReleaseEvent(QWizard* self, QKeyEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperKeyReleaseEvent(QWizard* self, QKeyEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnKeyReleaseEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_keyreleaseevent_callback = reinterpret_cast<VirtualQWizard::QWizard_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_FocusInEvent(QWizard* self, QFocusEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperFocusInEvent(QWizard* self, QFocusEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusInEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_focusinevent_callback = reinterpret_cast<VirtualQWizard::QWizard_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_FocusOutEvent(QWizard* self, QFocusEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperFocusOutEvent(QWizard* self, QFocusEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusOutEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_focusoutevent_callback = reinterpret_cast<VirtualQWizard::QWizard_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_EnterEvent(QWizard* self, QEnterEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperEnterEvent(QWizard* self, QEnterEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnEnterEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_enterevent_callback = reinterpret_cast<VirtualQWizard::QWizard_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_LeaveEvent(QWizard* self, QEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperLeaveEvent(QWizard* self, QEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnLeaveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_leaveevent_callback = reinterpret_cast<VirtualQWizard::QWizard_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_MoveEvent(QWizard* self, QMoveEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperMoveEvent(QWizard* self, QMoveEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMoveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_moveevent_callback = reinterpret_cast<VirtualQWizard::QWizard_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_TabletEvent(QWizard* self, QTabletEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperTabletEvent(QWizard* self, QTabletEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnTabletEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_tabletevent_callback = reinterpret_cast<VirtualQWizard::QWizard_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_ActionEvent(QWizard* self, QActionEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperActionEvent(QWizard* self, QActionEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnActionEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_actionevent_callback = reinterpret_cast<VirtualQWizard::QWizard_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_DragEnterEvent(QWizard* self, QDragEnterEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperDragEnterEvent(QWizard* self, QDragEnterEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDragEnterEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_dragenterevent_callback = reinterpret_cast<VirtualQWizard::QWizard_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_DragMoveEvent(QWizard* self, QDragMoveEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperDragMoveEvent(QWizard* self, QDragMoveEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDragMoveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_dragmoveevent_callback = reinterpret_cast<VirtualQWizard::QWizard_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_DragLeaveEvent(QWizard* self, QDragLeaveEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperDragLeaveEvent(QWizard* self, QDragLeaveEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDragLeaveEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_dragleaveevent_callback = reinterpret_cast<VirtualQWizard::QWizard_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_DropEvent(QWizard* self, QDropEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperDropEvent(QWizard* self, QDropEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDropEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_dropevent_callback = reinterpret_cast<VirtualQWizard::QWizard_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_HideEvent(QWizard* self, QHideEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperHideEvent(QWizard* self, QHideEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnHideEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_hideevent_callback = reinterpret_cast<VirtualQWizard::QWizard_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QWizard_NativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        return vqwizard->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QWizard::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QWizard_SuperNativeEvent(QWizard* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->QWizard::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QWizard::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnNativeEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_nativeevent_callback = reinterpret_cast<VirtualQWizard::QWizard_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_ChangeEvent(QWizard* self, QEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWizard::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperChangeEvent(QWizard* self, QEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWizard::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnChangeEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_changeevent_callback = reinterpret_cast<VirtualQWizard::QWizard_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QWizard_Metric(const QWizard* self, int param1) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard) {
        return vqwizard->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QWizard::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QWizard_SuperMetric(const QWizard* self, int param1) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->QWizard::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QWizard::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnMetric(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_metric_callback = reinterpret_cast<VirtualQWizard::QWizard_Metric_Callback>(slot);
}

// Derived class handler implementation
void QWizard_InitPainter(const QWizard* self, QPainter* painter) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard) {
        vqwizard->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QWizard::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperInitPainter(const QWizard* self, QPainter* painter) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        vqwizard->QWizard::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QWizard::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInitPainter(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_initpainter_callback = reinterpret_cast<VirtualQWizard::QWizard_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QWizard_Redirected(const QWizard* self, QPoint* offset) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard) {
        return vqwizard->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QWizard::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QWizard_SuperRedirected(const QWizard* self, QPoint* offset) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->QWizard::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QWizard::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnRedirected(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_redirected_callback = reinterpret_cast<VirtualQWizard::QWizard_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QWizard_SharedPainter(const QWizard* self) {
    auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self));
    if (vqwizard) {
        return vqwizard->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QWizard::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QWizard_SuperSharedPainter(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->QWizard::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QWizard::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnSharedPainter(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_sharedpainter_callback = reinterpret_cast<VirtualQWizard::QWizard_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QWizard_InputMethodEvent(QWizard* self, QInputMethodEvent* param1) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWizard::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperInputMethodEvent(QWizard* self, QInputMethodEvent* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWizard::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInputMethodEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_inputmethodevent_callback = reinterpret_cast<VirtualQWizard::QWizard_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QWizard_InputMethodQuery(const QWizard* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QWizard_SuperInputMethodQuery(const QWizard* self, int param1) {
    return new QVariant(self->QWizard::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnInputMethodQuery(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self)))
        vqwizard->qwizard_inputmethodquery_callback = reinterpret_cast<VirtualQWizard::QWizard_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QWizard_FocusNextPrevChild(QWizard* self, bool next) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        return vqwizard->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QWizard::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QWizard_SuperFocusNextPrevChild(QWizard* self, bool next) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->QWizard::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QWizard::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnFocusNextPrevChild(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_focusnextprevchild_callback = reinterpret_cast<VirtualQWizard::QWizard_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QWizard_TimerEvent(QWizard* self, QTimerEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperTimerEvent(QWizard* self, QTimerEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnTimerEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_timerevent_callback = reinterpret_cast<VirtualQWizard::QWizard_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_ChildEvent(QWizard* self, QChildEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperChildEvent(QWizard* self, QChildEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnChildEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_childevent_callback = reinterpret_cast<VirtualQWizard::QWizard_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_CustomEvent(QWizard* self, QEvent* event) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizard::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperCustomEvent(QWizard* self, QEvent* event) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizard::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnCustomEvent(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_customevent_callback = reinterpret_cast<VirtualQWizard::QWizard_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizard_ConnectNotify(QWizard* self, const QMetaMethod* signal) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWizard::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperConnectNotify(QWizard* self, const QMetaMethod* signal) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWizard::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnConnectNotify(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_connectnotify_callback = reinterpret_cast<VirtualQWizard::QWizard_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWizard_DisconnectNotify(QWizard* self, const QMetaMethod* signal) {
    auto* vqwizard = dynamic_cast<VirtualQWizard*>(self);
    if (vqwizard) {
        vqwizard->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWizard::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizard_SuperDisconnectNotify(QWizard* self, const QMetaMethod* signal) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->QWizard::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWizard::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizard_OnDisconnectNotify(QWizard* self, intptr_t slot) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self))
        vqwizard->qwizard_disconnectnotify_callback = reinterpret_cast<VirtualQWizard::QWizard_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QWizard_AdjustPosition(QWizard* self, QWidget* param1) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->VirtualQWizard::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QWizard::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QWizard_UpdateMicroFocus(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->VirtualQWizard::updateMicroFocus();
    } else
        qFatal("Error: Protected method QWizard::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QWizard_Create(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->VirtualQWizard::create();
    } else
        qFatal("Error: Protected method QWizard::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QWizard_Destroy(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        vqwizard->VirtualQWizard::destroy();
    } else
        qFatal("Error: Protected method QWizard::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWizard_FocusNextChild(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->VirtualQWizard::focusNextChild();
    } else
        qFatal("Error: Protected method QWizard::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWizard_FocusPreviousChild(QWizard* self) {
    if (auto* vqwizard = dynamic_cast<VirtualQWizard*>(self)) {
        return vqwizard->VirtualQWizard::focusPreviousChild();
    } else
        qFatal("Error: Protected method QWizard::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QWizard_Sender(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->VirtualQWizard::sender();
    } else
        qFatal("Error: Protected method QWizard::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWizard_SenderSignalIndex(const QWizard* self) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->VirtualQWizard::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWizard::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWizard_Receivers(const QWizard* self, const char* signal) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->VirtualQWizard::receivers(signal);
    } else
        qFatal("Error: Protected method QWizard::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWizard_IsSignalConnected(const QWizard* self, const QMetaMethod* signal) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->VirtualQWizard::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWizard::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QWizard_GetDecodedMetricF(const QWizard* self, int metricA, int metricB) {
    if (auto* vqwizard = const_cast<VirtualQWizard*>(dynamic_cast<const VirtualQWizard*>(self))) {
        return vqwizard->VirtualQWizard::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QWizard::getDecodedMetricF called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWizardPage_Tr(const char* s) {
    auto _ret = QWizardPage::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizardPage_SetTitle(QWizardPage* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string QWizardPage_Title(const QWizardPage* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizardPage_SetSubTitle(QWizardPage* self, const libqt_string subTitle) {
    QString subTitle_QString = QString::fromUtf8(subTitle.data, subTitle.len);
    self->setSubTitle(subTitle_QString);
}

libqt_string QWizardPage_SubTitle(const QWizardPage* self) {
    auto _ret = self->subTitle();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    auto _ret = self->buttonText(static_cast<QWizard::WizardButton>(which));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWizardPage_InitializePage(QWizardPage* self) {
    self->initializePage();
}

void QWizardPage_CleanupPage(QWizardPage* self) {
    self->cleanupPage();
}

bool QWizardPage_ValidatePage(QWizardPage* self) {
    return self->validatePage();
}

bool QWizardPage_IsComplete(const QWizardPage* self) {
    return self->isComplete();
}

int QWizardPage_NextId(const QWizardPage* self) {
    return self->nextId();
}

void QWizardPage_CompleteChanged(QWizardPage* self) {
    self->completeChanged();
}

void QWizardPage_Connect_CompleteChanged(QWizardPage* self, intptr_t slot) {
    void (*slotFunc)(QWizardPage*) = reinterpret_cast<void (*)(QWizardPage*)>(slot);
    QWizardPage::connect(self,
                         static_cast<void (QWizardPage::*)()>(&QWizardPage::completeChanged),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

libqt_string QWizardPage_Tr2(const char* s, const char* c) {
    auto _ret = QWizardPage::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWizardPage_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWizardPage::tr(s, c, static_cast<int>(n));
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
QMetaObject* QWizardPage_SuperMetaObject(const QWizardPage* self) {
    return (QMetaObject*)self->QWizardPage::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMetaObject(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_metaobject_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWizardPage_SuperMetacast(QWizardPage* self, const char* param1) {
    return self->QWizardPage::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMetacast(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_metacast_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWizardPage_SuperMetacall(QWizardPage* self, int param1, int param2, void** param3) {
    return self->QWizardPage::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMetacall(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_metacall_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_Metacall_Callback>(slot);
}

// Base class handler implementation
void QWizardPage_SuperInitializePage(QWizardPage* self) {
    self->QWizardPage::initializePage();
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInitializePage(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_initializepage_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_InitializePage_Callback>(slot);
}

// Base class handler implementation
void QWizardPage_SuperCleanupPage(QWizardPage* self) {
    self->QWizardPage::cleanupPage();
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCleanupPage(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_cleanuppage_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_CleanupPage_Callback>(slot);
}

// Base class handler implementation
bool QWizardPage_SuperValidatePage(QWizardPage* self) {
    return self->QWizardPage::validatePage();
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnValidatePage(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_validatepage_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_ValidatePage_Callback>(slot);
}

// Base class handler implementation
bool QWizardPage_SuperIsComplete(const QWizardPage* self) {
    return self->QWizardPage::isComplete();
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnIsComplete(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_iscomplete_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_IsComplete_Callback>(slot);
}

// Base class handler implementation
int QWizardPage_SuperNextId(const QWizardPage* self) {
    return self->QWizardPage::nextId();
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnNextId(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_nextid_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_NextId_Callback>(slot);
}

// Derived class handler implementation
int QWizardPage_DevType(const QWizardPage* self) {
    return self->devType();
}

// Base class handler implementation
int QWizardPage_SuperDevType(const QWizardPage* self) {
    return self->QWizardPage::devType();
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDevType(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_devtype_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_DevType_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_SetVisible(QWizardPage* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QWizardPage_SuperSetVisible(QWizardPage* self, bool visible) {
    self->QWizardPage::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSetVisible(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_setvisible_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QWizardPage_SizeHint(const QWizardPage* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QWizardPage_SuperSizeHint(const QWizardPage* self) {
    return new QSize(self->QWizardPage::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSizeHint(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_sizehint_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QWizardPage_MinimumSizeHint(const QWizardPage* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QWizardPage_SuperMinimumSizeHint(const QWizardPage* self) {
    return new QSize(self->QWizardPage::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMinimumSizeHint(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_minimumsizehint_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QWizardPage_HeightForWidth(const QWizardPage* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QWizardPage_SuperHeightForWidth(const QWizardPage* self, int param1) {
    return self->QWizardPage::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnHeightForWidth(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_heightforwidth_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QWizardPage_HasHeightForWidth(const QWizardPage* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QWizardPage_SuperHasHeightForWidth(const QWizardPage* self) {
    return self->QWizardPage::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnHasHeightForWidth(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_hasheightforwidth_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QWizardPage_PaintEngine(const QWizardPage* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QWizardPage_SuperPaintEngine(const QWizardPage* self) {
    return self->QWizardPage::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnPaintEngine(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_paintengine_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QWizardPage_Event(QWizardPage* self, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        return vqwizardpage->event(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QWizardPage_SuperEvent(QWizardPage* self, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->QWizardPage::event(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_event_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_Event_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_MousePressEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperMousePressEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMousePressEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_mousepressevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_MouseReleaseEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperMouseReleaseEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMouseReleaseEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_mousereleaseevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_MouseDoubleClickEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperMouseDoubleClickEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMouseDoubleClickEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_mousedoubleclickevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_MouseMoveEvent(QWizardPage* self, QMouseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperMouseMoveEvent(QWizardPage* self, QMouseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMouseMoveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_mousemoveevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_WheelEvent(QWizardPage* self, QWheelEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperWheelEvent(QWizardPage* self, QWheelEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnWheelEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_wheelevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_KeyPressEvent(QWizardPage* self, QKeyEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperKeyPressEvent(QWizardPage* self, QKeyEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnKeyPressEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_keypressevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_KeyReleaseEvent(QWizardPage* self, QKeyEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperKeyReleaseEvent(QWizardPage* self, QKeyEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnKeyReleaseEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_keyreleaseevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_FocusInEvent(QWizardPage* self, QFocusEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperFocusInEvent(QWizardPage* self, QFocusEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusInEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_focusinevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_FocusOutEvent(QWizardPage* self, QFocusEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperFocusOutEvent(QWizardPage* self, QFocusEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusOutEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_focusoutevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_EnterEvent(QWizardPage* self, QEnterEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperEnterEvent(QWizardPage* self, QEnterEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnEnterEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_enterevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_LeaveEvent(QWizardPage* self, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperLeaveEvent(QWizardPage* self, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnLeaveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_leaveevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_PaintEvent(QWizardPage* self, QPaintEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperPaintEvent(QWizardPage* self, QPaintEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnPaintEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_paintevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_MoveEvent(QWizardPage* self, QMoveEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperMoveEvent(QWizardPage* self, QMoveEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMoveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_moveevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_ResizeEvent(QWizardPage* self, QResizeEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperResizeEvent(QWizardPage* self, QResizeEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnResizeEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_resizeevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_CloseEvent(QWizardPage* self, QCloseEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperCloseEvent(QWizardPage* self, QCloseEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCloseEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_closeevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_ContextMenuEvent(QWizardPage* self, QContextMenuEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperContextMenuEvent(QWizardPage* self, QContextMenuEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnContextMenuEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_contextmenuevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_TabletEvent(QWizardPage* self, QTabletEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperTabletEvent(QWizardPage* self, QTabletEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnTabletEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_tabletevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_ActionEvent(QWizardPage* self, QActionEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperActionEvent(QWizardPage* self, QActionEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnActionEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_actionevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_DragEnterEvent(QWizardPage* self, QDragEnterEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperDragEnterEvent(QWizardPage* self, QDragEnterEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDragEnterEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_dragenterevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_DragMoveEvent(QWizardPage* self, QDragMoveEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperDragMoveEvent(QWizardPage* self, QDragMoveEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDragMoveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_dragmoveevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_DragLeaveEvent(QWizardPage* self, QDragLeaveEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperDragLeaveEvent(QWizardPage* self, QDragLeaveEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDragLeaveEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_dragleaveevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_DropEvent(QWizardPage* self, QDropEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperDropEvent(QWizardPage* self, QDropEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDropEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_dropevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_ShowEvent(QWizardPage* self, QShowEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperShowEvent(QWizardPage* self, QShowEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnShowEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_showevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_HideEvent(QWizardPage* self, QHideEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperHideEvent(QWizardPage* self, QHideEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnHideEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_hideevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QWizardPage_NativeEvent(QWizardPage* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        return vqwizardpage->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QWizardPage::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QWizardPage_SuperNativeEvent(QWizardPage* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->QWizardPage::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QWizardPage::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnNativeEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_nativeevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_ChangeEvent(QWizardPage* self, QEvent* param1) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperChangeEvent(QWizardPage* self, QEvent* param1) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWizardPage::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnChangeEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_changeevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QWizardPage_Metric(const QWizardPage* self, int param1) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage) {
        return vqwizardpage->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QWizardPage::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QWizardPage_SuperMetric(const QWizardPage* self, int param1) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->QWizardPage::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QWizardPage::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnMetric(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_metric_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_Metric_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_InitPainter(const QWizardPage* self, QPainter* painter) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage) {
        vqwizardpage->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperInitPainter(const QWizardPage* self, QPainter* painter) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        vqwizardpage->QWizardPage::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QWizardPage::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInitPainter(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_initpainter_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QWizardPage_Redirected(const QWizardPage* self, QPoint* offset) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage) {
        return vqwizardpage->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QWizardPage_SuperRedirected(const QWizardPage* self, QPoint* offset) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->QWizardPage::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QWizardPage::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnRedirected(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_redirected_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QWizardPage_SharedPainter(const QWizardPage* self) {
    auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self));
    if (vqwizardpage) {
        return vqwizardpage->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QWizardPage::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QWizardPage_SuperSharedPainter(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->QWizardPage::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QWizardPage::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnSharedPainter(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_sharedpainter_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_InputMethodEvent(QWizardPage* self, QInputMethodEvent* param1) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperInputMethodEvent(QWizardPage* self, QInputMethodEvent* param1) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWizardPage::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInputMethodEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_inputmethodevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QWizardPage_InputMethodQuery(const QWizardPage* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QWizardPage_SuperInputMethodQuery(const QWizardPage* self, int param1) {
    return new QVariant(self->QWizardPage::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnInputMethodQuery(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        vqwizardpage->qwizardpage_inputmethodquery_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QWizardPage_FocusNextPrevChild(QWizardPage* self, bool next) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        return vqwizardpage->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QWizardPage_SuperFocusNextPrevChild(QWizardPage* self, bool next) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->QWizardPage::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QWizardPage::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnFocusNextPrevChild(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_focusnextprevchild_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QWizardPage_EventFilter(QWizardPage* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QWizardPage_SuperEventFilter(QWizardPage* self, QObject* watched, QEvent* event) {
    return self->QWizardPage::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnEventFilter(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_eventfilter_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_TimerEvent(QWizardPage* self, QTimerEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperTimerEvent(QWizardPage* self, QTimerEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnTimerEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_timerevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_ChildEvent(QWizardPage* self, QChildEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperChildEvent(QWizardPage* self, QChildEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnChildEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_childevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_CustomEvent(QWizardPage* self, QEvent* event) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperCustomEvent(QWizardPage* self, QEvent* event) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWizardPage::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnCustomEvent(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_customevent_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_ConnectNotify(QWizardPage* self, const QMetaMethod* signal) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperConnectNotify(QWizardPage* self, const QMetaMethod* signal) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWizardPage::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnConnectNotify(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_connectnotify_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWizardPage_DisconnectNotify(QWizardPage* self, const QMetaMethod* signal) {
    auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self);
    if (vqwizardpage) {
        vqwizardpage->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWizardPage::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWizardPage_SuperDisconnectNotify(QWizardPage* self, const QMetaMethod* signal) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->QWizardPage::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWizardPage::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWizardPage_OnDisconnectNotify(QWizardPage* self, intptr_t slot) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self))
        vqwizardpage->qwizardpage_disconnectnotify_callback = reinterpret_cast<VirtualQWizardPage::QWizardPage_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QWizardPage_SetField(QWizardPage* self, const libqt_string name, const QVariant* value) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        vqwizardpage->VirtualQWizardPage::setField(name_QString, *value);
    } else
        qFatal("Error: Protected method QWizardPage::setField called without a directly constructed type");
}

// Derived class handler implementation
QVariant* QWizardPage_Field(const QWizardPage* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self)))
        return new QVariant(vqwizardpage->field(name_QString));
    qFatal("Error: Protected method QWizardPage::field called without a directly constructed type");
}

// Derived class protected handler implementation
void QWizardPage_RegisterField(QWizardPage* self, const libqt_string name, QWidget* widget) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        vqwizardpage->VirtualQWizardPage::registerField(name_QString, widget);
    } else
        qFatal("Error: Protected method QWizardPage::registerField called without a directly constructed type");
}

// Derived class protected handler implementation
QWizard* QWizardPage_Wizard(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->VirtualQWizardPage::wizard();
    } else
        qFatal("Error: Protected method QWizardPage::wizard called without a directly constructed type");
}

// Derived class protected handler implementation
void QWizardPage_RegisterField3(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        vqwizardpage->VirtualQWizardPage::registerField(name_QString, widget, property);
    } else
        qFatal("Error: Protected method QWizardPage::registerField3 called without a directly constructed type");
}

// Derived class protected handler implementation
void QWizardPage_RegisterField4(QWizardPage* self, const libqt_string name, QWidget* widget, const char* property, const char* changedSignal) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        QString name_QString = QString::fromUtf8(name.data, name.len);
        vqwizardpage->VirtualQWizardPage::registerField(name_QString, widget, property, changedSignal);
    } else
        qFatal("Error: Protected method QWizardPage::registerField4 called without a directly constructed type");
}

// Derived class protected handler implementation
void QWizardPage_UpdateMicroFocus(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->VirtualQWizardPage::updateMicroFocus();
    } else
        qFatal("Error: Protected method QWizardPage::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QWizardPage_Create(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->VirtualQWizardPage::create();
    } else
        qFatal("Error: Protected method QWizardPage::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QWizardPage_Destroy(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        vqwizardpage->VirtualQWizardPage::destroy();
    } else
        qFatal("Error: Protected method QWizardPage::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWizardPage_FocusNextChild(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->VirtualQWizardPage::focusNextChild();
    } else
        qFatal("Error: Protected method QWizardPage::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWizardPage_FocusPreviousChild(QWizardPage* self) {
    if (auto* vqwizardpage = dynamic_cast<VirtualQWizardPage*>(self)) {
        return vqwizardpage->VirtualQWizardPage::focusPreviousChild();
    } else
        qFatal("Error: Protected method QWizardPage::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QWizardPage_Sender(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->VirtualQWizardPage::sender();
    } else
        qFatal("Error: Protected method QWizardPage::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWizardPage_SenderSignalIndex(const QWizardPage* self) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->VirtualQWizardPage::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWizardPage::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWizardPage_Receivers(const QWizardPage* self, const char* signal) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->VirtualQWizardPage::receivers(signal);
    } else
        qFatal("Error: Protected method QWizardPage::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWizardPage_IsSignalConnected(const QWizardPage* self, const QMetaMethod* signal) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->VirtualQWizardPage::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWizardPage::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QWizardPage_GetDecodedMetricF(const QWizardPage* self, int metricA, int metricB) {
    if (auto* vqwizardpage = const_cast<VirtualQWizardPage*>(dynamic_cast<const VirtualQWizardPage*>(self))) {
        return vqwizardpage->VirtualQWizardPage::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QWizardPage::getDecodedMetricF called without a directly constructed type");
}

void QWizardPage_Delete(QWizardPage* self) {
    delete self;
}
