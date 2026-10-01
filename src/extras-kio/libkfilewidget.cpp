#include <KConfigGroup>
#include <KDirOperator>
#include <KFileFilter>
#include <KFileFilterCombo>
#include <KFileWidget>
#include <KPreviewWidgetBase>
#include <KUrlComboBox>
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
#include <QPoint>
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kfilewidget.h>
#include "libkfilewidget.h"
#include "libkfilewidget.hxx"

KFileWidget* KFileWidget_new(const QUrl* startDir) {
    return new VirtualKFileWidget(*startDir);
}

KFileWidget* KFileWidget_new2(const QUrl* startDir, QWidget* parent) {
    return new VirtualKFileWidget(*startDir, parent);
}

QMetaObject* KFileWidget_MetaObject(const KFileWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileWidget_Metacast(KFileWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileWidget_Metacall(KFileWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFileWidget_Tr(const char* s) {
    auto _ret = KFileWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KFileWidget_SelectedUrl(const KFileWidget* self) {
    return new QUrl(self->selectedUrl());
}

libqt_list /* of QUrl* */ KFileWidget_SelectedUrls(const KFileWidget* self) {
    QList<QUrl> _ret = self->selectedUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QUrl* KFileWidget_BaseUrl(const KFileWidget* self) {
    return new QUrl(self->baseUrl());
}

libqt_string KFileWidget_SelectedFile(const KFileWidget* self) {
    auto _ret = self->selectedFile();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KFileWidget_SelectedFiles(const KFileWidget* self) {
    QList<QString> _ret = self->selectedFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileWidget_SetUrl(KFileWidget* self, const QUrl* url) {
    self->setUrl(*url);
}

void KFileWidget_SetSelectedUrl(KFileWidget* self, const QUrl* url) {
    self->setSelectedUrl(*url);
}

void KFileWidget_SetSelectedUrls(KFileWidget* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->setSelectedUrls(urls_QList);
}

void KFileWidget_SetOperationMode(KFileWidget* self, int operationMode) {
    self->setOperationMode(static_cast<KFileWidget::OperationMode>(operationMode));
}

int KFileWidget_OperationMode(const KFileWidget* self) {
    return static_cast<int>(self->operationMode());
}

void KFileWidget_SetKeepLocation(KFileWidget* self, bool keep) {
    self->setKeepLocation(keep);
}

bool KFileWidget_KeepsLocation(const KFileWidget* self) {
    return self->keepsLocation();
}

void KFileWidget_SetFilters(KFileWidget* self, const libqt_list /* of KFileFilter* */ filters) {
    QList<KFileFilter> filters_QList;
    filters_QList.reserve(filters.len);
    KFileFilter** filters_arr = static_cast<KFileFilter**>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        filters_QList.push_back(*(filters_arr[i]));
    }
    self->setFilters(filters_QList);
}

KFileFilter* KFileWidget_CurrentFilter(const KFileWidget* self) {
    return new KFileFilter(self->currentFilter());
}

void KFileWidget_ClearFilter(KFileWidget* self) {
    self->clearFilter();
}

void KFileWidget_SetPreviewWidget(KFileWidget* self, KPreviewWidgetBase* w) {
    self->setPreviewWidget(w);
}

void KFileWidget_SetMode(KFileWidget* self, int m) {
    self->setMode(static_cast<KFile::Modes>(m));
}

int KFileWidget_Mode(const KFileWidget* self) {
    return static_cast<int>(self->mode());
}

void KFileWidget_SetLocationLabel(KFileWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setLocationLabel(text_QString);
}

QPushButton* KFileWidget_OkButton(const KFileWidget* self) {
    return self->okButton();
}

QPushButton* KFileWidget_CancelButton(const KFileWidget* self) {
    return self->cancelButton();
}

KUrlComboBox* KFileWidget_LocationEdit(const KFileWidget* self) {
    return self->locationEdit();
}

KFileFilterCombo* KFileWidget_FilterWidget(const KFileWidget* self) {
    return self->filterWidget();
}

QUrl* KFileWidget_GetStartUrl(const QUrl* startDir, libqt_string recentDirClass) {
    QString recentDirClass_QString = QString::fromUtf8(recentDirClass.data, recentDirClass.len);
    return new QUrl(KFileWidget::getStartUrl(*startDir, recentDirClass_QString));
}

QUrl* KFileWidget_GetStartUrl2(const QUrl* startDir, libqt_string recentDirClass, libqt_string fileName) {
    QString recentDirClass_QString = QString::fromUtf8(recentDirClass.data, recentDirClass.len);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QUrl(KFileWidget::getStartUrl(*startDir, recentDirClass_QString, fileName_QString));
}

void KFileWidget_SetStartDir(const QUrl* directory) {
    KFileWidget::setStartDir(*directory);
}

void KFileWidget_SetCustomWidget(KFileWidget* self, QWidget* widget) {
    self->setCustomWidget(widget);
}

void KFileWidget_SetCustomWidget2(KFileWidget* self, const libqt_string text, QWidget* widget) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setCustomWidget(text_QString, widget);
}

void KFileWidget_SetConfirmOverwrite(KFileWidget* self, bool enable) {
    self->setConfirmOverwrite(enable);
}

void KFileWidget_SetInlinePreviewShown(KFileWidget* self, bool show) {
    self->setInlinePreviewShown(show);
}

QSize* KFileWidget_DialogSizeHint(const KFileWidget* self) {
    return new QSize(self->dialogSizeHint());
}

void KFileWidget_SetViewMode(KFileWidget* self, int mode) {
    self->setViewMode(static_cast<KFile::FileView>(mode));
}

QSize* KFileWidget_SizeHint(const KFileWidget* self) {
    return new QSize(self->sizeHint());
}

void KFileWidget_SetSupportedSchemes(KFileWidget* self, const libqt_list /* of libqt_string */ schemes) {
    QList<QString> schemes_QList;
    schemes_QList.reserve(schemes.len);
    libqt_string* schemes_arr = static_cast<libqt_string*>(schemes.data);
    for (size_t i = 0; i < schemes.len; ++i) {
        QString schemes_arr_i_QString = QString::fromUtf8(schemes_arr[i].data, schemes_arr[i].len);
        schemes_QList.push_back(schemes_arr_i_QString);
    }
    self->setSupportedSchemes(schemes_QList);
}

libqt_list /* of libqt_string */ KFileWidget_SupportedSchemes(const KFileWidget* self) {
    QList<QString> _ret = self->supportedSchemes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileWidget_SlotOk(KFileWidget* self) {
    self->slotOk();
}

void KFileWidget_Accept(KFileWidget* self) {
    self->accept();
}

void KFileWidget_SlotCancel(KFileWidget* self) {
    self->slotCancel();
}

void KFileWidget_ResizeEvent(KFileWidget* self, QResizeEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->resizeEvent(event);
    }
}

void KFileWidget_ShowEvent(KFileWidget* self, QShowEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->showEvent(event);
    }
}

bool KFileWidget_EventFilter(KFileWidget* self, QObject* watched, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        return vkfilewidget->eventFilter(watched, event);
    }
    qFatal("Error: Protected method KFileWidget::eventFilter called without a directly constructed type");
}

void KFileWidget_FileSelected(KFileWidget* self, const QUrl* param1) {
    self->fileSelected(*param1);
}

void KFileWidget_Connect_FileSelected(KFileWidget* self, intptr_t slot) {
    void (*slotFunc)(KFileWidget*, QUrl*) = reinterpret_cast<void (*)(KFileWidget*, QUrl*)>(slot);
    KFileWidget::connect(self,
                         static_cast<void (KFileWidget::*)(const QUrl&)>(&KFileWidget::fileSelected),
                         [self, slotFunc](const QUrl& param1) {
                             const QUrl& param1_ret = param1;
                             // Cast returned reference into pointer
                             QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
                             slotFunc(self, sigval1);
                         });
}

void KFileWidget_FileHighlighted(KFileWidget* self, const QUrl* param1) {
    self->fileHighlighted(*param1);
}

void KFileWidget_Connect_FileHighlighted(KFileWidget* self, intptr_t slot) {
    void (*slotFunc)(KFileWidget*, QUrl*) = reinterpret_cast<void (*)(KFileWidget*, QUrl*)>(slot);
    KFileWidget::connect(self,
                         static_cast<void (KFileWidget::*)(const QUrl&)>(&KFileWidget::fileHighlighted),
                         [self, slotFunc](const QUrl& param1) {
                             const QUrl& param1_ret = param1;
                             // Cast returned reference into pointer
                             QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
                             slotFunc(self, sigval1);
                         });
}

void KFileWidget_SelectionChanged(KFileWidget* self) {
    self->selectionChanged();
}

void KFileWidget_Connect_SelectionChanged(KFileWidget* self, intptr_t slot) {
    void (*slotFunc)(KFileWidget*) = reinterpret_cast<void (*)(KFileWidget*)>(slot);
    KFileWidget::connect(self,
                         static_cast<void (KFileWidget::*)()>(&KFileWidget::selectionChanged),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void KFileWidget_FilterChanged(KFileWidget* self, const KFileFilter* filter) {
    self->filterChanged(*filter);
}

void KFileWidget_Connect_FilterChanged(KFileWidget* self, intptr_t slot) {
    void (*slotFunc)(KFileWidget*, KFileFilter*) = reinterpret_cast<void (*)(KFileWidget*, KFileFilter*)>(slot);
    KFileWidget::connect(self,
                         static_cast<void (KFileWidget::*)(const KFileFilter&)>(&KFileWidget::filterChanged),
                         [self, slotFunc](const KFileFilter& filter) {
                             const KFileFilter& filter_ret = filter;
                             // Cast returned reference into pointer
                             KFileFilter* sigval1 = const_cast<KFileFilter*>(&filter_ret);
                             slotFunc(self, sigval1);
                         });
}

void KFileWidget_Accepted(KFileWidget* self) {
    self->accepted();
}

void KFileWidget_Connect_Accepted(KFileWidget* self, intptr_t slot) {
    void (*slotFunc)(KFileWidget*) = reinterpret_cast<void (*)(KFileWidget*)>(slot);
    KFileWidget::connect(self,
                         static_cast<void (KFileWidget::*)()>(&KFileWidget::accepted),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

KDirOperator* KFileWidget_DirOperator(KFileWidget* self) {
    return self->dirOperator();
}

void KFileWidget_ReadConfig(KFileWidget* self, KConfigGroup* group) {
    self->readConfig(*group);
}

libqt_string KFileWidget_Tr2(const char* s, const char* c) {
    auto _ret = KFileWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KFileWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileWidget_SetUrl2(KFileWidget* self, const QUrl* url, bool clearforward) {
    self->setUrl(*url, clearforward);
}

void KFileWidget_SetFilters2(KFileWidget* self, const libqt_list /* of KFileFilter* */ filters, const KFileFilter* activeFilter) {
    QList<KFileFilter> filters_QList;
    filters_QList.reserve(filters.len);
    KFileFilter** filters_arr = static_cast<KFileFilter**>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        filters_QList.push_back(*(filters_arr[i]));
    }
    self->setFilters(filters_QList, *activeFilter);
}

// Base class handler implementation
QMetaObject* KFileWidget_SuperMetaObject(const KFileWidget* self) {
    return (QMetaObject*)self->KFileWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMetaObject(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_metaobject_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFileWidget_SuperMetacast(KFileWidget* self, const char* param1) {
    return self->KFileWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMetacast(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_metacast_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFileWidget_SuperMetacall(KFileWidget* self, int param1, int param2, void** param3) {
    return self->KFileWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMetacall(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_metacall_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* KFileWidget_SuperSizeHint(const KFileWidget* self) {
    return new QSize(self->KFileWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnSizeHint(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_sizehint_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
void KFileWidget_SuperResizeEvent(KFileWidget* self, QResizeEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnResizeEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_resizeevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void KFileWidget_SuperShowEvent(KFileWidget* self, QShowEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnShowEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_showevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_ShowEvent_Callback>(slot);
}

// Base class handler implementation
bool KFileWidget_SuperEventFilter(KFileWidget* self, QObject* watched, QEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        return vkfilewidget->KFileWidget::eventFilter(watched, event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnEventFilter(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_eventfilter_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KFileWidget_DevType(const KFileWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KFileWidget_SuperDevType(const KFileWidget* self) {
    return self->KFileWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDevType(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_devtype_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_SetVisible(KFileWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KFileWidget_SuperSetVisible(KFileWidget* self, bool visible) {
    self->KFileWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnSetVisible(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_setvisible_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KFileWidget_MinimumSizeHint(const KFileWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KFileWidget_SuperMinimumSizeHint(const KFileWidget* self) {
    return new QSize(self->KFileWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMinimumSizeHint(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_minimumsizehint_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KFileWidget_HeightForWidth(const KFileWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KFileWidget_SuperHeightForWidth(const KFileWidget* self, int param1) {
    return self->KFileWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnHeightForWidth(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_heightforwidth_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KFileWidget_HasHeightForWidth(const KFileWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KFileWidget_SuperHasHeightForWidth(const KFileWidget* self) {
    return self->KFileWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnHasHeightForWidth(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_hasheightforwidth_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KFileWidget_PaintEngine(const KFileWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KFileWidget_SuperPaintEngine(const KFileWidget* self) {
    return self->KFileWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnPaintEngine(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_paintengine_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KFileWidget_Event(KFileWidget* self, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        return vkfilewidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFileWidget_SuperEvent(KFileWidget* self, QEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        return vkfilewidget->KFileWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_event_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_MousePressEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperMousePressEvent(KFileWidget* self, QMouseEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMousePressEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_mousepressevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_MouseReleaseEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperMouseReleaseEvent(KFileWidget* self, QMouseEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMouseReleaseEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_mousereleaseevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_MouseDoubleClickEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperMouseDoubleClickEvent(KFileWidget* self, QMouseEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMouseDoubleClickEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_MouseMoveEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperMouseMoveEvent(KFileWidget* self, QMouseEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMouseMoveEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_mousemoveevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_WheelEvent(KFileWidget* self, QWheelEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperWheelEvent(KFileWidget* self, QWheelEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnWheelEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_wheelevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_KeyPressEvent(KFileWidget* self, QKeyEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperKeyPressEvent(KFileWidget* self, QKeyEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnKeyPressEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_keypressevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_KeyReleaseEvent(KFileWidget* self, QKeyEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperKeyReleaseEvent(KFileWidget* self, QKeyEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnKeyReleaseEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_keyreleaseevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_FocusInEvent(KFileWidget* self, QFocusEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperFocusInEvent(KFileWidget* self, QFocusEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnFocusInEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_focusinevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_FocusOutEvent(KFileWidget* self, QFocusEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperFocusOutEvent(KFileWidget* self, QFocusEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnFocusOutEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_focusoutevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_EnterEvent(KFileWidget* self, QEnterEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperEnterEvent(KFileWidget* self, QEnterEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnEnterEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_enterevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_LeaveEvent(KFileWidget* self, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperLeaveEvent(KFileWidget* self, QEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnLeaveEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_leaveevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_PaintEvent(KFileWidget* self, QPaintEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperPaintEvent(KFileWidget* self, QPaintEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnPaintEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_paintevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_MoveEvent(KFileWidget* self, QMoveEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperMoveEvent(KFileWidget* self, QMoveEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMoveEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_moveevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_CloseEvent(KFileWidget* self, QCloseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperCloseEvent(KFileWidget* self, QCloseEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnCloseEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_closeevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_ContextMenuEvent(KFileWidget* self, QContextMenuEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperContextMenuEvent(KFileWidget* self, QContextMenuEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnContextMenuEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_contextmenuevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_TabletEvent(KFileWidget* self, QTabletEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperTabletEvent(KFileWidget* self, QTabletEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnTabletEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_tabletevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_ActionEvent(KFileWidget* self, QActionEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperActionEvent(KFileWidget* self, QActionEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnActionEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_actionevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_DragEnterEvent(KFileWidget* self, QDragEnterEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperDragEnterEvent(KFileWidget* self, QDragEnterEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDragEnterEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_dragenterevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_DragMoveEvent(KFileWidget* self, QDragMoveEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperDragMoveEvent(KFileWidget* self, QDragMoveEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDragMoveEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_dragmoveevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_DragLeaveEvent(KFileWidget* self, QDragLeaveEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperDragLeaveEvent(KFileWidget* self, QDragLeaveEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDragLeaveEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_dragleaveevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_DropEvent(KFileWidget* self, QDropEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperDropEvent(KFileWidget* self, QDropEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDropEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_dropevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_HideEvent(KFileWidget* self, QHideEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperHideEvent(KFileWidget* self, QHideEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnHideEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_hideevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFileWidget_NativeEvent(KFileWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        return vkfilewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KFileWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFileWidget_SuperNativeEvent(KFileWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        return vkfilewidget->KFileWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KFileWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnNativeEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_nativeevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_ChangeEvent(KFileWidget* self, QEvent* param1) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperChangeEvent(KFileWidget* self, QEvent* param1) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnChangeEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_changeevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KFileWidget_Metric(const KFileWidget* self, int param1) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget) {
        return vkfilewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KFileWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KFileWidget_SuperMetric(const KFileWidget* self, int param1) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self))) {
        return vkfilewidget->KFileWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KFileWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMetric(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_metric_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_InitPainter(const KFileWidget* self, QPainter* painter) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget) {
        vkfilewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperInitPainter(const KFileWidget* self, QPainter* painter) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self))) {
        vkfilewidget->KFileWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KFileWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnInitPainter(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_initpainter_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KFileWidget_Redirected(const KFileWidget* self, QPoint* offset) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget) {
        return vkfilewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KFileWidget_SuperRedirected(const KFileWidget* self, QPoint* offset) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self))) {
        return vkfilewidget->KFileWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KFileWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnRedirected(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_redirected_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KFileWidget_SharedPainter(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget) {
        return vkfilewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KFileWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KFileWidget_SuperSharedPainter(const KFileWidget* self) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self))) {
        return vkfilewidget->KFileWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KFileWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnSharedPainter(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_sharedpainter_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_InputMethodEvent(KFileWidget* self, QInputMethodEvent* param1) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperInputMethodEvent(KFileWidget* self, QInputMethodEvent* param1) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnInputMethodEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_inputmethodevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFileWidget_InputMethodQuery(const KFileWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KFileWidget_SuperInputMethodQuery(const KFileWidget* self, int param1) {
    return new QVariant(self->KFileWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnInputMethodQuery(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self)))
        vkfilewidget->kfilewidget_inputmethodquery_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KFileWidget_FocusNextPrevChild(KFileWidget* self, bool next) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        return vkfilewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFileWidget_SuperFocusNextPrevChild(KFileWidget* self, bool next) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        return vkfilewidget->KFileWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KFileWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnFocusNextPrevChild(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_focusnextprevchild_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_TimerEvent(KFileWidget* self, QTimerEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperTimerEvent(KFileWidget* self, QTimerEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnTimerEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_timerevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_ChildEvent(KFileWidget* self, QChildEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperChildEvent(KFileWidget* self, QChildEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnChildEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_childevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_CustomEvent(KFileWidget* self, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperCustomEvent(KFileWidget* self, QEvent* event) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnCustomEvent(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_customevent_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_ConnectNotify(KFileWidget* self, const QMetaMethod* signal) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperConnectNotify(KFileWidget* self, const QMetaMethod* signal) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnConnectNotify(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_connectnotify_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFileWidget_DisconnectNotify(KFileWidget* self, const QMetaMethod* signal) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget) {
        vkfilewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileWidget_SuperDisconnectNotify(KFileWidget* self, const QMetaMethod* signal) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->KFileWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDisconnectNotify(KFileWidget* self, intptr_t slot) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self))
        vkfilewidget->kfilewidget_disconnectnotify_callback = reinterpret_cast<VirtualKFileWidget::KFileWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KFileWidget_UpdateMicroFocus(KFileWidget* self) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->VirtualKFileWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KFileWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KFileWidget_Create(KFileWidget* self) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->VirtualKFileWidget::create();
    } else
        qFatal("Error: Protected method KFileWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KFileWidget_Destroy(KFileWidget* self) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        vkfilewidget->VirtualKFileWidget::destroy();
    } else
        qFatal("Error: Protected method KFileWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileWidget_FocusNextChild(KFileWidget* self) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        return vkfilewidget->VirtualKFileWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KFileWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileWidget_FocusPreviousChild(KFileWidget* self) {
    if (auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self)) {
        return vkfilewidget->VirtualKFileWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KFileWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFileWidget_Sender(const KFileWidget* self) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self))) {
        return vkfilewidget->VirtualKFileWidget::sender();
    } else
        qFatal("Error: Protected method KFileWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileWidget_SenderSignalIndex(const KFileWidget* self) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self))) {
        return vkfilewidget->VirtualKFileWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFileWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileWidget_Receivers(const KFileWidget* self, const char* signal) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self))) {
        return vkfilewidget->VirtualKFileWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KFileWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileWidget_IsSignalConnected(const KFileWidget* self, const QMetaMethod* signal) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self))) {
        return vkfilewidget->VirtualKFileWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFileWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KFileWidget_GetDecodedMetricF(const KFileWidget* self, int metricA, int metricB) {
    if (auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self))) {
        return vkfilewidget->VirtualKFileWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KFileWidget::getDecodedMetricF called without a directly constructed type");
}

void KFileWidget_Delete(KFileWidget* self) {
    delete self;
}
