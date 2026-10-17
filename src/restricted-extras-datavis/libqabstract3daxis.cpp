#include <QAbstract3DAxis>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <qabstract3daxis.h>
#include "libqabstract3daxis.h"
#include "libqabstract3daxis.hxx"

QMetaObject* QAbstract3DAxis_MetaObject(const QAbstract3DAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstract3DAxis_Metacast(QAbstract3DAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstract3DAxis_Metacall(QAbstract3DAxis* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstract3DAxis_Tr(const char* s) {
    auto _ret = QAbstract3DAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstract3DAxis_SetTitle(QAbstract3DAxis* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

libqt_string QAbstract3DAxis_Title(const QAbstract3DAxis* self) {
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

void QAbstract3DAxis_SetLabels(QAbstract3DAxis* self, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setLabels(labels_QList);
}

libqt_list /* of libqt_string */ QAbstract3DAxis_Labels(const QAbstract3DAxis* self) {
    QList<QString> _ret = self->labels();
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

int QAbstract3DAxis_Orientation(const QAbstract3DAxis* self) {
    return static_cast<int>(self->orientation());
}

int QAbstract3DAxis_Type(const QAbstract3DAxis* self) {
    return static_cast<int>(self->type());
}

void QAbstract3DAxis_SetMin(QAbstract3DAxis* self, float min) {
    self->setMin(static_cast<float>(min));
}

float QAbstract3DAxis_Min(const QAbstract3DAxis* self) {
    return self->min();
}

void QAbstract3DAxis_SetMax(QAbstract3DAxis* self, float max) {
    self->setMax(static_cast<float>(max));
}

float QAbstract3DAxis_Max(const QAbstract3DAxis* self) {
    return self->max();
}

void QAbstract3DAxis_SetAutoAdjustRange(QAbstract3DAxis* self, bool autoAdjust) {
    self->setAutoAdjustRange(autoAdjust);
}

bool QAbstract3DAxis_IsAutoAdjustRange(const QAbstract3DAxis* self) {
    return self->isAutoAdjustRange();
}

void QAbstract3DAxis_SetRange(QAbstract3DAxis* self, float min, float max) {
    self->setRange(static_cast<float>(min), static_cast<float>(max));
}

void QAbstract3DAxis_SetLabelAutoRotation(QAbstract3DAxis* self, float angle) {
    self->setLabelAutoRotation(static_cast<float>(angle));
}

float QAbstract3DAxis_LabelAutoRotation(const QAbstract3DAxis* self) {
    return self->labelAutoRotation();
}

void QAbstract3DAxis_SetTitleVisible(QAbstract3DAxis* self, bool visible) {
    self->setTitleVisible(visible);
}

bool QAbstract3DAxis_IsTitleVisible(const QAbstract3DAxis* self) {
    return self->isTitleVisible();
}

void QAbstract3DAxis_SetTitleFixed(QAbstract3DAxis* self, bool fixed) {
    self->setTitleFixed(fixed);
}

bool QAbstract3DAxis_IsTitleFixed(const QAbstract3DAxis* self) {
    return self->isTitleFixed();
}

void QAbstract3DAxis_TitleChanged(QAbstract3DAxis* self, const libqt_string newTitle) {
    QString newTitle_QString = QString::fromUtf8(newTitle.data, newTitle.len);
    self->titleChanged(newTitle_QString);
}

void QAbstract3DAxis_Connect_TitleChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*, const char*) = reinterpret_cast<void (*)(QAbstract3DAxis*, const char*)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)(const QString&)>(&QAbstract3DAxis::titleChanged),
                             [self, slotFunc](const QString& newTitle) {
                                 const auto newTitle_ret = newTitle;
                                 // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                 QByteArray newTitle_b = newTitle_ret.toUtf8();
                                 auto newTitle_str_len = newTitle_b.length();
                                 const char* newTitle_str = static_cast<const char*>(malloc(newTitle_str_len + 1));
                                 memcpy((void*)newTitle_str, newTitle_b.data(), newTitle_str_len);
                                 ((char*)newTitle_str)[newTitle_str_len] = '\0';
                                 const char* sigval1 = newTitle_str;
                                 slotFunc(self, sigval1);
                                 libqt_free(newTitle_str);
                             });
}

void QAbstract3DAxis_LabelsChanged(QAbstract3DAxis* self) {
    self->labelsChanged();
}

void QAbstract3DAxis_Connect_LabelsChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*) = reinterpret_cast<void (*)(QAbstract3DAxis*)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)()>(&QAbstract3DAxis::labelsChanged),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void QAbstract3DAxis_OrientationChanged(QAbstract3DAxis* self, int orientation) {
    self->orientationChanged(static_cast<QAbstract3DAxis::AxisOrientation>(orientation));
}

void QAbstract3DAxis_Connect_OrientationChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*, int) = reinterpret_cast<void (*)(QAbstract3DAxis*, int)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)(QAbstract3DAxis::AxisOrientation)>(&QAbstract3DAxis::orientationChanged),
                             [self, slotFunc](QAbstract3DAxis::AxisOrientation orientation) {
                                 int sigval1 = static_cast<int>(orientation);
                                 slotFunc(self, sigval1);
                             });
}

