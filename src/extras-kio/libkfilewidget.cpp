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
#include <QByteArray>
#include <cstring>
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
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFileWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFileWidget_Tr(const char* s) {
    QString _ret = KFileWidget::tr(s);
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
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size() + 1)));
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
    QString _ret = self->selectedFile();
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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
    auto* vkfilewidget = dynamic_cast<const VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return new QSize(self->sizeHint());
    } else {
        return new QSize(((VirtualKFileWidget*)self)->sizeHint());
    }
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
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->resizeEvent(event);
    }
}

void KFileWidget_ShowEvent(KFileWidget* self, QShowEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->showEvent(event);
    }
}

bool KFileWidget_EventFilter(KFileWidget* self, QObject* watched, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->eventFilter(watched, event);
    }
    return {};
}

void KFileWidget_FileSelected(KFileWidget* self, const QUrl* param1) {
    self->fileSelected(*param1);
}

void KFileWidget_Connect_FileSelected(KFileWidget* self, intptr_t slot) {
    void (*slotFunc)(KFileWidget*, QUrl*) = reinterpret_cast<void (*)(KFileWidget*, QUrl*)>(slot);
    KFileWidget::connect(self, &KFileWidget::fileSelected, [self, slotFunc](const QUrl& param1) {
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
    KFileWidget::connect(self, &KFileWidget::fileHighlighted, [self, slotFunc](const QUrl& param1) {
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
    KFileWidget::connect(self, &KFileWidget::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KFileWidget_FilterChanged(KFileWidget* self, const KFileFilter* filter) {
    self->filterChanged(*filter);
}

void KFileWidget_Connect_FilterChanged(KFileWidget* self, intptr_t slot) {
    void (*slotFunc)(KFileWidget*, KFileFilter*) = reinterpret_cast<void (*)(KFileWidget*, KFileFilter*)>(slot);
    KFileWidget::connect(self, &KFileWidget::filterChanged, [self, slotFunc](const KFileFilter& filter) {
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
    KFileWidget::connect(self, &KFileWidget::accepted, [self, slotFunc]() {
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
    QString _ret = KFileWidget::tr(s, c);
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
    QString _ret = KFileWidget::tr(s, c, static_cast<int>(n));
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
int KFileWidget_QBaseMetacall(KFileWidget* self, int param1, int param2, void** param3) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Metacall_IsBase(true);
        return vkfilewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFileWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMetacall(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Metacall_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KFileWidget_QBaseSizeHint(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_SizeHint_IsBase(true);
        return new QSize(vkfilewidget->sizeHint());
    } else {
        return new QSize(((VirtualKFileWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnSizeHint(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_SizeHint_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_SizeHint_Callback>(slot));
    }
}

// Base class handler implementation
void KFileWidget_QBaseResizeEvent(KFileWidget* self, QResizeEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ResizeEvent_IsBase(true);
        vkfilewidget->resizeEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnResizeEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_ResizeEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KFileWidget_QBaseShowEvent(KFileWidget* self, QShowEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ShowEvent_IsBase(true);
        vkfilewidget->showEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnShowEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ShowEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_ShowEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool KFileWidget_QBaseEventFilter(KFileWidget* self, QObject* watched, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_EventFilter_IsBase(true);
        return vkfilewidget->eventFilter(watched, event);
    } else {
        return ((VirtualKFileWidget*)self)->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnEventFilter(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_EventFilter_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileWidget_DevType(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->devType();
    } else {
        return self->KFileWidget::devType();
    }
}

// Base class handler implementation
int KFileWidget_QBaseDevType(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DevType_IsBase(true);
        return vkfilewidget->devType();
    } else {
        return self->KFileWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDevType(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DevType_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_SetVisible(KFileWidget* self, bool visible) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setVisible(visible);
    } else {
        self->KFileWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KFileWidget_QBaseSetVisible(KFileWidget* self, bool visible) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_SetVisible_IsBase(true);
        vkfilewidget->setVisible(visible);
    } else {
        self->KFileWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnSetVisible(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_SetVisible_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFileWidget_MinimumSizeHint(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return new QSize(vkfilewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFileWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KFileWidget_QBaseMinimumSizeHint(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkfilewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFileWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMinimumSizeHint(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileWidget_HeightForWidth(const KFileWidget* self, int param1) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFileWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KFileWidget_QBaseHeightForWidth(const KFileWidget* self, int param1) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_HeightForWidth_IsBase(true);
        return vkfilewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFileWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnHeightForWidth(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileWidget_HasHeightForWidth(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->hasHeightForWidth();
    } else {
        return self->KFileWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KFileWidget_QBaseHasHeightForWidth(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_HasHeightForWidth_IsBase(true);
        return vkfilewidget->hasHeightForWidth();
    } else {
        return self->KFileWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnHasHeightForWidth(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KFileWidget_PaintEngine(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->paintEngine();
    } else {
        return self->KFileWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KFileWidget_QBasePaintEngine(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_PaintEngine_IsBase(true);
        return vkfilewidget->paintEngine();
    } else {
        return self->KFileWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnPaintEngine(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_PaintEngine_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileWidget_Event(KFileWidget* self, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->event(event);
    } else {
        return ((VirtualKFileWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KFileWidget_QBaseEvent(KFileWidget* self, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Event_IsBase(true);
        return vkfilewidget->event(event);
    } else {
        return ((VirtualKFileWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Event_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_MousePressEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->mousePressEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseMousePressEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MousePressEvent_IsBase(true);
        vkfilewidget->mousePressEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMousePressEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_MouseReleaseEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseMouseReleaseEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MouseReleaseEvent_IsBase(true);
        vkfilewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMouseReleaseEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_MouseDoubleClickEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseMouseDoubleClickEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MouseDoubleClickEvent_IsBase(true);
        vkfilewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMouseDoubleClickEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_MouseMoveEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseMouseMoveEvent(KFileWidget* self, QMouseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MouseMoveEvent_IsBase(true);
        vkfilewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMouseMoveEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_WheelEvent(KFileWidget* self, QWheelEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->wheelEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseWheelEvent(KFileWidget* self, QWheelEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_WheelEvent_IsBase(true);
        vkfilewidget->wheelEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnWheelEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_WheelEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_KeyPressEvent(KFileWidget* self, QKeyEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->keyPressEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseKeyPressEvent(KFileWidget* self, QKeyEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_KeyPressEvent_IsBase(true);
        vkfilewidget->keyPressEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnKeyPressEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_KeyReleaseEvent(KFileWidget* self, QKeyEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseKeyReleaseEvent(KFileWidget* self, QKeyEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_KeyReleaseEvent_IsBase(true);
        vkfilewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnKeyReleaseEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_FocusInEvent(KFileWidget* self, QFocusEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->focusInEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseFocusInEvent(KFileWidget* self, QFocusEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusInEvent_IsBase(true);
        vkfilewidget->focusInEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnFocusInEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_FocusOutEvent(KFileWidget* self, QFocusEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->focusOutEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseFocusOutEvent(KFileWidget* self, QFocusEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusOutEvent_IsBase(true);
        vkfilewidget->focusOutEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnFocusOutEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_EnterEvent(KFileWidget* self, QEnterEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->enterEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseEnterEvent(KFileWidget* self, QEnterEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_EnterEvent_IsBase(true);
        vkfilewidget->enterEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnEnterEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_EnterEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_LeaveEvent(KFileWidget* self, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->leaveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseLeaveEvent(KFileWidget* self, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_LeaveEvent_IsBase(true);
        vkfilewidget->leaveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnLeaveEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_PaintEvent(KFileWidget* self, QPaintEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->paintEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBasePaintEvent(KFileWidget* self, QPaintEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_PaintEvent_IsBase(true);
        vkfilewidget->paintEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnPaintEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_PaintEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_MoveEvent(KFileWidget* self, QMoveEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->moveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseMoveEvent(KFileWidget* self, QMoveEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MoveEvent_IsBase(true);
        vkfilewidget->moveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMoveEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_MoveEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_CloseEvent(KFileWidget* self, QCloseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->closeEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseCloseEvent(KFileWidget* self, QCloseEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_CloseEvent_IsBase(true);
        vkfilewidget->closeEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnCloseEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_CloseEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_ContextMenuEvent(KFileWidget* self, QContextMenuEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->contextMenuEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseContextMenuEvent(KFileWidget* self, QContextMenuEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ContextMenuEvent_IsBase(true);
        vkfilewidget->contextMenuEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnContextMenuEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_TabletEvent(KFileWidget* self, QTabletEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->tabletEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseTabletEvent(KFileWidget* self, QTabletEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_TabletEvent_IsBase(true);
        vkfilewidget->tabletEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnTabletEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_TabletEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_ActionEvent(KFileWidget* self, QActionEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->actionEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseActionEvent(KFileWidget* self, QActionEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ActionEvent_IsBase(true);
        vkfilewidget->actionEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnActionEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ActionEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_DragEnterEvent(KFileWidget* self, QDragEnterEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->dragEnterEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseDragEnterEvent(KFileWidget* self, QDragEnterEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DragEnterEvent_IsBase(true);
        vkfilewidget->dragEnterEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDragEnterEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_DragMoveEvent(KFileWidget* self, QDragMoveEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->dragMoveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseDragMoveEvent(KFileWidget* self, QDragMoveEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DragMoveEvent_IsBase(true);
        vkfilewidget->dragMoveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDragMoveEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_DragLeaveEvent(KFileWidget* self, QDragLeaveEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseDragLeaveEvent(KFileWidget* self, QDragLeaveEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DragLeaveEvent_IsBase(true);
        vkfilewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDragLeaveEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_DropEvent(KFileWidget* self, QDropEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->dropEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseDropEvent(KFileWidget* self, QDropEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DropEvent_IsBase(true);
        vkfilewidget->dropEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDropEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DropEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_HideEvent(KFileWidget* self, QHideEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->hideEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseHideEvent(KFileWidget* self, QHideEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_HideEvent_IsBase(true);
        vkfilewidget->hideEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnHideEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_HideEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileWidget_NativeEvent(KFileWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFileWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KFileWidget_QBaseNativeEvent(KFileWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_NativeEvent_IsBase(true);
        return vkfilewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFileWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnNativeEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_NativeEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_ChangeEvent(KFileWidget* self, QEvent* param1) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->changeEvent(param1);
    } else {
        ((VirtualKFileWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KFileWidget_QBaseChangeEvent(KFileWidget* self, QEvent* param1) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ChangeEvent_IsBase(true);
        vkfilewidget->changeEvent(param1);
    } else {
        ((VirtualKFileWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnChangeEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileWidget_Metric(const KFileWidget* self, int param1) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFileWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KFileWidget_QBaseMetric(const KFileWidget* self, int param1) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Metric_IsBase(true);
        return vkfilewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFileWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnMetric(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Metric_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_InitPainter(const KFileWidget* self, QPainter* painter) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->initPainter(painter);
    } else {
        ((VirtualKFileWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KFileWidget_QBaseInitPainter(const KFileWidget* self, QPainter* painter) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_InitPainter_IsBase(true);
        vkfilewidget->initPainter(painter);
    } else {
        ((VirtualKFileWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnInitPainter(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_InitPainter_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KFileWidget_Redirected(const KFileWidget* self, QPoint* offset) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->redirected(offset);
    } else {
        return ((VirtualKFileWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KFileWidget_QBaseRedirected(const KFileWidget* self, QPoint* offset) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Redirected_IsBase(true);
        return vkfilewidget->redirected(offset);
    } else {
        return ((VirtualKFileWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnRedirected(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Redirected_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KFileWidget_SharedPainter(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->sharedPainter();
    } else {
        return ((VirtualKFileWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KFileWidget_QBaseSharedPainter(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_SharedPainter_IsBase(true);
        return vkfilewidget->sharedPainter();
    } else {
        return ((VirtualKFileWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnSharedPainter(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_SharedPainter_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_InputMethodEvent(KFileWidget* self, QInputMethodEvent* param1) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKFileWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KFileWidget_QBaseInputMethodEvent(KFileWidget* self, QInputMethodEvent* param1) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_InputMethodEvent_IsBase(true);
        vkfilewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKFileWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnInputMethodEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFileWidget_InputMethodQuery(const KFileWidget* self, int param1) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return new QVariant(vkfilewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFileWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KFileWidget_QBaseInputMethodQuery(const KFileWidget* self, int param1) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkfilewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFileWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnInputMethodQuery(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileWidget_FocusNextPrevChild(KFileWidget* self, bool next) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKFileWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KFileWidget_QBaseFocusNextPrevChild(KFileWidget* self, bool next) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusNextPrevChild_IsBase(true);
        return vkfilewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKFileWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnFocusNextPrevChild(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_TimerEvent(KFileWidget* self, QTimerEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->timerEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseTimerEvent(KFileWidget* self, QTimerEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_TimerEvent_IsBase(true);
        vkfilewidget->timerEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnTimerEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_TimerEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_ChildEvent(KFileWidget* self, QChildEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->childEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseChildEvent(KFileWidget* self, QChildEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ChildEvent_IsBase(true);
        vkfilewidget->childEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnChildEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ChildEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_CustomEvent(KFileWidget* self, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->customEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFileWidget_QBaseCustomEvent(KFileWidget* self, QEvent* event) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_CustomEvent_IsBase(true);
        vkfilewidget->customEvent(event);
    } else {
        ((VirtualKFileWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnCustomEvent(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_CustomEvent_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_ConnectNotify(KFileWidget* self, const QMetaMethod* signal) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->connectNotify(*signal);
    } else {
        ((VirtualKFileWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFileWidget_QBaseConnectNotify(KFileWidget* self, const QMetaMethod* signal) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ConnectNotify_IsBase(true);
        vkfilewidget->connectNotify(*signal);
    } else {
        ((VirtualKFileWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnConnectNotify(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_DisconnectNotify(KFileWidget* self, const QMetaMethod* signal) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKFileWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFileWidget_QBaseDisconnectNotify(KFileWidget* self, const QMetaMethod* signal) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DisconnectNotify_IsBase(true);
        vkfilewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKFileWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDisconnectNotify(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_UpdateMicroFocus(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->updateMicroFocus();
    } else {
        ((VirtualKFileWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KFileWidget_QBaseUpdateMicroFocus(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_UpdateMicroFocus_IsBase(true);
        vkfilewidget->updateMicroFocus();
    } else {
        ((VirtualKFileWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnUpdateMicroFocus(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_Create(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->create();
    } else {
        ((VirtualKFileWidget*)self)->create();
    }
}

// Base class handler implementation
void KFileWidget_QBaseCreate(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Create_IsBase(true);
        vkfilewidget->create();
    } else {
        ((VirtualKFileWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnCreate(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Create_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileWidget_Destroy(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->destroy();
    } else {
        ((VirtualKFileWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KFileWidget_QBaseDestroy(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Destroy_IsBase(true);
        vkfilewidget->destroy();
    } else {
        ((VirtualKFileWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnDestroy(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Destroy_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileWidget_FocusNextChild(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->focusNextChild();
    } else {
        return ((VirtualKFileWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KFileWidget_QBaseFocusNextChild(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusNextChild_IsBase(true);
        return vkfilewidget->focusNextChild();
    } else {
        return ((VirtualKFileWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnFocusNextChild(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileWidget_FocusPreviousChild(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->focusPreviousChild();
    } else {
        return ((VirtualKFileWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KFileWidget_QBaseFocusPreviousChild(KFileWidget* self) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusPreviousChild_IsBase(true);
        return vkfilewidget->focusPreviousChild();
    } else {
        return ((VirtualKFileWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnFocusPreviousChild(KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = dynamic_cast<VirtualKFileWidget*>(self);
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFileWidget_Sender(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->sender();
    } else {
        return ((VirtualKFileWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFileWidget_QBaseSender(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Sender_IsBase(true);
        return vkfilewidget->sender();
    } else {
        return ((VirtualKFileWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnSender(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Sender_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileWidget_SenderSignalIndex(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->senderSignalIndex();
    } else {
        return ((VirtualKFileWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFileWidget_QBaseSenderSignalIndex(const KFileWidget* self) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_SenderSignalIndex_IsBase(true);
        return vkfilewidget->senderSignalIndex();
    } else {
        return ((VirtualKFileWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnSenderSignalIndex(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileWidget_Receivers(const KFileWidget* self, const char* signal) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->receivers(signal);
    } else {
        return ((VirtualKFileWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFileWidget_QBaseReceivers(const KFileWidget* self, const char* signal) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Receivers_IsBase(true);
        return vkfilewidget->receivers(signal);
    } else {
        return ((VirtualKFileWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnReceivers(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_Receivers_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileWidget_IsSignalConnected(const KFileWidget* self, const QMetaMethod* signal) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFileWidget_QBaseIsSignalConnected(const KFileWidget* self, const QMetaMethod* signal) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_IsSignalConnected_IsBase(true);
        return vkfilewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnIsSignalConnected(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KFileWidget_GetDecodedMetricF(const KFileWidget* self, int metricA, int metricB) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        return vkfilewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFileWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KFileWidget_QBaseGetDecodedMetricF(const KFileWidget* self, int metricA, int metricB) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_GetDecodedMetricF_IsBase(true);
        return vkfilewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFileWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileWidget_OnGetDecodedMetricF(const KFileWidget* self, intptr_t slot) {
    auto* vkfilewidget = const_cast<VirtualKFileWidget*>(dynamic_cast<const VirtualKFileWidget*>(self));
    if (vkfilewidget && vkfilewidget->isVirtualKFileWidget) {
        vkfilewidget->setKFileWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKFileWidget::KFileWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KFileWidget_Delete(KFileWidget* self) {
    delete self;
}
