#include <KCompositeJob>
#include <KFileItem>
#include <KIO/Job>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__PreviewJob
#include <KJob>
#include <KPluginMetaData>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPixmap>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <previewjob.h>
#include "libpreviewjob.h"
#include "libpreviewjob.hxx"

KIO__PreviewJob* KIO__PreviewJob_new(const KFileItemList* items, const QSize* size) {
    return new VirtualKIOPreviewJob(*items, *size);
}

KIO__PreviewJob* KIO__PreviewJob_new2(const KFileItemList* items, const QSize* size, const libqt_list /* of libqt_string */ enabledPlugins) {
    QList<QString>* enabledPlugins_QList = new QList<QString>();
    enabledPlugins_QList->reserve(enabledPlugins.len);
    libqt_string* enabledPlugins_arr = static_cast<libqt_string*>(enabledPlugins.data);
    for (size_t i = 0; i < enabledPlugins.len; ++i) {
        QString enabledPlugins_arr_i_QString = QString::fromUtf8(enabledPlugins_arr[i].data, enabledPlugins_arr[i].len);
        enabledPlugins_QList->push_back(enabledPlugins_arr_i_QString);
    }
    return new VirtualKIOPreviewJob(*items, *size, enabledPlugins_QList);
}

QMetaObject* KIO__PreviewJob_MetaObject(const KIO__PreviewJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__PreviewJob_Metacast(KIO__PreviewJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__PreviewJob_Metacall(KIO__PreviewJob* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__PreviewJob_Tr(const char* s) {
    auto _ret = KIO::PreviewJob::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__PreviewJob_SetScaleType(KIO__PreviewJob* self, int typeVal) {
    self->setScaleType(static_cast<KIO::PreviewJob::ScaleType>(typeVal));
}

int KIO__PreviewJob_ScaleType(const KIO__PreviewJob* self) {
    return static_cast<int>(self->scaleType());
}

void KIO__PreviewJob_RemoveItem(KIO__PreviewJob* self, const QUrl* url) {
    self->removeItem(*url);
}

void KIO__PreviewJob_SetIgnoreMaximumSize(KIO__PreviewJob* self) {
    self->setIgnoreMaximumSize();
}

void KIO__PreviewJob_SetSequenceIndex(KIO__PreviewJob* self, int index) {
    self->setSequenceIndex(static_cast<int>(index));
}

int KIO__PreviewJob_SequenceIndex(const KIO__PreviewJob* self) {
    return self->sequenceIndex();
}

float KIO__PreviewJob_SequenceIndexWraparoundPoint(const KIO__PreviewJob* self) {
    return self->sequenceIndexWraparoundPoint();
}

bool KIO__PreviewJob_HandlesSequences(const KIO__PreviewJob* self) {
    return self->handlesSequences();
}

void KIO__PreviewJob_SetDevicePixelRatio(KIO__PreviewJob* self, double dpr) {
    self->setDevicePixelRatio(static_cast<qreal>(dpr));
}

libqt_list /* of libqt_string */ KIO__PreviewJob_AvailablePlugins() {
    QList<QString> _ret = KIO::PreviewJob::availablePlugins();
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

libqt_list /* of KPluginMetaData* */ KIO__PreviewJob_AvailableThumbnailerPlugins() {
    QList<KPluginMetaData> _ret = KIO::PreviewJob::availableThumbnailerPlugins();
    // Convert QList<> from C++ memory to manually-managed C memory
    KPluginMetaData** _arr = static_cast<KPluginMetaData**>(malloc(sizeof(KPluginMetaData*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KPluginMetaData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ KIO__PreviewJob_DefaultPlugins() {
    QList<QString> _ret = KIO::PreviewJob::defaultPlugins();
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

libqt_list /* of libqt_string */ KIO__PreviewJob_SupportedMimeTypes() {
    QList<QString> _ret = KIO::PreviewJob::supportedMimeTypes();
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

void KIO__PreviewJob_GotPreview(KIO__PreviewJob* self, const KFileItem* item, const QPixmap* preview) {
    self->gotPreview(*item, *preview);
}

void KIO__PreviewJob_Connect_GotPreview(KIO__PreviewJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__PreviewJob*, KFileItem*, QPixmap*) = reinterpret_cast<void (*)(KIO__PreviewJob*, KFileItem*, QPixmap*)>(slot);
    KIO::PreviewJob::connect(self,
                             static_cast<void (KIO::PreviewJob::*)(const KFileItem&, const QPixmap&)>(&KIO::PreviewJob::gotPreview),
                             [self, slotFunc](const KFileItem& item, const QPixmap& preview) {
                                 const KFileItem& item_ret = item;
                                 // Cast returned reference into pointer
                                 KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
                                 const QPixmap& preview_ret = preview;
                                 // Cast returned reference into pointer
                                 QPixmap* sigval2 = const_cast<QPixmap*>(&preview_ret);
                                 slotFunc(self, sigval1, sigval2);
                             });
}

void KIO__PreviewJob_Failed(KIO__PreviewJob* self, const KFileItem* item) {
    self->failed(*item);
}

void KIO__PreviewJob_Connect_Failed(KIO__PreviewJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__PreviewJob*, KFileItem*) = reinterpret_cast<void (*)(KIO__PreviewJob*, KFileItem*)>(slot);
    KIO::PreviewJob::connect(self,
                             static_cast<void (KIO::PreviewJob::*)(const KFileItem&)>(&KIO::PreviewJob::failed),
                             [self, slotFunc](const KFileItem& item) {
                                 const KFileItem& item_ret = item;
                                 // Cast returned reference into pointer
                                 KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
                                 slotFunc(self, sigval1);
                             });
}

void KIO__PreviewJob_SlotResult(KIO__PreviewJob* self, KJob* job) {
    auto* vkio__previewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkio__previewjob) {
        vkio__previewjob->slotResult(job);
    }
}

void KIO__PreviewJob_SetDefaultDevicePixelRatio(double devicePixelRatio) {
    KIO::PreviewJob::setDefaultDevicePixelRatio(static_cast<qreal>(devicePixelRatio));
}

libqt_string KIO__PreviewJob_Tr2(const char* s, const char* c) {
    auto _ret = KIO::PreviewJob::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__PreviewJob_Tr3(const char* s, const char* c, int n) {
    auto _ret = KIO::PreviewJob::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIO__PreviewJob_SetIgnoreMaximumSize1(KIO__PreviewJob* self, bool ignoreSize) {
    self->setIgnoreMaximumSize(ignoreSize);
}

// Base class handler implementation
QMetaObject* KIO__PreviewJob_SuperMetaObject(const KIO__PreviewJob* self) {
    return (QMetaObject*)self->KIO::PreviewJob::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnMetaObject(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self)))
        vkiopreviewjob->kio__previewjob_metaobject_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KIO__PreviewJob_SuperMetacast(KIO__PreviewJob* self, const char* param1) {
    return self->KIO::PreviewJob::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnMetacast(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_metacast_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Metacast_Callback>(slot);
}

// Base class handler implementation
int KIO__PreviewJob_SuperMetacall(KIO__PreviewJob* self, int param1, int param2, void** param3) {
    return self->KIO::PreviewJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnMetacall(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_metacall_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Metacall_Callback>(slot);
}

// Base class handler implementation
void KIO__PreviewJob_SuperSlotResult(KIO__PreviewJob* self, KJob* job) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->KIO::PreviewJob::slotResult(job);
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::slotResult called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSlotResult(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_slotresult_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SlotResult_Callback>(slot);
}

// Derived class handler implementation
void KIO__PreviewJob_Start(KIO__PreviewJob* self) {
    self->start();
}

// Base class handler implementation
void KIO__PreviewJob_SuperStart(KIO__PreviewJob* self) {
    self->KIO::PreviewJob::start();
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnStart(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_start_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Start_Callback>(slot);
}

// Derived class handler implementation
bool KIO__PreviewJob_DoKill(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        return vkiopreviewjob->doKill();
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::doKill called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__PreviewJob_SuperDoKill(KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        return vkiopreviewjob->KIO::PreviewJob::doKill();
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::doKill called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnDoKill(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_dokill_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_DoKill_Callback>(slot);
}

// Derived class handler implementation
bool KIO__PreviewJob_DoSuspend(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        return vkiopreviewjob->doSuspend();
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::doSuspend called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__PreviewJob_SuperDoSuspend(KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        return vkiopreviewjob->KIO::PreviewJob::doSuspend();
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::doSuspend called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnDoSuspend(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_dosuspend_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_DoSuspend_Callback>(slot);
}

// Derived class handler implementation
bool KIO__PreviewJob_DoResume(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        return vkiopreviewjob->doResume();
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::doResume called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__PreviewJob_SuperDoResume(KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        return vkiopreviewjob->KIO::PreviewJob::doResume();
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::doResume called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnDoResume(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_doresume_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_DoResume_Callback>(slot);
}

// Derived class handler implementation
libqt_string KIO__PreviewJob_ErrorString(const KIO__PreviewJob* self) {
    auto _ret = self->errorString();
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
libqt_string KIO__PreviewJob_SuperErrorString(const KIO__PreviewJob* self) {
    auto _ret = self->KIO::PreviewJob::errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnErrorString(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self)))
        vkiopreviewjob->kio__previewjob_errorstring_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool KIO__PreviewJob_AddSubjob(KIO__PreviewJob* self, KJob* job) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        return vkiopreviewjob->addSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::addSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__PreviewJob_SuperAddSubjob(KIO__PreviewJob* self, KJob* job) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        return vkiopreviewjob->KIO::PreviewJob::addSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::addSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnAddSubjob(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_addsubjob_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_AddSubjob_Callback>(slot);
}

// Derived class handler implementation
bool KIO__PreviewJob_RemoveSubjob(KIO__PreviewJob* self, KJob* job) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        return vkiopreviewjob->removeSubjob(job);
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::removeSubjob called without a directly constructed type");
    }
}

// Base class handler implementation
bool KIO__PreviewJob_SuperRemoveSubjob(KIO__PreviewJob* self, KJob* job) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        return vkiopreviewjob->KIO::PreviewJob::removeSubjob(job);
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::removeSubjob called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnRemoveSubjob(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_removesubjob_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_RemoveSubjob_Callback>(slot);
}

// Derived class handler implementation
void KIO__PreviewJob_SlotInfoMessage(KIO__PreviewJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        vkiopreviewjob->slotInfoMessage(job, message_QString);
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::slotInfoMessage called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__PreviewJob_SuperSlotInfoMessage(KIO__PreviewJob* self, KJob* job, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->KIO::PreviewJob::slotInfoMessage(job, message_QString);
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::slotInfoMessage called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSlotInfoMessage(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_slotinfomessage_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SlotInfoMessage_Callback>(slot);
}

// Derived class handler implementation
bool KIO__PreviewJob_Event(KIO__PreviewJob* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KIO__PreviewJob_SuperEvent(KIO__PreviewJob* self, QEvent* event) {
    return self->KIO::PreviewJob::event(event);
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnEvent(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_event_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Event_Callback>(slot);
}

// Derived class handler implementation
bool KIO__PreviewJob_EventFilter(KIO__PreviewJob* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KIO__PreviewJob_SuperEventFilter(KIO__PreviewJob* self, QObject* watched, QEvent* event) {
    return self->KIO::PreviewJob::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnEventFilter(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_eventfilter_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KIO__PreviewJob_TimerEvent(KIO__PreviewJob* self, QTimerEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        vkiopreviewjob->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__PreviewJob_SuperTimerEvent(KIO__PreviewJob* self, QTimerEvent* event) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->KIO::PreviewJob::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnTimerEvent(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_timerevent_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__PreviewJob_ChildEvent(KIO__PreviewJob* self, QChildEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        vkiopreviewjob->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__PreviewJob_SuperChildEvent(KIO__PreviewJob* self, QChildEvent* event) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->KIO::PreviewJob::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnChildEvent(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_childevent_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__PreviewJob_CustomEvent(KIO__PreviewJob* self, QEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        vkiopreviewjob->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__PreviewJob_SuperCustomEvent(KIO__PreviewJob* self, QEvent* event) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->KIO::PreviewJob::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnCustomEvent(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_customevent_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KIO__PreviewJob_ConnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        vkiopreviewjob->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__PreviewJob_SuperConnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->KIO::PreviewJob::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnConnectNotify(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_connectnotify_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KIO__PreviewJob_DisconnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob) {
        vkiopreviewjob->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KIO::PreviewJob::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KIO__PreviewJob_SuperDisconnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->KIO::PreviewJob::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KIO::PreviewJob::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnDisconnectNotify(KIO__PreviewJob* self, intptr_t slot) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self))
        vkiopreviewjob->kio__previewjob_disconnectnotify_callback = reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
bool KIO__PreviewJob_HasSubjobs(const KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self))) {
        return vkiopreviewjob->VirtualKIOPreviewJob::hasSubjobs();
    } else
        qFatal("Error: Protected method KIO::PreviewJob::hasSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_list /* of KJob* */ KIO__PreviewJob_Subjobs(const KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self))) {
        const QList<KJob*>& _ret = vkiopreviewjob->VirtualKIOPreviewJob::subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method KIO::PreviewJob::subjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_ClearSubjobs(KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::clearSubjobs();
    } else
        qFatal("Error: Protected method KIO::PreviewJob::clearSubjobs called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_SetCapabilities(KIO__PreviewJob* self, int capabilities) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else
        qFatal("Error: Protected method KIO::PreviewJob::setCapabilities called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__PreviewJob_IsFinished(const KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self))) {
        return vkiopreviewjob->VirtualKIOPreviewJob::isFinished();
    } else
        qFatal("Error: Protected method KIO::PreviewJob::isFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_SetError(KIO__PreviewJob* self, int errorCode) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::setError(static_cast<int>(errorCode));
    } else
        qFatal("Error: Protected method KIO::PreviewJob::setError called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_SetErrorText(KIO__PreviewJob* self, const libqt_string errorText) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
        vkiopreviewjob->VirtualKIOPreviewJob::setErrorText(errorText_QString);
    } else
        qFatal("Error: Protected method KIO::PreviewJob::setErrorText called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_SetProcessedAmount(KIO__PreviewJob* self, int unit, unsigned long long amount) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::PreviewJob::setProcessedAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_SetTotalAmount(KIO__PreviewJob* self, int unit, unsigned long long amount) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else
        qFatal("Error: Protected method KIO::PreviewJob::setTotalAmount called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_SetProgressUnit(KIO__PreviewJob* self, int unit) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::setProgressUnit(static_cast<KJob::Unit>(unit));
    } else
        qFatal("Error: Protected method KIO::PreviewJob::setProgressUnit called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_SetPercent(KIO__PreviewJob* self, unsigned long percentage) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::setPercent(static_cast<unsigned long>(percentage));
    } else
        qFatal("Error: Protected method KIO::PreviewJob::setPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_EmitResult(KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::emitResult();
    } else
        qFatal("Error: Protected method KIO::PreviewJob::emitResult called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_EmitPercent(KIO__PreviewJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else
        qFatal("Error: Protected method KIO::PreviewJob::emitPercent called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_EmitSpeed(KIO__PreviewJob* self, unsigned long speed) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::emitSpeed(static_cast<unsigned long>(speed));
    } else
        qFatal("Error: Protected method KIO::PreviewJob::emitSpeed called without a directly constructed type");
}

// Derived class protected handler implementation
void KIO__PreviewJob_StartElapsedTimer(KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self)) {
        vkiopreviewjob->VirtualKIOPreviewJob::startElapsedTimer();
    } else
        qFatal("Error: Protected method KIO::PreviewJob::startElapsedTimer called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KIO__PreviewJob_Sender(const KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self))) {
        return vkiopreviewjob->VirtualKIOPreviewJob::sender();
    } else
        qFatal("Error: Protected method KIO::PreviewJob::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__PreviewJob_SenderSignalIndex(const KIO__PreviewJob* self) {
    if (auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self))) {
        return vkiopreviewjob->VirtualKIOPreviewJob::senderSignalIndex();
    } else
        qFatal("Error: Protected method KIO::PreviewJob::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KIO__PreviewJob_Receivers(const KIO__PreviewJob* self, const char* signal) {
    if (auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self))) {
        return vkiopreviewjob->VirtualKIOPreviewJob::receivers(signal);
    } else
        qFatal("Error: Protected method KIO::PreviewJob::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KIO__PreviewJob_IsSignalConnected(const KIO__PreviewJob* self, const QMetaMethod* signal) {
    if (auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self))) {
        return vkiopreviewjob->VirtualKIOPreviewJob::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KIO::PreviewJob::isSignalConnected called without a directly constructed type");
}

void KIO__PreviewJob_Delete(KIO__PreviewJob* self) {
    delete self;
}

KIO__PreviewJob* KIO_FilePreview(const KFileItemList* items, const QSize* size, const libqt_list /* of libqt_string */ enabledPlugins) {
    QList<QString>* enabledPlugins_QList = new QList<QString>();
    enabledPlugins_QList->reserve(enabledPlugins.len);
    libqt_string* enabledPlugins_arr = static_cast<libqt_string*>(enabledPlugins.data);
    for (size_t i = 0; i < enabledPlugins.len; ++i) {
        QString enabledPlugins_arr_i_QString = QString::fromUtf8(enabledPlugins_arr[i].data, enabledPlugins_arr[i].len);
        enabledPlugins_QList->push_back(enabledPlugins_arr_i_QString);
    }
    return KIO::filePreview(*items, *size, enabledPlugins_QList);
}
