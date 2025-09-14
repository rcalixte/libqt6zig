#include <KCompositeJob>
#include <KFileItem>
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__Job
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
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <previewjob.h>
#include "libpreviewjob.h"
#include "libpreviewjob.hxx"

KIO__PreviewJob* KIO__PreviewJob_new(const KFileItemList* items, const QSize* size) {
    return new VirtualKIOPreviewJob(*items, *size);
}

KIO__PreviewJob* KIO__PreviewJob_new2(const KFileItemList* items, const QSize* size, const libqt_list /* of libqt_string */ enabledPlugins) {
    QList<QString> enabledPlugins_QList;
    enabledPlugins_QList.reserve(enabledPlugins.len);
    libqt_string* enabledPlugins_arr = static_cast<libqt_string*>(enabledPlugins.data);
    for (size_t i = 0; i < enabledPlugins.len; ++i) {
        QString enabledPlugins_arr_i_QString = QString::fromUtf8(enabledPlugins_arr[i].data, enabledPlugins_arr[i].len);
        enabledPlugins_QList.push_back(enabledPlugins_arr_i_QString);
    }
    return new VirtualKIOPreviewJob(*items, *size, &enabledPlugins_QList);
}

QMetaObject* KIO__PreviewJob_MetaObject(const KIO__PreviewJob* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__PreviewJob_Metacast(KIO__PreviewJob* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__PreviewJob_Metacall(KIO__PreviewJob* self, int param1, int param2, void** param3) {
    auto* vkio__previewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkio__previewjob && vkio__previewjob->isVirtualKIOPreviewJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIOPreviewJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIO__PreviewJob_Tr(const char* s) {
    QString _ret = KIO::PreviewJob::tr(s);
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

libqt_list /* of KPluginMetaData* */ KIO__PreviewJob_AvailableThumbnailerPlugins() {
    QList<KPluginMetaData> _ret = KIO::PreviewJob::availableThumbnailerPlugins();
    // Convert QList<> from C++ memory to manually-managed C memory
    KPluginMetaData** _arr = static_cast<KPluginMetaData**>(malloc(sizeof(KPluginMetaData*) * (_ret.size() + 1)));
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

libqt_list /* of libqt_string */ KIO__PreviewJob_SupportedMimeTypes() {
    QList<QString> _ret = KIO::PreviewJob::supportedMimeTypes();
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

void KIO__PreviewJob_GotPreview(KIO__PreviewJob* self, const KFileItem* item, const QPixmap* preview) {
    self->gotPreview(*item, *preview);
}

void KIO__PreviewJob_Connect_GotPreview(KIO__PreviewJob* self, intptr_t slot) {
    void (*slotFunc)(KIO__PreviewJob*, KFileItem*, QPixmap*) = reinterpret_cast<void (*)(KIO__PreviewJob*, KFileItem*, QPixmap*)>(slot);
    KIO::PreviewJob::connect(self, &KIO::PreviewJob::gotPreview, [self, slotFunc](const KFileItem& item, const QPixmap& preview) {
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
    KIO::PreviewJob::connect(self, &KIO::PreviewJob::failed, [self, slotFunc](const KFileItem& item) {
        const KFileItem& item_ret = item;
        // Cast returned reference into pointer
        KFileItem* sigval1 = const_cast<KFileItem*>(&item_ret);
        slotFunc(self, sigval1);
    });
}

void KIO__PreviewJob_SlotResult(KIO__PreviewJob* self, KJob* job) {
    auto* vkio__previewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkio__previewjob && vkio__previewjob->isVirtualKIOPreviewJob) {
        vkio__previewjob->slotResult(job);
    }
}

void KIO__PreviewJob_SetDefaultDevicePixelRatio(double devicePixelRatio) {
    KIO::PreviewJob::setDefaultDevicePixelRatio(static_cast<qreal>(devicePixelRatio));
}

libqt_string KIO__PreviewJob_Tr2(const char* s, const char* c) {
    QString _ret = KIO::PreviewJob::tr(s, c);
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
    QString _ret = KIO::PreviewJob::tr(s, c, static_cast<int>(n));
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
int KIO__PreviewJob_QBaseMetacall(KIO__PreviewJob* self, int param1, int param2, void** param3) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Metacall_IsBase(true);
        return vkiopreviewjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIO::PreviewJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnMetacall(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Metacall_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseSlotResult(KIO__PreviewJob* self, KJob* job) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SlotResult_IsBase(true);
        vkiopreviewjob->slotResult(job);
    } else {
        ((VirtualKIOPreviewJob*)self)->slotResult(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSlotResult(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SlotResult_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SlotResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_Start(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->start();
    } else {
        self->KIO::PreviewJob::start();
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseStart(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Start_IsBase(true);
        vkiopreviewjob->start();
    } else {
        self->KIO::PreviewJob::start();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnStart(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Start_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Start_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_DoKill(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->doKill();
    } else {
        return ((VirtualKIOPreviewJob*)self)->doKill();
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseDoKill(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_DoKill_IsBase(true);
        return vkiopreviewjob->doKill();
    } else {
        return ((VirtualKIOPreviewJob*)self)->doKill();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnDoKill(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_DoKill_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_DoKill_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_DoSuspend(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->doSuspend();
    } else {
        return ((VirtualKIOPreviewJob*)self)->doSuspend();
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseDoSuspend(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_DoSuspend_IsBase(true);
        return vkiopreviewjob->doSuspend();
    } else {
        return ((VirtualKIOPreviewJob*)self)->doSuspend();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnDoSuspend(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_DoSuspend_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_DoSuspend_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_DoResume(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->doResume();
    } else {
        return ((VirtualKIOPreviewJob*)self)->doResume();
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseDoResume(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_DoResume_IsBase(true);
        return vkiopreviewjob->doResume();
    } else {
        return ((VirtualKIOPreviewJob*)self)->doResume();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnDoResume(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_DoResume_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_DoResume_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KIO__PreviewJob_ErrorString(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        QString _ret = vkiopreviewjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::PreviewJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string KIO__PreviewJob_QBaseErrorString(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_ErrorString_IsBase(true);
        QString _ret = vkiopreviewjob->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIO::PreviewJob::errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnErrorString(const KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_ErrorString_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_AddSubjob(KIO__PreviewJob* self, KJob* job) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->addSubjob(job);
    } else {
        return ((VirtualKIOPreviewJob*)self)->addSubjob(job);
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseAddSubjob(KIO__PreviewJob* self, KJob* job) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_AddSubjob_IsBase(true);
        return vkiopreviewjob->addSubjob(job);
    } else {
        return ((VirtualKIOPreviewJob*)self)->addSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnAddSubjob(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_AddSubjob_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_AddSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_RemoveSubjob(KIO__PreviewJob* self, KJob* job) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->removeSubjob(job);
    } else {
        return ((VirtualKIOPreviewJob*)self)->removeSubjob(job);
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseRemoveSubjob(KIO__PreviewJob* self, KJob* job) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_RemoveSubjob_IsBase(true);
        return vkiopreviewjob->removeSubjob(job);
    } else {
        return ((VirtualKIOPreviewJob*)self)->removeSubjob(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnRemoveSubjob(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_RemoveSubjob_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_RemoveSubjob_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_SlotInfoMessage(KIO__PreviewJob* self, KJob* job, const libqt_string message) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOPreviewJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseSlotInfoMessage(KIO__PreviewJob* self, KJob* job, const libqt_string message) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    QString message_QString = QString::fromUtf8(message.data, message.len);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SlotInfoMessage_IsBase(true);
        vkiopreviewjob->slotInfoMessage(job, message_QString);
    } else {
        ((VirtualKIOPreviewJob*)self)->slotInfoMessage(job, message_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSlotInfoMessage(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SlotInfoMessage_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SlotInfoMessage_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_Event(KIO__PreviewJob* self, QEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->event(event);
    } else {
        return self->KIO::PreviewJob::event(event);
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseEvent(KIO__PreviewJob* self, QEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Event_IsBase(true);
        return vkiopreviewjob->event(event);
    } else {
        return self->KIO::PreviewJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnEvent(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Event_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_EventFilter(KIO__PreviewJob* self, QObject* watched, QEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->eventFilter(watched, event);
    } else {
        return self->KIO::PreviewJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseEventFilter(KIO__PreviewJob* self, QObject* watched, QEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_EventFilter_IsBase(true);
        return vkiopreviewjob->eventFilter(watched, event);
    } else {
        return self->KIO::PreviewJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnEventFilter(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_EventFilter_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_TimerEvent(KIO__PreviewJob* self, QTimerEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->timerEvent(event);
    } else {
        ((VirtualKIOPreviewJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseTimerEvent(KIO__PreviewJob* self, QTimerEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_TimerEvent_IsBase(true);
        vkiopreviewjob->timerEvent(event);
    } else {
        ((VirtualKIOPreviewJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnTimerEvent(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_TimerEvent_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_ChildEvent(KIO__PreviewJob* self, QChildEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->childEvent(event);
    } else {
        ((VirtualKIOPreviewJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseChildEvent(KIO__PreviewJob* self, QChildEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_ChildEvent_IsBase(true);
        vkiopreviewjob->childEvent(event);
    } else {
        ((VirtualKIOPreviewJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnChildEvent(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_ChildEvent_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_CustomEvent(KIO__PreviewJob* self, QEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->customEvent(event);
    } else {
        ((VirtualKIOPreviewJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseCustomEvent(KIO__PreviewJob* self, QEvent* event) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_CustomEvent_IsBase(true);
        vkiopreviewjob->customEvent(event);
    } else {
        ((VirtualKIOPreviewJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnCustomEvent(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_CustomEvent_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_ConnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->connectNotify(*signal);
    } else {
        ((VirtualKIOPreviewJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseConnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_ConnectNotify_IsBase(true);
        vkiopreviewjob->connectNotify(*signal);
    } else {
        ((VirtualKIOPreviewJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnConnectNotify(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_ConnectNotify_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_DisconnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOPreviewJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseDisconnectNotify(KIO__PreviewJob* self, const QMetaMethod* signal) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_DisconnectNotify_IsBase(true);
        vkiopreviewjob->disconnectNotify(*signal);
    } else {
        ((VirtualKIOPreviewJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnDisconnectNotify(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_DisconnectNotify_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_HasSubjobs(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->hasSubjobs();
    } else {
        return ((VirtualKIOPreviewJob*)self)->hasSubjobs();
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseHasSubjobs(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_HasSubjobs_IsBase(true);
        return vkiopreviewjob->hasSubjobs();
    } else {
        return ((VirtualKIOPreviewJob*)self)->hasSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnHasSubjobs(const KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_HasSubjobs_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_HasSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of KJob* */ KIO__PreviewJob_Subjobs(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        const QList<KJob*>& _ret = vkiopreviewjob->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        const QList<KJob*>& _ret = ((VirtualKIOPreviewJob*)self)->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of KJob* */ KIO__PreviewJob_QBaseSubjobs(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Subjobs_IsBase(true);
        const QList<KJob*>& _ret = vkiopreviewjob->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        const QList<KJob*>& _ret = ((VirtualKIOPreviewJob*)self)->subjobs();
        // Convert QList<> from C++ memory to manually-managed C memory
        KJob** _arr = static_cast<KJob**>(malloc(sizeof(KJob*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSubjobs(const KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Subjobs_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Subjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_ClearSubjobs(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->clearSubjobs();
    } else {
        ((VirtualKIOPreviewJob*)self)->clearSubjobs();
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseClearSubjobs(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_ClearSubjobs_IsBase(true);
        vkiopreviewjob->clearSubjobs();
    } else {
        ((VirtualKIOPreviewJob*)self)->clearSubjobs();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnClearSubjobs(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_ClearSubjobs_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_ClearSubjobs_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_SetCapabilities(KIO__PreviewJob* self, int capabilities) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOPreviewJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseSetCapabilities(KIO__PreviewJob* self, int capabilities) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetCapabilities_IsBase(true);
        vkiopreviewjob->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    } else {
        ((VirtualKIOPreviewJob*)self)->setCapabilities(static_cast<QFlags<KJob::Capability>>(capabilities));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSetCapabilities(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetCapabilities_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SetCapabilities_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_IsFinished(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->isFinished();
    } else {
        return ((VirtualKIOPreviewJob*)self)->isFinished();
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseIsFinished(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_IsFinished_IsBase(true);
        return vkiopreviewjob->isFinished();
    } else {
        return ((VirtualKIOPreviewJob*)self)->isFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnIsFinished(const KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_IsFinished_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_IsFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_SetError(KIO__PreviewJob* self, int errorCode) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOPreviewJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseSetError(KIO__PreviewJob* self, int errorCode) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetError_IsBase(true);
        vkiopreviewjob->setError(static_cast<int>(errorCode));
    } else {
        ((VirtualKIOPreviewJob*)self)->setError(static_cast<int>(errorCode));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSetError(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetError_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SetError_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_SetErrorText(KIO__PreviewJob* self, const libqt_string errorText) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOPreviewJob*)self)->setErrorText(errorText_QString);
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseSetErrorText(KIO__PreviewJob* self, const libqt_string errorText) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    QString errorText_QString = QString::fromUtf8(errorText.data, errorText.len);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetErrorText_IsBase(true);
        vkiopreviewjob->setErrorText(errorText_QString);
    } else {
        ((VirtualKIOPreviewJob*)self)->setErrorText(errorText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSetErrorText(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetErrorText_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SetErrorText_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_SetProcessedAmount(KIO__PreviewJob* self, int unit, unsigned long long amount) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOPreviewJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseSetProcessedAmount(KIO__PreviewJob* self, int unit, unsigned long long amount) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetProcessedAmount_IsBase(true);
        vkiopreviewjob->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOPreviewJob*)self)->setProcessedAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSetProcessedAmount(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetProcessedAmount_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SetProcessedAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_SetTotalAmount(KIO__PreviewJob* self, int unit, unsigned long long amount) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOPreviewJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseSetTotalAmount(KIO__PreviewJob* self, int unit, unsigned long long amount) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetTotalAmount_IsBase(true);
        vkiopreviewjob->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    } else {
        ((VirtualKIOPreviewJob*)self)->setTotalAmount(static_cast<KJob::Unit>(unit), static_cast<qulonglong>(amount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSetTotalAmount(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetTotalAmount_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SetTotalAmount_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_SetProgressUnit(KIO__PreviewJob* self, int unit) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOPreviewJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseSetProgressUnit(KIO__PreviewJob* self, int unit) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetProgressUnit_IsBase(true);
        vkiopreviewjob->setProgressUnit(static_cast<KJob::Unit>(unit));
    } else {
        ((VirtualKIOPreviewJob*)self)->setProgressUnit(static_cast<KJob::Unit>(unit));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSetProgressUnit(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetProgressUnit_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SetProgressUnit_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_SetPercent(KIO__PreviewJob* self, unsigned long percentage) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOPreviewJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseSetPercent(KIO__PreviewJob* self, unsigned long percentage) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetPercent_IsBase(true);
        vkiopreviewjob->setPercent(static_cast<unsigned long>(percentage));
    } else {
        ((VirtualKIOPreviewJob*)self)->setPercent(static_cast<unsigned long>(percentage));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSetPercent(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SetPercent_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SetPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_EmitResult(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->emitResult();
    } else {
        ((VirtualKIOPreviewJob*)self)->emitResult();
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseEmitResult(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_EmitResult_IsBase(true);
        vkiopreviewjob->emitResult();
    } else {
        ((VirtualKIOPreviewJob*)self)->emitResult();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnEmitResult(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_EmitResult_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_EmitResult_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_EmitPercent(KIO__PreviewJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOPreviewJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseEmitPercent(KIO__PreviewJob* self, unsigned long long processedAmount, unsigned long long totalAmount) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_EmitPercent_IsBase(true);
        vkiopreviewjob->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    } else {
        ((VirtualKIOPreviewJob*)self)->emitPercent(static_cast<qulonglong>(processedAmount), static_cast<qulonglong>(totalAmount));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnEmitPercent(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_EmitPercent_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_EmitPercent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_EmitSpeed(KIO__PreviewJob* self, unsigned long speed) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOPreviewJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseEmitSpeed(KIO__PreviewJob* self, unsigned long speed) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_EmitSpeed_IsBase(true);
        vkiopreviewjob->emitSpeed(static_cast<unsigned long>(speed));
    } else {
        ((VirtualKIOPreviewJob*)self)->emitSpeed(static_cast<unsigned long>(speed));
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnEmitSpeed(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_EmitSpeed_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_EmitSpeed_Callback>(slot));
    }
}

// Derived class handler implementation
void KIO__PreviewJob_StartElapsedTimer(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->startElapsedTimer();
    } else {
        ((VirtualKIOPreviewJob*)self)->startElapsedTimer();
    }
}

// Base class handler implementation
void KIO__PreviewJob_QBaseStartElapsedTimer(KIO__PreviewJob* self) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_StartElapsedTimer_IsBase(true);
        vkiopreviewjob->startElapsedTimer();
    } else {
        ((VirtualKIOPreviewJob*)self)->startElapsedTimer();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnStartElapsedTimer(KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = dynamic_cast<VirtualKIOPreviewJob*>(self);
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_StartElapsedTimer_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_StartElapsedTimer_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIO__PreviewJob_Sender(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->sender();
    } else {
        return ((VirtualKIOPreviewJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIO__PreviewJob_QBaseSender(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Sender_IsBase(true);
        return vkiopreviewjob->sender();
    } else {
        return ((VirtualKIOPreviewJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSender(const KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Sender_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__PreviewJob_SenderSignalIndex(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->senderSignalIndex();
    } else {
        return ((VirtualKIOPreviewJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIO__PreviewJob_QBaseSenderSignalIndex(const KIO__PreviewJob* self) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SenderSignalIndex_IsBase(true);
        return vkiopreviewjob->senderSignalIndex();
    } else {
        return ((VirtualKIOPreviewJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnSenderSignalIndex(const KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIO__PreviewJob_Receivers(const KIO__PreviewJob* self, const char* signal) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->receivers(signal);
    } else {
        return ((VirtualKIOPreviewJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIO__PreviewJob_QBaseReceivers(const KIO__PreviewJob* self, const char* signal) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Receivers_IsBase(true);
        return vkiopreviewjob->receivers(signal);
    } else {
        return ((VirtualKIOPreviewJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnReceivers(const KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_Receivers_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIO__PreviewJob_IsSignalConnected(const KIO__PreviewJob* self, const QMetaMethod* signal) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        return vkiopreviewjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOPreviewJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIO__PreviewJob_QBaseIsSignalConnected(const KIO__PreviewJob* self, const QMetaMethod* signal) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_IsSignalConnected_IsBase(true);
        return vkiopreviewjob->isSignalConnected(*signal);
    } else {
        return ((VirtualKIOPreviewJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__PreviewJob_OnIsSignalConnected(const KIO__PreviewJob* self, intptr_t slot) {
    auto* vkiopreviewjob = const_cast<VirtualKIOPreviewJob*>(dynamic_cast<const VirtualKIOPreviewJob*>(self));
    if (vkiopreviewjob && vkiopreviewjob->isVirtualKIOPreviewJob) {
        vkiopreviewjob->setKIO__PreviewJob_IsSignalConnected_Callback(reinterpret_cast<VirtualKIOPreviewJob::KIO__PreviewJob_IsSignalConnected_Callback>(slot));
    }
}

void KIO__PreviewJob_Delete(KIO__PreviewJob* self) {
    delete self;
}

KIO__PreviewJob* KIO_FilePreview(const KFileItemList* param1, const QSize* param2, const libqt_list /* of libqt_string */ param3) {
    QList<QString> param3_QList;
    param3_QList.reserve(param3.len);
    libqt_string* param3_arr = static_cast<libqt_string*>(param3.data);
    for (size_t i = 0; i < param3.len; ++i) {
        QString param3_arr_i_QString = QString::fromUtf8(param3_arr[i].data, param3_arr[i].len);
        param3_QList.push_back(param3_arr_i_QString);
    }
    return KIO::filePreview(*param1, *param2, &param3_QList);
}
