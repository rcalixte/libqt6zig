#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__CopyJob
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileUndoManager
#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__FileUndoManager__UiInterface
#include <KIO/Job>
#include <QDateTime>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWidget>
#include <fileundomanager.h>
#include "libfileundomanager.h"
#include "libfileundomanager.hxx"

QMetaObject* KIO__FileUndoManager_MetaObject(const KIO__FileUndoManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIO__FileUndoManager_Metacast(KIO__FileUndoManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIO__FileUndoManager_Metacall(KIO__FileUndoManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KIO__FileUndoManager_Tr(const char* s) {
    QString _ret = KIO::FileUndoManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIO__FileUndoManager* KIO__FileUndoManager_Self() {
    return KIO::FileUndoManager::self();
}

void KIO__FileUndoManager_SetUiInterface(KIO__FileUndoManager* self, KIO__FileUndoManager__UiInterface* ui) {
    self->setUiInterface(ui);
}

KIO__FileUndoManager__UiInterface* KIO__FileUndoManager_UiInterface(const KIO__FileUndoManager* self) {
    return self->uiInterface();
}

void KIO__FileUndoManager_RecordJob(KIO__FileUndoManager* self, int op, const libqt_list /* of QUrl* */ src, const QUrl* dst, KIO__Job* job) {
    QList<QUrl> src_QList;
    src_QList.reserve(src.len);
    QUrl** src_arr = static_cast<QUrl**>(src.data);
    for (size_t i = 0; i < src.len; ++i) {
        src_QList.push_back(*(src_arr[i]));
    }
    self->recordJob(static_cast<KIO::FileUndoManager::CommandType>(op), src_QList, *dst, job);
}

void KIO__FileUndoManager_RecordCopyJob(KIO__FileUndoManager* self, KIO__CopyJob* copyJob) {
    self->recordCopyJob(copyJob);
}

bool KIO__FileUndoManager_IsUndoAvailable(const KIO__FileUndoManager* self) {
    return self->isUndoAvailable();
}

libqt_string KIO__FileUndoManager_UndoText(const KIO__FileUndoManager* self) {
    QString _ret = self->undoText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

unsigned long long KIO__FileUndoManager_NewCommandSerialNumber(KIO__FileUndoManager* self) {
    return static_cast<unsigned long long>(self->newCommandSerialNumber());
}

unsigned long long KIO__FileUndoManager_CurrentCommandSerialNumber(const KIO__FileUndoManager* self) {
    return static_cast<unsigned long long>(self->currentCommandSerialNumber());
}

void KIO__FileUndoManager_Undo(KIO__FileUndoManager* self) {
    self->undo();
}

void KIO__FileUndoManager_UndoAvailable(KIO__FileUndoManager* self, bool avail) {
    self->undoAvailable(avail);
}

void KIO__FileUndoManager_Connect_UndoAvailable(KIO__FileUndoManager* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileUndoManager*, bool) = reinterpret_cast<void (*)(KIO__FileUndoManager*, bool)>(slot);
    KIO::FileUndoManager::connect(self, &KIO::FileUndoManager::undoAvailable, [self, slotFunc](bool avail) {
        bool sigval1 = avail;
        slotFunc(self, sigval1);
    });
}

void KIO__FileUndoManager_UndoTextChanged(KIO__FileUndoManager* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->undoTextChanged(text_QString);
}

void KIO__FileUndoManager_Connect_UndoTextChanged(KIO__FileUndoManager* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileUndoManager*, const char*) = reinterpret_cast<void (*)(KIO__FileUndoManager*, const char*)>(slot);
    KIO::FileUndoManager::connect(self, &KIO::FileUndoManager::undoTextChanged, [self, slotFunc](const QString& text) {
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

void KIO__FileUndoManager_UndoJobFinished(KIO__FileUndoManager* self) {
    self->undoJobFinished();
}

void KIO__FileUndoManager_Connect_UndoJobFinished(KIO__FileUndoManager* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileUndoManager*) = reinterpret_cast<void (*)(KIO__FileUndoManager*)>(slot);
    KIO::FileUndoManager::connect(self, &KIO::FileUndoManager::undoJobFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KIO__FileUndoManager_JobRecordingStarted(KIO__FileUndoManager* self, int op) {
    self->jobRecordingStarted(static_cast<KIO::FileUndoManager::CommandType>(op));
}

void KIO__FileUndoManager_Connect_JobRecordingStarted(KIO__FileUndoManager* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileUndoManager*, int) = reinterpret_cast<void (*)(KIO__FileUndoManager*, int)>(slot);
    KIO::FileUndoManager::connect(self, &KIO::FileUndoManager::jobRecordingStarted, [self, slotFunc](KIO::FileUndoManager::CommandType op) {
        int sigval1 = static_cast<int>(op);
        slotFunc(self, sigval1);
    });
}

void KIO__FileUndoManager_JobRecordingFinished(KIO__FileUndoManager* self, int op) {
    self->jobRecordingFinished(static_cast<KIO::FileUndoManager::CommandType>(op));
}

void KIO__FileUndoManager_Connect_JobRecordingFinished(KIO__FileUndoManager* self, intptr_t slot) {
    void (*slotFunc)(KIO__FileUndoManager*, int) = reinterpret_cast<void (*)(KIO__FileUndoManager*, int)>(slot);
    KIO::FileUndoManager::connect(self, &KIO::FileUndoManager::jobRecordingFinished, [self, slotFunc](KIO::FileUndoManager::CommandType op) {
        int sigval1 = static_cast<int>(op);
        slotFunc(self, sigval1);
    });
}

libqt_string KIO__FileUndoManager_Tr2(const char* s, const char* c) {
    QString _ret = KIO::FileUndoManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIO__FileUndoManager_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIO::FileUndoManager::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIO__FileUndoManager__UiInterface* KIO__FileUndoManager__UiInterface_new() {
    return new VirtualKIOFileUndoManagerUiInterface();
}

void KIO__FileUndoManager__UiInterface_SetShowProgressInfo(KIO__FileUndoManager__UiInterface* self, bool b) {
    self->setShowProgressInfo(b);
}

bool KIO__FileUndoManager__UiInterface_ShowProgressInfo(const KIO__FileUndoManager__UiInterface* self) {
    return self->showProgressInfo();
}

void KIO__FileUndoManager__UiInterface_SetParentWidget(KIO__FileUndoManager__UiInterface* self, QWidget* parentWidget) {
    self->setParentWidget(parentWidget);
}

QWidget* KIO__FileUndoManager__UiInterface_ParentWidget(const KIO__FileUndoManager__UiInterface* self) {
    return self->parentWidget();
}

void KIO__FileUndoManager__UiInterface_JobError(KIO__FileUndoManager__UiInterface* self, KIO__Job* job) {
    auto* vkio__fileundomanager__uiinterface = dynamic_cast<VirtualKIOFileUndoManagerUiInterface*>(self);
    if (vkio__fileundomanager__uiinterface && vkio__fileundomanager__uiinterface->isVirtualKIOFileUndoManagerUiInterface) {
        self->jobError(job);
    } else {
        ((VirtualKIOFileUndoManagerUiInterface*)self)->jobError(job);
    }
}

bool KIO__FileUndoManager__UiInterface_CopiedFileWasModified(KIO__FileUndoManager__UiInterface* self, const QUrl* src, const QUrl* dest, const QDateTime* srcTime, const QDateTime* destTime) {
    auto* vkio__fileundomanager__uiinterface = dynamic_cast<VirtualKIOFileUndoManagerUiInterface*>(self);
    if (vkio__fileundomanager__uiinterface && vkio__fileundomanager__uiinterface->isVirtualKIOFileUndoManagerUiInterface) {
        return self->copiedFileWasModified(*src, *dest, *srcTime, *destTime);
    } else {
        return ((VirtualKIOFileUndoManagerUiInterface*)self)->copiedFileWasModified(*src, *dest, *srcTime, *destTime);
    }
}

void KIO__FileUndoManager__UiInterface_VirtualHook(KIO__FileUndoManager__UiInterface* self, int id, void* data) {
    auto* vkio__fileundomanager__uiinterface = dynamic_cast<VirtualKIOFileUndoManagerUiInterface*>(self);
    if (vkio__fileundomanager__uiinterface && vkio__fileundomanager__uiinterface->isVirtualKIOFileUndoManagerUiInterface) {
        self->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKIOFileUndoManagerUiInterface*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KIO__FileUndoManager__UiInterface_QBaseJobError(KIO__FileUndoManager__UiInterface* self, KIO__Job* job) {
    auto* vkiofileundomanageruiinterface = dynamic_cast<VirtualKIOFileUndoManagerUiInterface*>(self);
    if (vkiofileundomanageruiinterface && vkiofileundomanageruiinterface->isVirtualKIOFileUndoManagerUiInterface) {
        vkiofileundomanageruiinterface->setKIO__FileUndoManager__UiInterface_JobError_IsBase(true);
        vkiofileundomanageruiinterface->jobError(job);
    } else {
        self->KIO::FileUndoManager::UiInterface::jobError(job);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FileUndoManager__UiInterface_OnJobError(KIO__FileUndoManager__UiInterface* self, intptr_t slot) {
    auto* vkiofileundomanageruiinterface = dynamic_cast<VirtualKIOFileUndoManagerUiInterface*>(self);
    if (vkiofileundomanageruiinterface && vkiofileundomanageruiinterface->isVirtualKIOFileUndoManagerUiInterface) {
        vkiofileundomanageruiinterface->setKIO__FileUndoManager__UiInterface_JobError_Callback(reinterpret_cast<VirtualKIOFileUndoManagerUiInterface::KIO__FileUndoManager__UiInterface_JobError_Callback>(slot));
    }
}

// Base class handler implementation
bool KIO__FileUndoManager__UiInterface_QBaseCopiedFileWasModified(KIO__FileUndoManager__UiInterface* self, const QUrl* src, const QUrl* dest, const QDateTime* srcTime, const QDateTime* destTime) {
    auto* vkiofileundomanageruiinterface = dynamic_cast<VirtualKIOFileUndoManagerUiInterface*>(self);
    if (vkiofileundomanageruiinterface && vkiofileundomanageruiinterface->isVirtualKIOFileUndoManagerUiInterface) {
        vkiofileundomanageruiinterface->setKIO__FileUndoManager__UiInterface_CopiedFileWasModified_IsBase(true);
        return vkiofileundomanageruiinterface->copiedFileWasModified(*src, *dest, *srcTime, *destTime);
    } else {
        return self->KIO::FileUndoManager::UiInterface::copiedFileWasModified(*src, *dest, *srcTime, *destTime);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FileUndoManager__UiInterface_OnCopiedFileWasModified(KIO__FileUndoManager__UiInterface* self, intptr_t slot) {
    auto* vkiofileundomanageruiinterface = dynamic_cast<VirtualKIOFileUndoManagerUiInterface*>(self);
    if (vkiofileundomanageruiinterface && vkiofileundomanageruiinterface->isVirtualKIOFileUndoManagerUiInterface) {
        vkiofileundomanageruiinterface->setKIO__FileUndoManager__UiInterface_CopiedFileWasModified_Callback(reinterpret_cast<VirtualKIOFileUndoManagerUiInterface::KIO__FileUndoManager__UiInterface_CopiedFileWasModified_Callback>(slot));
    }
}

// Base class handler implementation
void KIO__FileUndoManager__UiInterface_QBaseVirtualHook(KIO__FileUndoManager__UiInterface* self, int id, void* data) {
    auto* vkiofileundomanageruiinterface = dynamic_cast<VirtualKIOFileUndoManagerUiInterface*>(self);
    if (vkiofileundomanageruiinterface && vkiofileundomanageruiinterface->isVirtualKIOFileUndoManagerUiInterface) {
        vkiofileundomanageruiinterface->setKIO__FileUndoManager__UiInterface_VirtualHook_IsBase(true);
        vkiofileundomanageruiinterface->virtual_hook(static_cast<int>(id), data);
    } else {
        self->KIO::FileUndoManager::UiInterface::virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KIO__FileUndoManager__UiInterface_OnVirtualHook(KIO__FileUndoManager__UiInterface* self, intptr_t slot) {
    auto* vkiofileundomanageruiinterface = dynamic_cast<VirtualKIOFileUndoManagerUiInterface*>(self);
    if (vkiofileundomanageruiinterface && vkiofileundomanageruiinterface->isVirtualKIOFileUndoManagerUiInterface) {
        vkiofileundomanageruiinterface->setKIO__FileUndoManager__UiInterface_VirtualHook_Callback(reinterpret_cast<VirtualKIOFileUndoManagerUiInterface::KIO__FileUndoManager__UiInterface_VirtualHook_Callback>(slot));
    }
}

void KIO__FileUndoManager__UiInterface_Delete(KIO__FileUndoManager__UiInterface* self) {
    delete self;
}
