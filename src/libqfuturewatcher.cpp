#include <QEvent>
#include <QFutureWatcherBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qfuturewatcher.h>
#include "libqfuturewatcher.h"
#include "libqfuturewatcher.hxx"

QMetaObject* QFutureWatcherBase_MetaObject(const QFutureWatcherBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFutureWatcherBase_Metacast(QFutureWatcherBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFutureWatcherBase_Metacall(QFutureWatcherBase* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFutureWatcherBase_Tr(const char* s) {
    QString _ret = QFutureWatcherBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QFutureWatcherBase_ProgressValue(const QFutureWatcherBase* self) {
    return self->progressValue();
}

int QFutureWatcherBase_ProgressMinimum(const QFutureWatcherBase* self) {
    return self->progressMinimum();
}

int QFutureWatcherBase_ProgressMaximum(const QFutureWatcherBase* self) {
    return self->progressMaximum();
}

libqt_string QFutureWatcherBase_ProgressText(const QFutureWatcherBase* self) {
    QString _ret = self->progressText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QFutureWatcherBase_IsStarted(const QFutureWatcherBase* self) {
    return self->isStarted();
}

bool QFutureWatcherBase_IsFinished(const QFutureWatcherBase* self) {
    return self->isFinished();
}

bool QFutureWatcherBase_IsRunning(const QFutureWatcherBase* self) {
    return self->isRunning();
}

bool QFutureWatcherBase_IsCanceled(const QFutureWatcherBase* self) {
    return self->isCanceled();
}

bool QFutureWatcherBase_IsPaused(const QFutureWatcherBase* self) {
    return self->isPaused();
}

bool QFutureWatcherBase_IsSuspending(const QFutureWatcherBase* self) {
    return self->isSuspending();
}

bool QFutureWatcherBase_IsSuspended(const QFutureWatcherBase* self) {
    return self->isSuspended();
}

void QFutureWatcherBase_WaitForFinished(QFutureWatcherBase* self) {
    self->waitForFinished();
}

void QFutureWatcherBase_SetPendingResultsLimit(QFutureWatcherBase* self, int limit) {
    self->setPendingResultsLimit(static_cast<int>(limit));
}

bool QFutureWatcherBase_Event(QFutureWatcherBase* self, QEvent* event) {
    return self->event(event);
}

void QFutureWatcherBase_Started(QFutureWatcherBase* self) {
    self->started();
}

void QFutureWatcherBase_Connect_Started(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*) = reinterpret_cast<void (*)(QFutureWatcherBase*)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::started, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QFutureWatcherBase_Finished(QFutureWatcherBase* self) {
    self->finished();
}

void QFutureWatcherBase_Connect_Finished(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*) = reinterpret_cast<void (*)(QFutureWatcherBase*)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QFutureWatcherBase_Canceled(QFutureWatcherBase* self) {
    self->canceled();
}

void QFutureWatcherBase_Connect_Canceled(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*) = reinterpret_cast<void (*)(QFutureWatcherBase*)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::canceled, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QFutureWatcherBase_Paused(QFutureWatcherBase* self) {
    self->paused();
}

void QFutureWatcherBase_Connect_Paused(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*) = reinterpret_cast<void (*)(QFutureWatcherBase*)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::paused, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QFutureWatcherBase_Suspending(QFutureWatcherBase* self) {
    self->suspending();
}

void QFutureWatcherBase_Connect_Suspending(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*) = reinterpret_cast<void (*)(QFutureWatcherBase*)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::suspending, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QFutureWatcherBase_Suspended(QFutureWatcherBase* self) {
    self->suspended();
}

void QFutureWatcherBase_Connect_Suspended(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*) = reinterpret_cast<void (*)(QFutureWatcherBase*)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::suspended, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QFutureWatcherBase_Resumed(QFutureWatcherBase* self) {
    self->resumed();
}

void QFutureWatcherBase_Connect_Resumed(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*) = reinterpret_cast<void (*)(QFutureWatcherBase*)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::resumed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QFutureWatcherBase_ResultReadyAt(QFutureWatcherBase* self, int resultIndex) {
    self->resultReadyAt(static_cast<int>(resultIndex));
}

void QFutureWatcherBase_Connect_ResultReadyAt(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*, int) = reinterpret_cast<void (*)(QFutureWatcherBase*, int)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::resultReadyAt, [self, slotFunc](int resultIndex) {
        int sigval1 = resultIndex;
        slotFunc(self, sigval1);
    });
}

void QFutureWatcherBase_ResultsReadyAt(QFutureWatcherBase* self, int beginIndex, int endIndex) {
    self->resultsReadyAt(static_cast<int>(beginIndex), static_cast<int>(endIndex));
}

void QFutureWatcherBase_Connect_ResultsReadyAt(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*, int, int) = reinterpret_cast<void (*)(QFutureWatcherBase*, int, int)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::resultsReadyAt, [self, slotFunc](int beginIndex, int endIndex) {
        int sigval1 = beginIndex;
        int sigval2 = endIndex;
        slotFunc(self, sigval1, sigval2);
    });
}

void QFutureWatcherBase_ProgressRangeChanged(QFutureWatcherBase* self, int minimum, int maximum) {
    self->progressRangeChanged(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QFutureWatcherBase_Connect_ProgressRangeChanged(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*, int, int) = reinterpret_cast<void (*)(QFutureWatcherBase*, int, int)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::progressRangeChanged, [self, slotFunc](int minimum, int maximum) {
        int sigval1 = minimum;
        int sigval2 = maximum;
        slotFunc(self, sigval1, sigval2);
    });
}

void QFutureWatcherBase_ProgressValueChanged(QFutureWatcherBase* self, int progressValue) {
    self->progressValueChanged(static_cast<int>(progressValue));
}

void QFutureWatcherBase_Connect_ProgressValueChanged(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*, int) = reinterpret_cast<void (*)(QFutureWatcherBase*, int)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::progressValueChanged, [self, slotFunc](int progressValue) {
        int sigval1 = progressValue;
        slotFunc(self, sigval1);
    });
}

