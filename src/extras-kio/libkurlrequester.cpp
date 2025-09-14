#include <KComboBox>
#define WORKAROUND_INNER_CLASS_DEFINITION_KEditListWidget__CustomEditor
#include <KLineEdit>
#include <KUrlCompletion>
#include <KUrlRequester>
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
#include <QFileDialog>
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
#include <kurlrequester.h>
#include "libkurlrequester.h"
#include "libkurlrequester.hxx"

KUrlRequester* KUrlRequester_new(QWidget* parent) {
    return new VirtualKUrlRequester(parent);
}

KUrlRequester* KUrlRequester_new2() {
    return new VirtualKUrlRequester();
}

KUrlRequester* KUrlRequester_new3(const QUrl* url) {
    return new VirtualKUrlRequester(*url);
}

KUrlRequester* KUrlRequester_new4(QWidget* editWidget, QWidget* parent) {
    return new VirtualKUrlRequester(editWidget, parent);
}

KUrlRequester* KUrlRequester_new5(const QUrl* url, QWidget* parent) {
    return new VirtualKUrlRequester(*url, parent);
}

QMetaObject* KUrlRequester_MetaObject(const KUrlRequester* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUrlRequester_Metacast(KUrlRequester* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUrlRequester_Metacall(KUrlRequester* self, int param1, int param2, void** param3) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKUrlRequester*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KUrlRequester_Tr(const char* s) {
    QString _ret = KUrlRequester::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* KUrlRequester_Url(const KUrlRequester* self) {
    return new QUrl(self->url());
}

QUrl* KUrlRequester_StartDir(const KUrlRequester* self) {
    return new QUrl(self->startDir());
}

libqt_string KUrlRequester_Text(const KUrlRequester* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUrlRequester_SetMode(KUrlRequester* self, int mode) {
    self->setMode(static_cast<KFile::Modes>(mode));
}

int KUrlRequester_Mode(const KUrlRequester* self) {
    return static_cast<int>(self->mode());
}

void KUrlRequester_SetAcceptMode(KUrlRequester* self, int m) {
    self->setAcceptMode(static_cast<QFileDialog::AcceptMode>(m));
}

int KUrlRequester_AcceptMode(const KUrlRequester* self) {
    return static_cast<int>(self->acceptMode());
}

void KUrlRequester_SetNameFilters(KUrlRequester* self, const libqt_list /* of libqt_string */ filters) {
    QList<QString> filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    self->setNameFilters(filters_QList);
}

void KUrlRequester_SetNameFilter(KUrlRequester* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->setNameFilter(filter_QString);
}

libqt_list /* of libqt_string */ KUrlRequester_NameFilters(const KUrlRequester* self) {
    QList<QString> _ret = self->nameFilters();
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

void KUrlRequester_SetMimeTypeFilters(KUrlRequester* self, const libqt_list /* of libqt_string */ mimeTypes) {
    QList<QString> mimeTypes_QList;
    mimeTypes_QList.reserve(mimeTypes.len);
    libqt_string* mimeTypes_arr = static_cast<libqt_string*>(mimeTypes.data);
    for (size_t i = 0; i < mimeTypes.len; ++i) {
        QString mimeTypes_arr_i_QString = QString::fromUtf8(mimeTypes_arr[i].data, mimeTypes_arr[i].len);
        mimeTypes_QList.push_back(mimeTypes_arr_i_QString);
    }
    self->setMimeTypeFilters(mimeTypes_QList);
}

libqt_list /* of libqt_string */ KUrlRequester_MimeTypeFilters(const KUrlRequester* self) {
    QList<QString> _ret = self->mimeTypeFilters();
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

QFileDialog* KUrlRequester_FileDialog(const KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<const VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return self->fileDialog();
    } else {
        return ((VirtualKUrlRequester*)self)->fileDialog();
    }
}

KLineEdit* KUrlRequester_LineEdit(const KUrlRequester* self) {
    return self->lineEdit();
}

KComboBox* KUrlRequester_ComboBox(const KUrlRequester* self) {
    return self->comboBox();
}

QPushButton* KUrlRequester_Button(const KUrlRequester* self) {
    return self->button();
}

KUrlCompletion* KUrlRequester_CompletionObject(const KUrlRequester* self) {
    return self->completionObject();
}

KEditListWidget__CustomEditor* KUrlRequester_CustomEditor(KUrlRequester* self) {
    const KEditListWidget::CustomEditor& _ret = self->customEditor();
    // Cast returned reference into pointer
    return const_cast<KEditListWidget::CustomEditor*>(&_ret);
}

libqt_string KUrlRequester_PlaceholderText(const KUrlRequester* self) {
    QString _ret = self->placeholderText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KUrlRequester_SetPlaceholderText(KUrlRequester* self, const libqt_string msg) {
    QString msg_QString = QString::fromUtf8(msg.data, msg.len);
    self->setPlaceholderText(msg_QString);
}

int KUrlRequester_FileDialogModality(const KUrlRequester* self) {
    return static_cast<int>(self->fileDialogModality());
}

void KUrlRequester_SetFileDialogModality(KUrlRequester* self, int modality) {
    self->setFileDialogModality(static_cast<Qt::WindowModality>(modality));
}

void KUrlRequester_SetUrl(KUrlRequester* self, const QUrl* url) {
    self->setUrl(*url);
}

void KUrlRequester_SetStartDir(KUrlRequester* self, const QUrl* startDir) {
    self->setStartDir(*startDir);
}

void KUrlRequester_SetText(KUrlRequester* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void KUrlRequester_Clear(KUrlRequester* self) {
    self->clear();
}

void KUrlRequester_TextChanged(KUrlRequester* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textChanged(param1_QString);
}

void KUrlRequester_Connect_TextChanged(KUrlRequester* self, intptr_t slot) {
    void (*slotFunc)(KUrlRequester*, const char*) = reinterpret_cast<void (*)(KUrlRequester*, const char*)>(slot);
    KUrlRequester::connect(self, &KUrlRequester::textChanged, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void KUrlRequester_TextEdited(KUrlRequester* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textEdited(param1_QString);
}

void KUrlRequester_Connect_TextEdited(KUrlRequester* self, intptr_t slot) {
    void (*slotFunc)(KUrlRequester*, const char*) = reinterpret_cast<void (*)(KUrlRequester*, const char*)>(slot);
    KUrlRequester::connect(self, &KUrlRequester::textEdited, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        const char* param1_str = static_cast<const char*>(malloc(param1_b.length() + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_b.length());
        ((char*)param1_str)[param1_b.length()] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void KUrlRequester_ReturnPressed(KUrlRequester* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->returnPressed(text_QString);
}

void KUrlRequester_Connect_ReturnPressed(KUrlRequester* self, intptr_t slot) {
    void (*slotFunc)(KUrlRequester*, const char*) = reinterpret_cast<void (*)(KUrlRequester*, const char*)>(slot);
    KUrlRequester::connect(self, &KUrlRequester::returnPressed, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval1 = text_str;
        slotFunc(self, sigval1);
        libqt_free(text_str);
    });
}

void KUrlRequester_OpenFileDialog(KUrlRequester* self, KUrlRequester* param1) {
    self->openFileDialog(param1);
}

void KUrlRequester_Connect_OpenFileDialog(KUrlRequester* self, intptr_t slot) {
    void (*slotFunc)(KUrlRequester*, KUrlRequester*) = reinterpret_cast<void (*)(KUrlRequester*, KUrlRequester*)>(slot);
    KUrlRequester::connect(self, &KUrlRequester::openFileDialog, [self, slotFunc](KUrlRequester* param1) {
        KUrlRequester* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void KUrlRequester_UrlSelected(KUrlRequester* self, const QUrl* param1) {
    self->urlSelected(*param1);
}

void KUrlRequester_Connect_UrlSelected(KUrlRequester* self, intptr_t slot) {
    void (*slotFunc)(KUrlRequester*, QUrl*) = reinterpret_cast<void (*)(KUrlRequester*, QUrl*)>(slot);
    KUrlRequester::connect(self, &KUrlRequester::urlSelected, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void KUrlRequester_ChangeEvent(KUrlRequester* self, QEvent* e) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->changeEvent(e);
    }
}

bool KUrlRequester_EventFilter(KUrlRequester* self, QObject* obj, QEvent* ev) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->eventFilter(obj, ev);
    }
    return {};
}

libqt_string KUrlRequester_Tr2(const char* s, const char* c) {
    QString _ret = KUrlRequester::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlRequester_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUrlRequester::tr(s, c, static_cast<int>(n));
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
int KUrlRequester_QBaseMetacall(KUrlRequester* self, int param1, int param2, void** param3) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Metacall_IsBase(true);
        return vkurlrequester->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KUrlRequester::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMetacall(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Metacall_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QFileDialog* KUrlRequester_QBaseFileDialog(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FileDialog_IsBase(true);
        return vkurlrequester->fileDialog();
    } else {
        return self->KUrlRequester::fileDialog();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFileDialog(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FileDialog_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FileDialog_Callback>(slot));
    }
}

// Base class handler implementation
void KUrlRequester_QBaseChangeEvent(KUrlRequester* self, QEvent* e) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ChangeEvent_IsBase(true);
        vkurlrequester->changeEvent(e);
    } else {
        ((VirtualKUrlRequester*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnChangeEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ChangeEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ChangeEvent_Callback>(slot));
    }
}

// Base class handler implementation
bool KUrlRequester_QBaseEventFilter(KUrlRequester* self, QObject* obj, QEvent* ev) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_EventFilter_IsBase(true);
        return vkurlrequester->eventFilter(obj, ev);
    } else {
        return ((VirtualKUrlRequester*)self)->eventFilter(obj, ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnEventFilter(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_EventFilter_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequester_DevType(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->devType();
    } else {
        return self->KUrlRequester::devType();
    }
}

// Base class handler implementation
int KUrlRequester_QBaseDevType(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DevType_IsBase(true);
        return vkurlrequester->devType();
    } else {
        return self->KUrlRequester::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDevType(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DevType_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_SetVisible(KUrlRequester* self, bool visible) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setVisible(visible);
    } else {
        self->KUrlRequester::setVisible(visible);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseSetVisible(KUrlRequester* self, bool visible) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_SetVisible_IsBase(true);
        vkurlrequester->setVisible(visible);
    } else {
        self->KUrlRequester::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnSetVisible(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_SetVisible_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlRequester_SizeHint(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return new QSize(vkurlrequester->sizeHint());
    } else {
        return new QSize(((VirtualKUrlRequester*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KUrlRequester_QBaseSizeHint(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_SizeHint_IsBase(true);
        return new QSize(vkurlrequester->sizeHint());
    } else {
        return new QSize(((VirtualKUrlRequester*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnSizeHint(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_SizeHint_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlRequester_MinimumSizeHint(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return new QSize(vkurlrequester->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlRequester*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KUrlRequester_QBaseMinimumSizeHint(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MinimumSizeHint_IsBase(true);
        return new QSize(vkurlrequester->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlRequester*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMinimumSizeHint(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MinimumSizeHint_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequester_HeightForWidth(const KUrlRequester* self, int param1) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlRequester::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KUrlRequester_QBaseHeightForWidth(const KUrlRequester* self, int param1) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_HeightForWidth_IsBase(true);
        return vkurlrequester->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlRequester::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnHeightForWidth(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_HeightForWidth_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequester_HasHeightForWidth(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->hasHeightForWidth();
    } else {
        return self->KUrlRequester::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KUrlRequester_QBaseHasHeightForWidth(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_HasHeightForWidth_IsBase(true);
        return vkurlrequester->hasHeightForWidth();
    } else {
        return self->KUrlRequester::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnHasHeightForWidth(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_HasHeightForWidth_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KUrlRequester_PaintEngine(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->paintEngine();
    } else {
        return self->KUrlRequester::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KUrlRequester_QBasePaintEngine(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_PaintEngine_IsBase(true);
        return vkurlrequester->paintEngine();
    } else {
        return self->KUrlRequester::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnPaintEngine(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_PaintEngine_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequester_Event(KUrlRequester* self, QEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->event(event);
    } else {
        return ((VirtualKUrlRequester*)self)->event(event);
    }
}

// Base class handler implementation
bool KUrlRequester_QBaseEvent(KUrlRequester* self, QEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Event_IsBase(true);
        return vkurlrequester->event(event);
    } else {
        return ((VirtualKUrlRequester*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Event_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_MousePressEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->mousePressEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseMousePressEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MousePressEvent_IsBase(true);
        vkurlrequester->mousePressEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMousePressEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MousePressEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_MouseReleaseEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->mouseReleaseEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseMouseReleaseEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MouseReleaseEvent_IsBase(true);
        vkurlrequester->mouseReleaseEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMouseReleaseEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_MouseDoubleClickEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseMouseDoubleClickEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MouseDoubleClickEvent_IsBase(true);
        vkurlrequester->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMouseDoubleClickEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_MouseMoveEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->mouseMoveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseMouseMoveEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MouseMoveEvent_IsBase(true);
        vkurlrequester->mouseMoveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMouseMoveEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MouseMoveEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_WheelEvent(KUrlRequester* self, QWheelEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->wheelEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseWheelEvent(KUrlRequester* self, QWheelEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_WheelEvent_IsBase(true);
        vkurlrequester->wheelEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnWheelEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_WheelEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_KeyPressEvent(KUrlRequester* self, QKeyEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->keyPressEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseKeyPressEvent(KUrlRequester* self, QKeyEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_KeyPressEvent_IsBase(true);
        vkurlrequester->keyPressEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnKeyPressEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_KeyPressEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_KeyReleaseEvent(KUrlRequester* self, QKeyEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->keyReleaseEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseKeyReleaseEvent(KUrlRequester* self, QKeyEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_KeyReleaseEvent_IsBase(true);
        vkurlrequester->keyReleaseEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnKeyReleaseEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_FocusInEvent(KUrlRequester* self, QFocusEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->focusInEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseFocusInEvent(KUrlRequester* self, QFocusEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusInEvent_IsBase(true);
        vkurlrequester->focusInEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFocusInEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusInEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_FocusOutEvent(KUrlRequester* self, QFocusEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->focusOutEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseFocusOutEvent(KUrlRequester* self, QFocusEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusOutEvent_IsBase(true);
        vkurlrequester->focusOutEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFocusOutEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusOutEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_EnterEvent(KUrlRequester* self, QEnterEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->enterEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseEnterEvent(KUrlRequester* self, QEnterEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_EnterEvent_IsBase(true);
        vkurlrequester->enterEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnEnterEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_EnterEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_LeaveEvent(KUrlRequester* self, QEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->leaveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseLeaveEvent(KUrlRequester* self, QEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_LeaveEvent_IsBase(true);
        vkurlrequester->leaveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnLeaveEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_LeaveEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_PaintEvent(KUrlRequester* self, QPaintEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->paintEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBasePaintEvent(KUrlRequester* self, QPaintEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_PaintEvent_IsBase(true);
        vkurlrequester->paintEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnPaintEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_PaintEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_MoveEvent(KUrlRequester* self, QMoveEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->moveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseMoveEvent(KUrlRequester* self, QMoveEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MoveEvent_IsBase(true);
        vkurlrequester->moveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMoveEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_MoveEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_ResizeEvent(KUrlRequester* self, QResizeEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->resizeEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseResizeEvent(KUrlRequester* self, QResizeEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ResizeEvent_IsBase(true);
        vkurlrequester->resizeEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnResizeEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ResizeEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_CloseEvent(KUrlRequester* self, QCloseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->closeEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseCloseEvent(KUrlRequester* self, QCloseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_CloseEvent_IsBase(true);
        vkurlrequester->closeEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnCloseEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_CloseEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_ContextMenuEvent(KUrlRequester* self, QContextMenuEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->contextMenuEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseContextMenuEvent(KUrlRequester* self, QContextMenuEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ContextMenuEvent_IsBase(true);
        vkurlrequester->contextMenuEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnContextMenuEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ContextMenuEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_TabletEvent(KUrlRequester* self, QTabletEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->tabletEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseTabletEvent(KUrlRequester* self, QTabletEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_TabletEvent_IsBase(true);
        vkurlrequester->tabletEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnTabletEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_TabletEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_ActionEvent(KUrlRequester* self, QActionEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->actionEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseActionEvent(KUrlRequester* self, QActionEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ActionEvent_IsBase(true);
        vkurlrequester->actionEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnActionEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ActionEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_DragEnterEvent(KUrlRequester* self, QDragEnterEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->dragEnterEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseDragEnterEvent(KUrlRequester* self, QDragEnterEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DragEnterEvent_IsBase(true);
        vkurlrequester->dragEnterEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDragEnterEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DragEnterEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_DragMoveEvent(KUrlRequester* self, QDragMoveEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->dragMoveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseDragMoveEvent(KUrlRequester* self, QDragMoveEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DragMoveEvent_IsBase(true);
        vkurlrequester->dragMoveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDragMoveEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DragMoveEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_DragLeaveEvent(KUrlRequester* self, QDragLeaveEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseDragLeaveEvent(KUrlRequester* self, QDragLeaveEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DragLeaveEvent_IsBase(true);
        vkurlrequester->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDragLeaveEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DragLeaveEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_DropEvent(KUrlRequester* self, QDropEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->dropEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseDropEvent(KUrlRequester* self, QDropEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DropEvent_IsBase(true);
        vkurlrequester->dropEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDropEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DropEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_ShowEvent(KUrlRequester* self, QShowEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->showEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseShowEvent(KUrlRequester* self, QShowEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ShowEvent_IsBase(true);
        vkurlrequester->showEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnShowEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ShowEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_HideEvent(KUrlRequester* self, QHideEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->hideEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseHideEvent(KUrlRequester* self, QHideEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_HideEvent_IsBase(true);
        vkurlrequester->hideEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnHideEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_HideEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequester_NativeEvent(KUrlRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlRequester*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KUrlRequester_QBaseNativeEvent(KUrlRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_NativeEvent_IsBase(true);
        return vkurlrequester->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlRequester*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnNativeEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_NativeEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequester_Metric(const KUrlRequester* self, int param1) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlRequester*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KUrlRequester_QBaseMetric(const KUrlRequester* self, int param1) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Metric_IsBase(true);
        return vkurlrequester->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlRequester*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMetric(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Metric_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_InitPainter(const KUrlRequester* self, QPainter* painter) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->initPainter(painter);
    } else {
        ((VirtualKUrlRequester*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseInitPainter(const KUrlRequester* self, QPainter* painter) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_InitPainter_IsBase(true);
        vkurlrequester->initPainter(painter);
    } else {
        ((VirtualKUrlRequester*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnInitPainter(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_InitPainter_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KUrlRequester_Redirected(const KUrlRequester* self, QPoint* offset) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->redirected(offset);
    } else {
        return ((VirtualKUrlRequester*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KUrlRequester_QBaseRedirected(const KUrlRequester* self, QPoint* offset) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Redirected_IsBase(true);
        return vkurlrequester->redirected(offset);
    } else {
        return ((VirtualKUrlRequester*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnRedirected(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Redirected_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KUrlRequester_SharedPainter(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->sharedPainter();
    } else {
        return ((VirtualKUrlRequester*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KUrlRequester_QBaseSharedPainter(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_SharedPainter_IsBase(true);
        return vkurlrequester->sharedPainter();
    } else {
        return ((VirtualKUrlRequester*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnSharedPainter(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_SharedPainter_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_InputMethodEvent(KUrlRequester* self, QInputMethodEvent* param1) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlRequester*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseInputMethodEvent(KUrlRequester* self, QInputMethodEvent* param1) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_InputMethodEvent_IsBase(true);
        vkurlrequester->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlRequester*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnInputMethodEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_InputMethodEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KUrlRequester_InputMethodQuery(const KUrlRequester* self, int param1) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return new QVariant(vkurlrequester->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlRequester*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KUrlRequester_QBaseInputMethodQuery(const KUrlRequester* self, int param1) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_InputMethodQuery_IsBase(true);
        return new QVariant(vkurlrequester->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlRequester*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnInputMethodQuery(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_InputMethodQuery_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequester_FocusNextPrevChild(KUrlRequester* self, bool next) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlRequester*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KUrlRequester_QBaseFocusNextPrevChild(KUrlRequester* self, bool next) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusNextPrevChild_IsBase(true);
        return vkurlrequester->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlRequester*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFocusNextPrevChild(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_TimerEvent(KUrlRequester* self, QTimerEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->timerEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseTimerEvent(KUrlRequester* self, QTimerEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_TimerEvent_IsBase(true);
        vkurlrequester->timerEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnTimerEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_TimerEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_ChildEvent(KUrlRequester* self, QChildEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->childEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseChildEvent(KUrlRequester* self, QChildEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ChildEvent_IsBase(true);
        vkurlrequester->childEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnChildEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ChildEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_CustomEvent(KUrlRequester* self, QEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->customEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseCustomEvent(KUrlRequester* self, QEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_CustomEvent_IsBase(true);
        vkurlrequester->customEvent(event);
    } else {
        ((VirtualKUrlRequester*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnCustomEvent(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_CustomEvent_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_ConnectNotify(KUrlRequester* self, const QMetaMethod* signal) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->connectNotify(*signal);
    } else {
        ((VirtualKUrlRequester*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseConnectNotify(KUrlRequester* self, const QMetaMethod* signal) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ConnectNotify_IsBase(true);
        vkurlrequester->connectNotify(*signal);
    } else {
        ((VirtualKUrlRequester*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnConnectNotify(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_ConnectNotify_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_DisconnectNotify(KUrlRequester* self, const QMetaMethod* signal) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlRequester*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlRequester_QBaseDisconnectNotify(KUrlRequester* self, const QMetaMethod* signal) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DisconnectNotify_IsBase(true);
        vkurlrequester->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlRequester*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDisconnectNotify(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_DisconnectNotify_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_UpdateMicroFocus(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->updateMicroFocus();
    } else {
        ((VirtualKUrlRequester*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KUrlRequester_QBaseUpdateMicroFocus(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_UpdateMicroFocus_IsBase(true);
        vkurlrequester->updateMicroFocus();
    } else {
        ((VirtualKUrlRequester*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnUpdateMicroFocus(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_Create(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->create();
    } else {
        ((VirtualKUrlRequester*)self)->create();
    }
}

// Base class handler implementation
void KUrlRequester_QBaseCreate(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Create_IsBase(true);
        vkurlrequester->create();
    } else {
        ((VirtualKUrlRequester*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnCreate(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Create_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlRequester_Destroy(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->destroy();
    } else {
        ((VirtualKUrlRequester*)self)->destroy();
    }
}

// Base class handler implementation
void KUrlRequester_QBaseDestroy(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Destroy_IsBase(true);
        vkurlrequester->destroy();
    } else {
        ((VirtualKUrlRequester*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDestroy(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Destroy_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequester_FocusNextChild(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->focusNextChild();
    } else {
        return ((VirtualKUrlRequester*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KUrlRequester_QBaseFocusNextChild(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusNextChild_IsBase(true);
        return vkurlrequester->focusNextChild();
    } else {
        return ((VirtualKUrlRequester*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFocusNextChild(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusNextChild_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequester_FocusPreviousChild(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->focusPreviousChild();
    } else {
        return ((VirtualKUrlRequester*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KUrlRequester_QBaseFocusPreviousChild(KUrlRequester* self) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusPreviousChild_IsBase(true);
        return vkurlrequester->focusPreviousChild();
    } else {
        return ((VirtualKUrlRequester*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFocusPreviousChild(KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_FocusPreviousChild_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KUrlRequester_Sender(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->sender();
    } else {
        return ((VirtualKUrlRequester*)self)->sender();
    }
}

// Base class handler implementation
QObject* KUrlRequester_QBaseSender(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Sender_IsBase(true);
        return vkurlrequester->sender();
    } else {
        return ((VirtualKUrlRequester*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnSender(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Sender_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequester_SenderSignalIndex(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->senderSignalIndex();
    } else {
        return ((VirtualKUrlRequester*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KUrlRequester_QBaseSenderSignalIndex(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_SenderSignalIndex_IsBase(true);
        return vkurlrequester->senderSignalIndex();
    } else {
        return ((VirtualKUrlRequester*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnSenderSignalIndex(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_SenderSignalIndex_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlRequester_Receivers(const KUrlRequester* self, const char* signal) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->receivers(signal);
    } else {
        return ((VirtualKUrlRequester*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KUrlRequester_QBaseReceivers(const KUrlRequester* self, const char* signal) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Receivers_IsBase(true);
        return vkurlrequester->receivers(signal);
    } else {
        return ((VirtualKUrlRequester*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnReceivers(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_Receivers_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlRequester_IsSignalConnected(const KUrlRequester* self, const QMetaMethod* signal) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlRequester*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KUrlRequester_QBaseIsSignalConnected(const KUrlRequester* self, const QMetaMethod* signal) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_IsSignalConnected_IsBase(true);
        return vkurlrequester->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlRequester*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnIsSignalConnected(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_IsSignalConnected_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KUrlRequester_GetDecodedMetricF(const KUrlRequester* self, int metricA, int metricB) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        return vkurlrequester->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlRequester*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KUrlRequester_QBaseGetDecodedMetricF(const KUrlRequester* self, int metricA, int metricB) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_GetDecodedMetricF_IsBase(true);
        return vkurlrequester->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlRequester*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnGetDecodedMetricF(const KUrlRequester* self, intptr_t slot) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester && vkurlrequester->isVirtualKUrlRequester) {
        vkurlrequester->setKUrlRequester_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKUrlRequester::KUrlRequester_GetDecodedMetricF_Callback>(slot));
    }
}

void KUrlRequester_Delete(KUrlRequester* self) {
    delete self;
}

KUrlComboRequester* KUrlComboRequester_new(QWidget* parent) {
    return new VirtualKUrlComboRequester(parent);
}

KUrlComboRequester* KUrlComboRequester_new2() {
    return new VirtualKUrlComboRequester();
}

QMetaObject* KUrlComboRequester_MetaObject(const KUrlComboRequester* self) {
    return (QMetaObject*)self->metaObject();
}

void* KUrlComboRequester_Metacast(KUrlComboRequester* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KUrlComboRequester_Metacall(KUrlComboRequester* self, int param1, int param2, void** param3) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKUrlComboRequester*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KUrlComboRequester_Tr(const char* s) {
    QString _ret = KUrlComboRequester::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlComboRequester_Tr2(const char* s, const char* c) {
    QString _ret = KUrlComboRequester::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KUrlComboRequester_Tr3(const char* s, const char* c, int n) {
    QString _ret = KUrlComboRequester::tr(s, c, static_cast<int>(n));
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
int KUrlComboRequester_QBaseMetacall(KUrlComboRequester* self, int param1, int param2, void** param3) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Metacall_IsBase(true);
        return vkurlcomborequester->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KUrlComboRequester::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMetacall(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Metacall_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
QFileDialog* KUrlComboRequester_FileDialog(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->fileDialog();
    } else {
        return self->KUrlComboRequester::fileDialog();
    }
}

// Base class handler implementation
QFileDialog* KUrlComboRequester_QBaseFileDialog(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FileDialog_IsBase(true);
        return vkurlcomborequester->fileDialog();
    } else {
        return self->KUrlComboRequester::fileDialog();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFileDialog(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FileDialog_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FileDialog_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_ChangeEvent(KUrlComboRequester* self, QEvent* e) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->changeEvent(e);
    } else {
        ((VirtualKUrlComboRequester*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseChangeEvent(KUrlComboRequester* self, QEvent* e) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ChangeEvent_IsBase(true);
        vkurlcomborequester->changeEvent(e);
    } else {
        ((VirtualKUrlComboRequester*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnChangeEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ChangeEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboRequester_EventFilter(KUrlComboRequester* self, QObject* obj, QEvent* ev) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->eventFilter(obj, ev);
    } else {
        return ((VirtualKUrlComboRequester*)self)->eventFilter(obj, ev);
    }
}

// Base class handler implementation
bool KUrlComboRequester_QBaseEventFilter(KUrlComboRequester* self, QObject* obj, QEvent* ev) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_EventFilter_IsBase(true);
        return vkurlcomborequester->eventFilter(obj, ev);
    } else {
        return ((VirtualKUrlComboRequester*)self)->eventFilter(obj, ev);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnEventFilter(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_EventFilter_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboRequester_DevType(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->devType();
    } else {
        return self->KUrlComboRequester::devType();
    }
}

// Base class handler implementation
int KUrlComboRequester_QBaseDevType(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DevType_IsBase(true);
        return vkurlcomborequester->devType();
    } else {
        return self->KUrlComboRequester::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDevType(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DevType_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_SetVisible(KUrlComboRequester* self, bool visible) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setVisible(visible);
    } else {
        self->KUrlComboRequester::setVisible(visible);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseSetVisible(KUrlComboRequester* self, bool visible) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_SetVisible_IsBase(true);
        vkurlcomborequester->setVisible(visible);
    } else {
        self->KUrlComboRequester::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnSetVisible(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_SetVisible_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlComboRequester_SizeHint(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return new QSize(vkurlcomborequester->sizeHint());
    } else {
        return new QSize(((VirtualKUrlComboRequester*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KUrlComboRequester_QBaseSizeHint(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_SizeHint_IsBase(true);
        return new QSize(vkurlcomborequester->sizeHint());
    } else {
        return new QSize(((VirtualKUrlComboRequester*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnSizeHint(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_SizeHint_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KUrlComboRequester_MinimumSizeHint(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return new QSize(vkurlcomborequester->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlComboRequester*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KUrlComboRequester_QBaseMinimumSizeHint(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MinimumSizeHint_IsBase(true);
        return new QSize(vkurlcomborequester->minimumSizeHint());
    } else {
        return new QSize(((VirtualKUrlComboRequester*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMinimumSizeHint(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MinimumSizeHint_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboRequester_HeightForWidth(const KUrlComboRequester* self, int param1) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlComboRequester::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KUrlComboRequester_QBaseHeightForWidth(const KUrlComboRequester* self, int param1) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_HeightForWidth_IsBase(true);
        return vkurlcomborequester->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KUrlComboRequester::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnHeightForWidth(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_HeightForWidth_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboRequester_HasHeightForWidth(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->hasHeightForWidth();
    } else {
        return self->KUrlComboRequester::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KUrlComboRequester_QBaseHasHeightForWidth(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_HasHeightForWidth_IsBase(true);
        return vkurlcomborequester->hasHeightForWidth();
    } else {
        return self->KUrlComboRequester::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnHasHeightForWidth(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_HasHeightForWidth_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KUrlComboRequester_PaintEngine(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->paintEngine();
    } else {
        return self->KUrlComboRequester::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KUrlComboRequester_QBasePaintEngine(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_PaintEngine_IsBase(true);
        return vkurlcomborequester->paintEngine();
    } else {
        return self->KUrlComboRequester::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnPaintEngine(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_PaintEngine_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboRequester_Event(KUrlComboRequester* self, QEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->event(event);
    } else {
        return ((VirtualKUrlComboRequester*)self)->event(event);
    }
}

// Base class handler implementation
bool KUrlComboRequester_QBaseEvent(KUrlComboRequester* self, QEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Event_IsBase(true);
        return vkurlcomborequester->event(event);
    } else {
        return ((VirtualKUrlComboRequester*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Event_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_MousePressEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->mousePressEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseMousePressEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MousePressEvent_IsBase(true);
        vkurlcomborequester->mousePressEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMousePressEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MousePressEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_MouseReleaseEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->mouseReleaseEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseMouseReleaseEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MouseReleaseEvent_IsBase(true);
        vkurlcomborequester->mouseReleaseEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMouseReleaseEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_MouseDoubleClickEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseMouseDoubleClickEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MouseDoubleClickEvent_IsBase(true);
        vkurlcomborequester->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMouseDoubleClickEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_MouseMoveEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->mouseMoveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseMouseMoveEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MouseMoveEvent_IsBase(true);
        vkurlcomborequester->mouseMoveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMouseMoveEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MouseMoveEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_WheelEvent(KUrlComboRequester* self, QWheelEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->wheelEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseWheelEvent(KUrlComboRequester* self, QWheelEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_WheelEvent_IsBase(true);
        vkurlcomborequester->wheelEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnWheelEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_WheelEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_KeyPressEvent(KUrlComboRequester* self, QKeyEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->keyPressEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseKeyPressEvent(KUrlComboRequester* self, QKeyEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_KeyPressEvent_IsBase(true);
        vkurlcomborequester->keyPressEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnKeyPressEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_KeyPressEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_KeyReleaseEvent(KUrlComboRequester* self, QKeyEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->keyReleaseEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseKeyReleaseEvent(KUrlComboRequester* self, QKeyEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_KeyReleaseEvent_IsBase(true);
        vkurlcomborequester->keyReleaseEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnKeyReleaseEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_FocusInEvent(KUrlComboRequester* self, QFocusEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->focusInEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseFocusInEvent(KUrlComboRequester* self, QFocusEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusInEvent_IsBase(true);
        vkurlcomborequester->focusInEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFocusInEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusInEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_FocusOutEvent(KUrlComboRequester* self, QFocusEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->focusOutEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseFocusOutEvent(KUrlComboRequester* self, QFocusEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusOutEvent_IsBase(true);
        vkurlcomborequester->focusOutEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFocusOutEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusOutEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_EnterEvent(KUrlComboRequester* self, QEnterEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->enterEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseEnterEvent(KUrlComboRequester* self, QEnterEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_EnterEvent_IsBase(true);
        vkurlcomborequester->enterEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnEnterEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_EnterEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_LeaveEvent(KUrlComboRequester* self, QEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->leaveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseLeaveEvent(KUrlComboRequester* self, QEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_LeaveEvent_IsBase(true);
        vkurlcomborequester->leaveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnLeaveEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_LeaveEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_PaintEvent(KUrlComboRequester* self, QPaintEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->paintEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBasePaintEvent(KUrlComboRequester* self, QPaintEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_PaintEvent_IsBase(true);
        vkurlcomborequester->paintEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnPaintEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_PaintEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_MoveEvent(KUrlComboRequester* self, QMoveEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->moveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseMoveEvent(KUrlComboRequester* self, QMoveEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MoveEvent_IsBase(true);
        vkurlcomborequester->moveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMoveEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_MoveEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_ResizeEvent(KUrlComboRequester* self, QResizeEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->resizeEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseResizeEvent(KUrlComboRequester* self, QResizeEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ResizeEvent_IsBase(true);
        vkurlcomborequester->resizeEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnResizeEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ResizeEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_CloseEvent(KUrlComboRequester* self, QCloseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->closeEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseCloseEvent(KUrlComboRequester* self, QCloseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_CloseEvent_IsBase(true);
        vkurlcomborequester->closeEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnCloseEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_CloseEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_ContextMenuEvent(KUrlComboRequester* self, QContextMenuEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->contextMenuEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseContextMenuEvent(KUrlComboRequester* self, QContextMenuEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ContextMenuEvent_IsBase(true);
        vkurlcomborequester->contextMenuEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnContextMenuEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ContextMenuEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_TabletEvent(KUrlComboRequester* self, QTabletEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->tabletEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseTabletEvent(KUrlComboRequester* self, QTabletEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_TabletEvent_IsBase(true);
        vkurlcomborequester->tabletEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnTabletEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_TabletEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_ActionEvent(KUrlComboRequester* self, QActionEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->actionEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseActionEvent(KUrlComboRequester* self, QActionEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ActionEvent_IsBase(true);
        vkurlcomborequester->actionEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnActionEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ActionEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_DragEnterEvent(KUrlComboRequester* self, QDragEnterEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->dragEnterEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseDragEnterEvent(KUrlComboRequester* self, QDragEnterEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DragEnterEvent_IsBase(true);
        vkurlcomborequester->dragEnterEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDragEnterEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DragEnterEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_DragMoveEvent(KUrlComboRequester* self, QDragMoveEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->dragMoveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseDragMoveEvent(KUrlComboRequester* self, QDragMoveEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DragMoveEvent_IsBase(true);
        vkurlcomborequester->dragMoveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDragMoveEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DragMoveEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_DragLeaveEvent(KUrlComboRequester* self, QDragLeaveEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseDragLeaveEvent(KUrlComboRequester* self, QDragLeaveEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DragLeaveEvent_IsBase(true);
        vkurlcomborequester->dragLeaveEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDragLeaveEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DragLeaveEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_DropEvent(KUrlComboRequester* self, QDropEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->dropEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseDropEvent(KUrlComboRequester* self, QDropEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DropEvent_IsBase(true);
        vkurlcomborequester->dropEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDropEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DropEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_ShowEvent(KUrlComboRequester* self, QShowEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->showEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseShowEvent(KUrlComboRequester* self, QShowEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ShowEvent_IsBase(true);
        vkurlcomborequester->showEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnShowEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ShowEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_HideEvent(KUrlComboRequester* self, QHideEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->hideEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseHideEvent(KUrlComboRequester* self, QHideEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_HideEvent_IsBase(true);
        vkurlcomborequester->hideEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnHideEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_HideEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboRequester_NativeEvent(KUrlComboRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlComboRequester*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KUrlComboRequester_QBaseNativeEvent(KUrlComboRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_NativeEvent_IsBase(true);
        return vkurlcomborequester->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKUrlComboRequester*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnNativeEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_NativeEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboRequester_Metric(const KUrlComboRequester* self, int param1) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlComboRequester*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KUrlComboRequester_QBaseMetric(const KUrlComboRequester* self, int param1) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Metric_IsBase(true);
        return vkurlcomborequester->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKUrlComboRequester*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMetric(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Metric_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_InitPainter(const KUrlComboRequester* self, QPainter* painter) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->initPainter(painter);
    } else {
        ((VirtualKUrlComboRequester*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseInitPainter(const KUrlComboRequester* self, QPainter* painter) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_InitPainter_IsBase(true);
        vkurlcomborequester->initPainter(painter);
    } else {
        ((VirtualKUrlComboRequester*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnInitPainter(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_InitPainter_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KUrlComboRequester_Redirected(const KUrlComboRequester* self, QPoint* offset) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->redirected(offset);
    } else {
        return ((VirtualKUrlComboRequester*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KUrlComboRequester_QBaseRedirected(const KUrlComboRequester* self, QPoint* offset) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Redirected_IsBase(true);
        return vkurlcomborequester->redirected(offset);
    } else {
        return ((VirtualKUrlComboRequester*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnRedirected(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Redirected_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KUrlComboRequester_SharedPainter(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->sharedPainter();
    } else {
        return ((VirtualKUrlComboRequester*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KUrlComboRequester_QBaseSharedPainter(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_SharedPainter_IsBase(true);
        return vkurlcomborequester->sharedPainter();
    } else {
        return ((VirtualKUrlComboRequester*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnSharedPainter(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_SharedPainter_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_InputMethodEvent(KUrlComboRequester* self, QInputMethodEvent* param1) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlComboRequester*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseInputMethodEvent(KUrlComboRequester* self, QInputMethodEvent* param1) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_InputMethodEvent_IsBase(true);
        vkurlcomborequester->inputMethodEvent(param1);
    } else {
        ((VirtualKUrlComboRequester*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnInputMethodEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_InputMethodEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KUrlComboRequester_InputMethodQuery(const KUrlComboRequester* self, int param1) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return new QVariant(vkurlcomborequester->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlComboRequester*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KUrlComboRequester_QBaseInputMethodQuery(const KUrlComboRequester* self, int param1) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_InputMethodQuery_IsBase(true);
        return new QVariant(vkurlcomborequester->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKUrlComboRequester*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnInputMethodQuery(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_InputMethodQuery_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboRequester_FocusNextPrevChild(KUrlComboRequester* self, bool next) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlComboRequester*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KUrlComboRequester_QBaseFocusNextPrevChild(KUrlComboRequester* self, bool next) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusNextPrevChild_IsBase(true);
        return vkurlcomborequester->focusNextPrevChild(next);
    } else {
        return ((VirtualKUrlComboRequester*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFocusNextPrevChild(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_TimerEvent(KUrlComboRequester* self, QTimerEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->timerEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseTimerEvent(KUrlComboRequester* self, QTimerEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_TimerEvent_IsBase(true);
        vkurlcomborequester->timerEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnTimerEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_TimerEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_ChildEvent(KUrlComboRequester* self, QChildEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->childEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseChildEvent(KUrlComboRequester* self, QChildEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ChildEvent_IsBase(true);
        vkurlcomborequester->childEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnChildEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ChildEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_CustomEvent(KUrlComboRequester* self, QEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->customEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseCustomEvent(KUrlComboRequester* self, QEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_CustomEvent_IsBase(true);
        vkurlcomborequester->customEvent(event);
    } else {
        ((VirtualKUrlComboRequester*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnCustomEvent(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_CustomEvent_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_ConnectNotify(KUrlComboRequester* self, const QMetaMethod* signal) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->connectNotify(*signal);
    } else {
        ((VirtualKUrlComboRequester*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseConnectNotify(KUrlComboRequester* self, const QMetaMethod* signal) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ConnectNotify_IsBase(true);
        vkurlcomborequester->connectNotify(*signal);
    } else {
        ((VirtualKUrlComboRequester*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnConnectNotify(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_ConnectNotify_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_DisconnectNotify(KUrlComboRequester* self, const QMetaMethod* signal) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlComboRequester*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseDisconnectNotify(KUrlComboRequester* self, const QMetaMethod* signal) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DisconnectNotify_IsBase(true);
        vkurlcomborequester->disconnectNotify(*signal);
    } else {
        ((VirtualKUrlComboRequester*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDisconnectNotify(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_DisconnectNotify_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_UpdateMicroFocus(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->updateMicroFocus();
    } else {
        ((VirtualKUrlComboRequester*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseUpdateMicroFocus(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_UpdateMicroFocus_IsBase(true);
        vkurlcomborequester->updateMicroFocus();
    } else {
        ((VirtualKUrlComboRequester*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnUpdateMicroFocus(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_Create(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->create();
    } else {
        ((VirtualKUrlComboRequester*)self)->create();
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseCreate(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Create_IsBase(true);
        vkurlcomborequester->create();
    } else {
        ((VirtualKUrlComboRequester*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnCreate(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Create_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KUrlComboRequester_Destroy(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->destroy();
    } else {
        ((VirtualKUrlComboRequester*)self)->destroy();
    }
}

// Base class handler implementation
void KUrlComboRequester_QBaseDestroy(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Destroy_IsBase(true);
        vkurlcomborequester->destroy();
    } else {
        ((VirtualKUrlComboRequester*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDestroy(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Destroy_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboRequester_FocusNextChild(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->focusNextChild();
    } else {
        return ((VirtualKUrlComboRequester*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KUrlComboRequester_QBaseFocusNextChild(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusNextChild_IsBase(true);
        return vkurlcomborequester->focusNextChild();
    } else {
        return ((VirtualKUrlComboRequester*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFocusNextChild(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusNextChild_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboRequester_FocusPreviousChild(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->focusPreviousChild();
    } else {
        return ((VirtualKUrlComboRequester*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KUrlComboRequester_QBaseFocusPreviousChild(KUrlComboRequester* self) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusPreviousChild_IsBase(true);
        return vkurlcomborequester->focusPreviousChild();
    } else {
        return ((VirtualKUrlComboRequester*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFocusPreviousChild(KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_FocusPreviousChild_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KUrlComboRequester_Sender(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->sender();
    } else {
        return ((VirtualKUrlComboRequester*)self)->sender();
    }
}

// Base class handler implementation
QObject* KUrlComboRequester_QBaseSender(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Sender_IsBase(true);
        return vkurlcomborequester->sender();
    } else {
        return ((VirtualKUrlComboRequester*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnSender(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Sender_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboRequester_SenderSignalIndex(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->senderSignalIndex();
    } else {
        return ((VirtualKUrlComboRequester*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KUrlComboRequester_QBaseSenderSignalIndex(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_SenderSignalIndex_IsBase(true);
        return vkurlcomborequester->senderSignalIndex();
    } else {
        return ((VirtualKUrlComboRequester*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnSenderSignalIndex(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_SenderSignalIndex_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KUrlComboRequester_Receivers(const KUrlComboRequester* self, const char* signal) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->receivers(signal);
    } else {
        return ((VirtualKUrlComboRequester*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KUrlComboRequester_QBaseReceivers(const KUrlComboRequester* self, const char* signal) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Receivers_IsBase(true);
        return vkurlcomborequester->receivers(signal);
    } else {
        return ((VirtualKUrlComboRequester*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnReceivers(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_Receivers_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KUrlComboRequester_IsSignalConnected(const KUrlComboRequester* self, const QMetaMethod* signal) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlComboRequester*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KUrlComboRequester_QBaseIsSignalConnected(const KUrlComboRequester* self, const QMetaMethod* signal) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_IsSignalConnected_IsBase(true);
        return vkurlcomborequester->isSignalConnected(*signal);
    } else {
        return ((VirtualKUrlComboRequester*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnIsSignalConnected(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_IsSignalConnected_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KUrlComboRequester_GetDecodedMetricF(const KUrlComboRequester* self, int metricA, int metricB) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        return vkurlcomborequester->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlComboRequester*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KUrlComboRequester_QBaseGetDecodedMetricF(const KUrlComboRequester* self, int metricA, int metricB) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_GetDecodedMetricF_IsBase(true);
        return vkurlcomborequester->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKUrlComboRequester*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnGetDecodedMetricF(const KUrlComboRequester* self, intptr_t slot) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester && vkurlcomborequester->isVirtualKUrlComboRequester) {
        vkurlcomborequester->setKUrlComboRequester_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_GetDecodedMetricF_Callback>(slot));
    }
}

void KUrlComboRequester_Delete(KUrlComboRequester* self) {
    delete self;
}
