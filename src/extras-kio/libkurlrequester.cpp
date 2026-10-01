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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KUrlRequester_Tr(const char* s) {
    auto _ret = KUrlRequester::tr(s);
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

QFileDialog* KUrlRequester_FileDialog(const KUrlRequester* self) {
    return self->fileDialog();
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
    auto _ret = self->placeholderText();
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
    KUrlRequester::connect(self,
                           static_cast<void (KUrlRequester::*)(const QString&)>(&KUrlRequester::textChanged),
                           [self, slotFunc](const QString& param1) {
                               const auto param1_ret = param1;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray param1_b = param1_ret.toUtf8();
                               auto param1_str_len = param1_b.length();
                               const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                               memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                               ((char*)param1_str)[param1_str_len] = '\0';
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
    KUrlRequester::connect(self,
                           static_cast<void (KUrlRequester::*)(const QString&)>(&KUrlRequester::textEdited),
                           [self, slotFunc](const QString& param1) {
                               const auto param1_ret = param1;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray param1_b = param1_ret.toUtf8();
                               auto param1_str_len = param1_b.length();
                               const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                               memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                               ((char*)param1_str)[param1_str_len] = '\0';
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
    KUrlRequester::connect(self,
                           static_cast<void (KUrlRequester::*)(const QString&)>(&KUrlRequester::returnPressed),
                           [self, slotFunc](const QString& text) {
                               const auto text_ret = text;
                               // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                               QByteArray text_b = text_ret.toUtf8();
                               auto text_str_len = text_b.length();
                               const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                               memcpy((void*)text_str, text_b.data(), text_str_len);
                               ((char*)text_str)[text_str_len] = '\0';
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
    KUrlRequester::connect(self,
                           static_cast<void (KUrlRequester::*)(KUrlRequester*)>(&KUrlRequester::openFileDialog),
                           [self, slotFunc](KUrlRequester* param1) {
                               KUrlRequester* sigval1 = param1;
                               slotFunc(self, sigval1);
                           });
}

void KUrlRequester_UrlSelected(KUrlRequester* self, const QUrl* param1) {
    self->urlSelected(*param1);
}

void KUrlRequester_Connect_UrlSelected(KUrlRequester* self, intptr_t slot) {
    void (*slotFunc)(KUrlRequester*, QUrl*) = reinterpret_cast<void (*)(KUrlRequester*, QUrl*)>(slot);
    KUrlRequester::connect(self,
                           static_cast<void (KUrlRequester::*)(const QUrl&)>(&KUrlRequester::urlSelected),
                           [self, slotFunc](const QUrl& param1) {
                               const QUrl& param1_ret = param1;
                               // Cast returned reference into pointer
                               QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
                               slotFunc(self, sigval1);
                           });
}

void KUrlRequester_ChangeEvent(KUrlRequester* self, QEvent* e) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->changeEvent(e);
    }
}

bool KUrlRequester_EventFilter(KUrlRequester* self, QObject* obj, QEvent* ev) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        return vkurlrequester->eventFilter(obj, ev);
    }
    qFatal("Error: Protected method KUrlRequester::eventFilter called without a directly constructed type");
}

libqt_string KUrlRequester_Tr2(const char* s, const char* c) {
    auto _ret = KUrlRequester::tr(s, c);
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
    auto _ret = KUrlRequester::tr(s, c, static_cast<int>(n));
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
QMetaObject* KUrlRequester_SuperMetaObject(const KUrlRequester* self) {
    return (QMetaObject*)self->KUrlRequester::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMetaObject(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_metaobject_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KUrlRequester_SuperMetacast(KUrlRequester* self, const char* param1) {
    return self->KUrlRequester::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMetacast(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_metacast_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Metacast_Callback>(slot);
}

// Base class handler implementation
int KUrlRequester_SuperMetacall(KUrlRequester* self, int param1, int param2, void** param3) {
    return self->KUrlRequester::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMetacall(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_metacall_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Metacall_Callback>(slot);
}

// Base class handler implementation
QFileDialog* KUrlRequester_SuperFileDialog(const KUrlRequester* self) {
    return self->KUrlRequester::fileDialog();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFileDialog(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_filedialog_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FileDialog_Callback>(slot);
}

// Base class handler implementation
void KUrlRequester_SuperChangeEvent(KUrlRequester* self, QEvent* e) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnChangeEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_changeevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
bool KUrlRequester_SuperEventFilter(KUrlRequester* self, QObject* obj, QEvent* ev) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        return vkurlrequester->KUrlRequester::eventFilter(obj, ev);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnEventFilter(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_eventfilter_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KUrlRequester_DevType(const KUrlRequester* self) {
    return self->devType();
}

// Base class handler implementation
int KUrlRequester_SuperDevType(const KUrlRequester* self) {
    return self->KUrlRequester::devType();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDevType(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_devtype_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DevType_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_SetVisible(KUrlRequester* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KUrlRequester_SuperSetVisible(KUrlRequester* self, bool visible) {
    self->KUrlRequester::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnSetVisible(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_setvisible_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlRequester_SizeHint(const KUrlRequester* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KUrlRequester_SuperSizeHint(const KUrlRequester* self) {
    return new QSize(self->KUrlRequester::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnSizeHint(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_sizehint_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlRequester_MinimumSizeHint(const KUrlRequester* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KUrlRequester_SuperMinimumSizeHint(const KUrlRequester* self) {
    return new QSize(self->KUrlRequester::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMinimumSizeHint(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_minimumsizehint_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KUrlRequester_HeightForWidth(const KUrlRequester* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KUrlRequester_SuperHeightForWidth(const KUrlRequester* self, int param1) {
    return self->KUrlRequester::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnHeightForWidth(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_heightforwidth_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KUrlRequester_HasHeightForWidth(const KUrlRequester* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KUrlRequester_SuperHasHeightForWidth(const KUrlRequester* self) {
    return self->KUrlRequester::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnHasHeightForWidth(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_hasheightforwidth_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KUrlRequester_PaintEngine(const KUrlRequester* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KUrlRequester_SuperPaintEngine(const KUrlRequester* self) {
    return self->KUrlRequester::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnPaintEngine(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_paintengine_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KUrlRequester_Event(KUrlRequester* self, QEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        return vkurlrequester->event(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlRequester_SuperEvent(KUrlRequester* self, QEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        return vkurlrequester->KUrlRequester::event(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_event_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Event_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_MousePressEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperMousePressEvent(KUrlRequester* self, QMouseEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMousePressEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_mousepressevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_MouseReleaseEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperMouseReleaseEvent(KUrlRequester* self, QMouseEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMouseReleaseEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_mousereleaseevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_MouseDoubleClickEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperMouseDoubleClickEvent(KUrlRequester* self, QMouseEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMouseDoubleClickEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_mousedoubleclickevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_MouseMoveEvent(KUrlRequester* self, QMouseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperMouseMoveEvent(KUrlRequester* self, QMouseEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMouseMoveEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_mousemoveevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_WheelEvent(KUrlRequester* self, QWheelEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperWheelEvent(KUrlRequester* self, QWheelEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnWheelEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_wheelevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_KeyPressEvent(KUrlRequester* self, QKeyEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperKeyPressEvent(KUrlRequester* self, QKeyEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnKeyPressEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_keypressevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_KeyReleaseEvent(KUrlRequester* self, QKeyEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperKeyReleaseEvent(KUrlRequester* self, QKeyEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnKeyReleaseEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_keyreleaseevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_FocusInEvent(KUrlRequester* self, QFocusEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperFocusInEvent(KUrlRequester* self, QFocusEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFocusInEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_focusinevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_FocusOutEvent(KUrlRequester* self, QFocusEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperFocusOutEvent(KUrlRequester* self, QFocusEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFocusOutEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_focusoutevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_EnterEvent(KUrlRequester* self, QEnterEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperEnterEvent(KUrlRequester* self, QEnterEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnEnterEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_enterevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_LeaveEvent(KUrlRequester* self, QEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperLeaveEvent(KUrlRequester* self, QEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnLeaveEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_leaveevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_PaintEvent(KUrlRequester* self, QPaintEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperPaintEvent(KUrlRequester* self, QPaintEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnPaintEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_paintevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_MoveEvent(KUrlRequester* self, QMoveEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperMoveEvent(KUrlRequester* self, QMoveEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMoveEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_moveevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_ResizeEvent(KUrlRequester* self, QResizeEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperResizeEvent(KUrlRequester* self, QResizeEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnResizeEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_resizeevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_CloseEvent(KUrlRequester* self, QCloseEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperCloseEvent(KUrlRequester* self, QCloseEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnCloseEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_closeevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_ContextMenuEvent(KUrlRequester* self, QContextMenuEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperContextMenuEvent(KUrlRequester* self, QContextMenuEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnContextMenuEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_contextmenuevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_TabletEvent(KUrlRequester* self, QTabletEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperTabletEvent(KUrlRequester* self, QTabletEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnTabletEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_tabletevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_ActionEvent(KUrlRequester* self, QActionEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperActionEvent(KUrlRequester* self, QActionEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnActionEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_actionevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_DragEnterEvent(KUrlRequester* self, QDragEnterEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperDragEnterEvent(KUrlRequester* self, QDragEnterEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDragEnterEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_dragenterevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_DragMoveEvent(KUrlRequester* self, QDragMoveEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperDragMoveEvent(KUrlRequester* self, QDragMoveEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDragMoveEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_dragmoveevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_DragLeaveEvent(KUrlRequester* self, QDragLeaveEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperDragLeaveEvent(KUrlRequester* self, QDragLeaveEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDragLeaveEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_dragleaveevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_DropEvent(KUrlRequester* self, QDropEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperDropEvent(KUrlRequester* self, QDropEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDropEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_dropevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_ShowEvent(KUrlRequester* self, QShowEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperShowEvent(KUrlRequester* self, QShowEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnShowEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_showevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_HideEvent(KUrlRequester* self, QHideEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperHideEvent(KUrlRequester* self, QHideEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnHideEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_hideevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KUrlRequester_NativeEvent(KUrlRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        return vkurlrequester->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlRequester_SuperNativeEvent(KUrlRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        return vkurlrequester->KUrlRequester::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KUrlRequester::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnNativeEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_nativeevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KUrlRequester_Metric(const KUrlRequester* self, int param1) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester) {
        return vkurlrequester->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KUrlRequester_SuperMetric(const KUrlRequester* self, int param1) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self))) {
        return vkurlrequester->KUrlRequester::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KUrlRequester::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnMetric(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_metric_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Metric_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_InitPainter(const KUrlRequester* self, QPainter* painter) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester) {
        vkurlrequester->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperInitPainter(const KUrlRequester* self, QPainter* painter) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self))) {
        vkurlrequester->KUrlRequester::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnInitPainter(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_initpainter_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KUrlRequester_Redirected(const KUrlRequester* self, QPoint* offset) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester) {
        return vkurlrequester->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KUrlRequester_SuperRedirected(const KUrlRequester* self, QPoint* offset) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self))) {
        return vkurlrequester->KUrlRequester::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnRedirected(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_redirected_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KUrlRequester_SharedPainter(const KUrlRequester* self) {
    auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self));
    if (vkurlrequester) {
        return vkurlrequester->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KUrlRequester_SuperSharedPainter(const KUrlRequester* self) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self))) {
        return vkurlrequester->KUrlRequester::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KUrlRequester::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnSharedPainter(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_sharedpainter_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_InputMethodEvent(KUrlRequester* self, QInputMethodEvent* param1) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperInputMethodEvent(KUrlRequester* self, QInputMethodEvent* param1) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnInputMethodEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_inputmethodevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KUrlRequester_InputMethodQuery(const KUrlRequester* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KUrlRequester_SuperInputMethodQuery(const KUrlRequester* self, int param1) {
    return new QVariant(self->KUrlRequester::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnInputMethodQuery(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self)))
        vkurlrequester->kurlrequester_inputmethodquery_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KUrlRequester_FocusNextPrevChild(KUrlRequester* self, bool next) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        return vkurlrequester->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlRequester_SuperFocusNextPrevChild(KUrlRequester* self, bool next) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        return vkurlrequester->KUrlRequester::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnFocusNextPrevChild(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_focusnextprevchild_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_TimerEvent(KUrlRequester* self, QTimerEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperTimerEvent(KUrlRequester* self, QTimerEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnTimerEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_timerevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_ChildEvent(KUrlRequester* self, QChildEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperChildEvent(KUrlRequester* self, QChildEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnChildEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_childevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_CustomEvent(KUrlRequester* self, QEvent* event) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperCustomEvent(KUrlRequester* self, QEvent* event) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnCustomEvent(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_customevent_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_ConnectNotify(KUrlRequester* self, const QMetaMethod* signal) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperConnectNotify(KUrlRequester* self, const QMetaMethod* signal) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnConnectNotify(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_connectnotify_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KUrlRequester_DisconnectNotify(KUrlRequester* self, const QMetaMethod* signal) {
    auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self);
    if (vkurlrequester) {
        vkurlrequester->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlRequester::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlRequester_SuperDisconnectNotify(KUrlRequester* self, const QMetaMethod* signal) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->KUrlRequester::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlRequester::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlRequester_OnDisconnectNotify(KUrlRequester* self, intptr_t slot) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self))
        vkurlrequester->kurlrequester_disconnectnotify_callback = reinterpret_cast<VirtualKUrlRequester::KUrlRequester_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KUrlRequester_UpdateMicroFocus(KUrlRequester* self) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->VirtualKUrlRequester::updateMicroFocus();
    } else
        qFatal("Error: Protected method KUrlRequester::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlRequester_Create(KUrlRequester* self) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->VirtualKUrlRequester::create();
    } else
        qFatal("Error: Protected method KUrlRequester::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlRequester_Destroy(KUrlRequester* self) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        vkurlrequester->VirtualKUrlRequester::destroy();
    } else
        qFatal("Error: Protected method KUrlRequester::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlRequester_FocusNextChild(KUrlRequester* self) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        return vkurlrequester->VirtualKUrlRequester::focusNextChild();
    } else
        qFatal("Error: Protected method KUrlRequester::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlRequester_FocusPreviousChild(KUrlRequester* self) {
    if (auto* vkurlrequester = dynamic_cast<VirtualKUrlRequester*>(self)) {
        return vkurlrequester->VirtualKUrlRequester::focusPreviousChild();
    } else
        qFatal("Error: Protected method KUrlRequester::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KUrlRequester_Sender(const KUrlRequester* self) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self))) {
        return vkurlrequester->VirtualKUrlRequester::sender();
    } else
        qFatal("Error: Protected method KUrlRequester::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlRequester_SenderSignalIndex(const KUrlRequester* self) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self))) {
        return vkurlrequester->VirtualKUrlRequester::senderSignalIndex();
    } else
        qFatal("Error: Protected method KUrlRequester::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlRequester_Receivers(const KUrlRequester* self, const char* signal) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self))) {
        return vkurlrequester->VirtualKUrlRequester::receivers(signal);
    } else
        qFatal("Error: Protected method KUrlRequester::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlRequester_IsSignalConnected(const KUrlRequester* self, const QMetaMethod* signal) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self))) {
        return vkurlrequester->VirtualKUrlRequester::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KUrlRequester::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KUrlRequester_GetDecodedMetricF(const KUrlRequester* self, int metricA, int metricB) {
    if (auto* vkurlrequester = const_cast<VirtualKUrlRequester*>(dynamic_cast<const VirtualKUrlRequester*>(self))) {
        return vkurlrequester->VirtualKUrlRequester::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KUrlRequester::getDecodedMetricF called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KUrlComboRequester_Tr(const char* s) {
    auto _ret = KUrlComboRequester::tr(s);
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
    auto _ret = KUrlComboRequester::tr(s, c);
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
    auto _ret = KUrlComboRequester::tr(s, c, static_cast<int>(n));
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
QMetaObject* KUrlComboRequester_SuperMetaObject(const KUrlComboRequester* self) {
    return (QMetaObject*)self->KUrlComboRequester::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMetaObject(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_metaobject_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KUrlComboRequester_SuperMetacast(KUrlComboRequester* self, const char* param1) {
    return self->KUrlComboRequester::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMetacast(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_metacast_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Metacast_Callback>(slot);
}

// Base class handler implementation
int KUrlComboRequester_SuperMetacall(KUrlComboRequester* self, int param1, int param2, void** param3) {
    return self->KUrlComboRequester::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMetacall(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_metacall_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Metacall_Callback>(slot);
}

// Derived class handler implementation
QFileDialog* KUrlComboRequester_FileDialog(const KUrlComboRequester* self) {
    return self->fileDialog();
}

// Base class handler implementation
QFileDialog* KUrlComboRequester_SuperFileDialog(const KUrlComboRequester* self) {
    return self->KUrlComboRequester::fileDialog();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFileDialog(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_filedialog_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FileDialog_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_ChangeEvent(KUrlComboRequester* self, QEvent* e) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperChangeEvent(KUrlComboRequester* self, QEvent* e) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnChangeEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_changeevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboRequester_EventFilter(KUrlComboRequester* self, QObject* obj, QEvent* ev) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        return vkurlcomborequester->eventFilter(obj, ev);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlComboRequester_SuperEventFilter(KUrlComboRequester* self, QObject* obj, QEvent* ev) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        return vkurlcomborequester->KUrlComboRequester::eventFilter(obj, ev);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnEventFilter(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_eventfilter_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KUrlComboRequester_DevType(const KUrlComboRequester* self) {
    return self->devType();
}

// Base class handler implementation
int KUrlComboRequester_SuperDevType(const KUrlComboRequester* self) {
    return self->KUrlComboRequester::devType();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDevType(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_devtype_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DevType_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_SetVisible(KUrlComboRequester* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KUrlComboRequester_SuperSetVisible(KUrlComboRequester* self, bool visible) {
    self->KUrlComboRequester::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnSetVisible(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_setvisible_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlComboRequester_SizeHint(const KUrlComboRequester* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KUrlComboRequester_SuperSizeHint(const KUrlComboRequester* self) {
    return new QSize(self->KUrlComboRequester::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnSizeHint(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_sizehint_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KUrlComboRequester_MinimumSizeHint(const KUrlComboRequester* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KUrlComboRequester_SuperMinimumSizeHint(const KUrlComboRequester* self) {
    return new QSize(self->KUrlComboRequester::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMinimumSizeHint(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_minimumsizehint_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KUrlComboRequester_HeightForWidth(const KUrlComboRequester* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KUrlComboRequester_SuperHeightForWidth(const KUrlComboRequester* self, int param1) {
    return self->KUrlComboRequester::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnHeightForWidth(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_heightforwidth_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboRequester_HasHeightForWidth(const KUrlComboRequester* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KUrlComboRequester_SuperHasHeightForWidth(const KUrlComboRequester* self) {
    return self->KUrlComboRequester::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnHasHeightForWidth(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_hasheightforwidth_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KUrlComboRequester_PaintEngine(const KUrlComboRequester* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KUrlComboRequester_SuperPaintEngine(const KUrlComboRequester* self) {
    return self->KUrlComboRequester::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnPaintEngine(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_paintengine_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboRequester_Event(KUrlComboRequester* self, QEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        return vkurlcomborequester->event(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlComboRequester_SuperEvent(KUrlComboRequester* self, QEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        return vkurlcomborequester->KUrlComboRequester::event(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_event_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Event_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_MousePressEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperMousePressEvent(KUrlComboRequester* self, QMouseEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMousePressEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_mousepressevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_MouseReleaseEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperMouseReleaseEvent(KUrlComboRequester* self, QMouseEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMouseReleaseEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_mousereleaseevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_MouseDoubleClickEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperMouseDoubleClickEvent(KUrlComboRequester* self, QMouseEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMouseDoubleClickEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_mousedoubleclickevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_MouseMoveEvent(KUrlComboRequester* self, QMouseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperMouseMoveEvent(KUrlComboRequester* self, QMouseEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMouseMoveEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_mousemoveevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_WheelEvent(KUrlComboRequester* self, QWheelEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperWheelEvent(KUrlComboRequester* self, QWheelEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnWheelEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_wheelevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_KeyPressEvent(KUrlComboRequester* self, QKeyEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperKeyPressEvent(KUrlComboRequester* self, QKeyEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnKeyPressEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_keypressevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_KeyReleaseEvent(KUrlComboRequester* self, QKeyEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperKeyReleaseEvent(KUrlComboRequester* self, QKeyEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnKeyReleaseEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_keyreleaseevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_FocusInEvent(KUrlComboRequester* self, QFocusEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperFocusInEvent(KUrlComboRequester* self, QFocusEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFocusInEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_focusinevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_FocusOutEvent(KUrlComboRequester* self, QFocusEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperFocusOutEvent(KUrlComboRequester* self, QFocusEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFocusOutEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_focusoutevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_EnterEvent(KUrlComboRequester* self, QEnterEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperEnterEvent(KUrlComboRequester* self, QEnterEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnEnterEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_enterevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_LeaveEvent(KUrlComboRequester* self, QEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperLeaveEvent(KUrlComboRequester* self, QEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnLeaveEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_leaveevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_PaintEvent(KUrlComboRequester* self, QPaintEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperPaintEvent(KUrlComboRequester* self, QPaintEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnPaintEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_paintevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_MoveEvent(KUrlComboRequester* self, QMoveEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperMoveEvent(KUrlComboRequester* self, QMoveEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMoveEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_moveevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_ResizeEvent(KUrlComboRequester* self, QResizeEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperResizeEvent(KUrlComboRequester* self, QResizeEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnResizeEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_resizeevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_CloseEvent(KUrlComboRequester* self, QCloseEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperCloseEvent(KUrlComboRequester* self, QCloseEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnCloseEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_closeevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_ContextMenuEvent(KUrlComboRequester* self, QContextMenuEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperContextMenuEvent(KUrlComboRequester* self, QContextMenuEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnContextMenuEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_contextmenuevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_TabletEvent(KUrlComboRequester* self, QTabletEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperTabletEvent(KUrlComboRequester* self, QTabletEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnTabletEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_tabletevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_ActionEvent(KUrlComboRequester* self, QActionEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperActionEvent(KUrlComboRequester* self, QActionEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnActionEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_actionevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_DragEnterEvent(KUrlComboRequester* self, QDragEnterEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperDragEnterEvent(KUrlComboRequester* self, QDragEnterEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDragEnterEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_dragenterevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_DragMoveEvent(KUrlComboRequester* self, QDragMoveEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperDragMoveEvent(KUrlComboRequester* self, QDragMoveEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDragMoveEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_dragmoveevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_DragLeaveEvent(KUrlComboRequester* self, QDragLeaveEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperDragLeaveEvent(KUrlComboRequester* self, QDragLeaveEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDragLeaveEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_dragleaveevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_DropEvent(KUrlComboRequester* self, QDropEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperDropEvent(KUrlComboRequester* self, QDropEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDropEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_dropevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_ShowEvent(KUrlComboRequester* self, QShowEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperShowEvent(KUrlComboRequester* self, QShowEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnShowEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_showevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_HideEvent(KUrlComboRequester* self, QHideEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperHideEvent(KUrlComboRequester* self, QHideEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnHideEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_hideevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboRequester_NativeEvent(KUrlComboRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        return vkurlcomborequester->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlComboRequester_SuperNativeEvent(KUrlComboRequester* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        return vkurlcomborequester->KUrlComboRequester::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnNativeEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_nativeevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KUrlComboRequester_Metric(const KUrlComboRequester* self, int param1) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester) {
        return vkurlcomborequester->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KUrlComboRequester_SuperMetric(const KUrlComboRequester* self, int param1) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self))) {
        return vkurlcomborequester->KUrlComboRequester::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnMetric(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_metric_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Metric_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_InitPainter(const KUrlComboRequester* self, QPainter* painter) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester) {
        vkurlcomborequester->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperInitPainter(const KUrlComboRequester* self, QPainter* painter) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self))) {
        vkurlcomborequester->KUrlComboRequester::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnInitPainter(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_initpainter_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KUrlComboRequester_Redirected(const KUrlComboRequester* self, QPoint* offset) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester) {
        return vkurlcomborequester->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KUrlComboRequester_SuperRedirected(const KUrlComboRequester* self, QPoint* offset) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self))) {
        return vkurlcomborequester->KUrlComboRequester::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnRedirected(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_redirected_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KUrlComboRequester_SharedPainter(const KUrlComboRequester* self) {
    auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self));
    if (vkurlcomborequester) {
        return vkurlcomborequester->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KUrlComboRequester_SuperSharedPainter(const KUrlComboRequester* self) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self))) {
        return vkurlcomborequester->KUrlComboRequester::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnSharedPainter(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_sharedpainter_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_InputMethodEvent(KUrlComboRequester* self, QInputMethodEvent* param1) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperInputMethodEvent(KUrlComboRequester* self, QInputMethodEvent* param1) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnInputMethodEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_inputmethodevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KUrlComboRequester_InputMethodQuery(const KUrlComboRequester* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KUrlComboRequester_SuperInputMethodQuery(const KUrlComboRequester* self, int param1) {
    return new QVariant(self->KUrlComboRequester::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnInputMethodQuery(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self)))
        vkurlcomborequester->kurlcomborequester_inputmethodquery_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KUrlComboRequester_FocusNextPrevChild(KUrlComboRequester* self, bool next) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        return vkurlcomborequester->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KUrlComboRequester_SuperFocusNextPrevChild(KUrlComboRequester* self, bool next) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        return vkurlcomborequester->KUrlComboRequester::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnFocusNextPrevChild(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_focusnextprevchild_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_TimerEvent(KUrlComboRequester* self, QTimerEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperTimerEvent(KUrlComboRequester* self, QTimerEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnTimerEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_timerevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_ChildEvent(KUrlComboRequester* self, QChildEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperChildEvent(KUrlComboRequester* self, QChildEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnChildEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_childevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_CustomEvent(KUrlComboRequester* self, QEvent* event) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperCustomEvent(KUrlComboRequester* self, QEvent* event) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnCustomEvent(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_customevent_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_ConnectNotify(KUrlComboRequester* self, const QMetaMethod* signal) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperConnectNotify(KUrlComboRequester* self, const QMetaMethod* signal) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnConnectNotify(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_connectnotify_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KUrlComboRequester_DisconnectNotify(KUrlComboRequester* self, const QMetaMethod* signal) {
    auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self);
    if (vkurlcomborequester) {
        vkurlcomborequester->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KUrlComboRequester::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KUrlComboRequester_SuperDisconnectNotify(KUrlComboRequester* self, const QMetaMethod* signal) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->KUrlComboRequester::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KUrlComboRequester::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KUrlComboRequester_OnDisconnectNotify(KUrlComboRequester* self, intptr_t slot) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self))
        vkurlcomborequester->kurlcomborequester_disconnectnotify_callback = reinterpret_cast<VirtualKUrlComboRequester::KUrlComboRequester_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KUrlComboRequester_UpdateMicroFocus(KUrlComboRequester* self) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->VirtualKUrlComboRequester::updateMicroFocus();
    } else
        qFatal("Error: Protected method KUrlComboRequester::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlComboRequester_Create(KUrlComboRequester* self) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->VirtualKUrlComboRequester::create();
    } else
        qFatal("Error: Protected method KUrlComboRequester::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KUrlComboRequester_Destroy(KUrlComboRequester* self) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        vkurlcomborequester->VirtualKUrlComboRequester::destroy();
    } else
        qFatal("Error: Protected method KUrlComboRequester::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlComboRequester_FocusNextChild(KUrlComboRequester* self) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        return vkurlcomborequester->VirtualKUrlComboRequester::focusNextChild();
    } else
        qFatal("Error: Protected method KUrlComboRequester::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlComboRequester_FocusPreviousChild(KUrlComboRequester* self) {
    if (auto* vkurlcomborequester = dynamic_cast<VirtualKUrlComboRequester*>(self)) {
        return vkurlcomborequester->VirtualKUrlComboRequester::focusPreviousChild();
    } else
        qFatal("Error: Protected method KUrlComboRequester::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KUrlComboRequester_Sender(const KUrlComboRequester* self) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self))) {
        return vkurlcomborequester->VirtualKUrlComboRequester::sender();
    } else
        qFatal("Error: Protected method KUrlComboRequester::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlComboRequester_SenderSignalIndex(const KUrlComboRequester* self) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self))) {
        return vkurlcomborequester->VirtualKUrlComboRequester::senderSignalIndex();
    } else
        qFatal("Error: Protected method KUrlComboRequester::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KUrlComboRequester_Receivers(const KUrlComboRequester* self, const char* signal) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self))) {
        return vkurlcomborequester->VirtualKUrlComboRequester::receivers(signal);
    } else
        qFatal("Error: Protected method KUrlComboRequester::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KUrlComboRequester_IsSignalConnected(const KUrlComboRequester* self, const QMetaMethod* signal) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self))) {
        return vkurlcomborequester->VirtualKUrlComboRequester::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KUrlComboRequester::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KUrlComboRequester_GetDecodedMetricF(const KUrlComboRequester* self, int metricA, int metricB) {
    if (auto* vkurlcomborequester = const_cast<VirtualKUrlComboRequester*>(dynamic_cast<const VirtualKUrlComboRequester*>(self))) {
        return vkurlcomborequester->VirtualKUrlComboRequester::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KUrlComboRequester::getDecodedMetricF called without a directly constructed type");
}

void KUrlComboRequester_Delete(KUrlComboRequester* self) {
    delete self;
}