void QFutureWatcherBase_ProgressTextChanged(QFutureWatcherBase* self, const libqt_string progressText) {
    QString progressText_QString = QString::fromUtf8(progressText.data, progressText.len);
    self->progressTextChanged(progressText_QString);
}

void QFutureWatcherBase_Connect_ProgressTextChanged(QFutureWatcherBase* self, intptr_t slot) {
    void (*slotFunc)(QFutureWatcherBase*, const char*) = reinterpret_cast<void (*)(QFutureWatcherBase*, const char*)>(slot);
    QFutureWatcherBase::connect(self, &QFutureWatcherBase::progressTextChanged, [self, slotFunc](const QString& progressText) {
        const QString progressText_ret = progressText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray progressText_b = progressText_ret.toUtf8();
        const char* progressText_str = static_cast<const char*>(malloc(progressText_b.length() + 1));
        memcpy((void*)progressText_str, progressText_b.data(), progressText_b.length());
        ((char*)progressText_str)[progressText_b.length()] = '\0';
        const char* sigval1 = progressText_str;
        slotFunc(self, sigval1);
        libqt_free(progressText_str);
    });
}

void QFutureWatcherBase_Cancel(QFutureWatcherBase* self) {
    self->cancel();
}

void QFutureWatcherBase_SetSuspended(QFutureWatcherBase* self, bool suspendVal) {
    self->setSuspended(suspendVal);
}

void QFutureWatcherBase_Suspend(QFutureWatcherBase* self) {
    self->suspend();
}

void QFutureWatcherBase_Resume(QFutureWatcherBase* self) {
    self->resume();
}

void QFutureWatcherBase_ToggleSuspended(QFutureWatcherBase* self) {
    self->toggleSuspended();
}

void QFutureWatcherBase_SetPaused(QFutureWatcherBase* self, bool paused) {
    self->setPaused(paused);
}

void QFutureWatcherBase_Pause(QFutureWatcherBase* self) {
    self->pause();
}

void QFutureWatcherBase_TogglePaused(QFutureWatcherBase* self) {
    self->togglePaused();
}

libqt_string QFutureWatcherBase_Tr2(const char* s, const char* c) {
    QString _ret = QFutureWatcherBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFutureWatcherBase_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFutureWatcherBase::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFutureWatcherBase_Delete(QFutureWatcherBase* self) {
    delete self;
}