void QAbstract3DAxis_MinChanged(QAbstract3DAxis* self, float value) {
    self->minChanged(static_cast<float>(value));
}

void QAbstract3DAxis_Connect_MinChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*, float) = reinterpret_cast<void (*)(QAbstract3DAxis*, float)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)(float)>(&QAbstract3DAxis::minChanged),
                             [self, slotFunc](float value) {
                                 float sigval1 = value;
                                 slotFunc(self, sigval1);
                             });
}

void QAbstract3DAxis_MaxChanged(QAbstract3DAxis* self, float value) {
    self->maxChanged(static_cast<float>(value));
}

void QAbstract3DAxis_Connect_MaxChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*, float) = reinterpret_cast<void (*)(QAbstract3DAxis*, float)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)(float)>(&QAbstract3DAxis::maxChanged),
                             [self, slotFunc](float value) {
                                 float sigval1 = value;
                                 slotFunc(self, sigval1);
                             });
}

void QAbstract3DAxis_RangeChanged(QAbstract3DAxis* self, float min, float max) {
    self->rangeChanged(static_cast<float>(min), static_cast<float>(max));
}

void QAbstract3DAxis_Connect_RangeChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*, float, float) = reinterpret_cast<void (*)(QAbstract3DAxis*, float, float)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)(float, float)>(&QAbstract3DAxis::rangeChanged),
                             [self, slotFunc](float min, float max) {
                                 float sigval1 = min;
                                 float sigval2 = max;
                                 slotFunc(self, sigval1, sigval2);
                             });
}

void QAbstract3DAxis_AutoAdjustRangeChanged(QAbstract3DAxis* self, bool autoAdjust) {
    self->autoAdjustRangeChanged(autoAdjust);
}

void QAbstract3DAxis_Connect_AutoAdjustRangeChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*, bool) = reinterpret_cast<void (*)(QAbstract3DAxis*, bool)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)(bool)>(&QAbstract3DAxis::autoAdjustRangeChanged),
                             [self, slotFunc](bool autoAdjust) {
                                 bool sigval1 = autoAdjust;
                                 slotFunc(self, sigval1);
                             });
}

void QAbstract3DAxis_LabelAutoRotationChanged(QAbstract3DAxis* self, float angle) {
    self->labelAutoRotationChanged(static_cast<float>(angle));
}

void QAbstract3DAxis_Connect_LabelAutoRotationChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*, float) = reinterpret_cast<void (*)(QAbstract3DAxis*, float)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)(float)>(&QAbstract3DAxis::labelAutoRotationChanged),
                             [self, slotFunc](float angle) {
                                 float sigval1 = angle;
                                 slotFunc(self, sigval1);
                             });
}

void QAbstract3DAxis_TitleVisibilityChanged(QAbstract3DAxis* self, bool visible) {
    self->titleVisibilityChanged(visible);
}

void QAbstract3DAxis_Connect_TitleVisibilityChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*, bool) = reinterpret_cast<void (*)(QAbstract3DAxis*, bool)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)(bool)>(&QAbstract3DAxis::titleVisibilityChanged),
                             [self, slotFunc](bool visible) {
                                 bool sigval1 = visible;
                                 slotFunc(self, sigval1);
                             });
}

void QAbstract3DAxis_TitleFixedChanged(QAbstract3DAxis* self, bool fixed) {
    self->titleFixedChanged(fixed);
}

void QAbstract3DAxis_Connect_TitleFixedChanged(QAbstract3DAxis* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DAxis*, bool) = reinterpret_cast<void (*)(QAbstract3DAxis*, bool)>(slot);
    QAbstract3DAxis::connect(self,
                             static_cast<void (QAbstract3DAxis::*)(bool)>(&QAbstract3DAxis::titleFixedChanged),
                             [self, slotFunc](bool fixed) {
                                 bool sigval1 = fixed;
                                 slotFunc(self, sigval1);
                             });
}

libqt_string QAbstract3DAxis_Tr2(const char* s, const char* c) {
    auto _ret = QAbstract3DAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstract3DAxis_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstract3DAxis::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstract3DAxis_Delete(QAbstract3DAxis* self) {
    delete self;
}
