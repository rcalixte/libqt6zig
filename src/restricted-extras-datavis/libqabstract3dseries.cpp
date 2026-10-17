#include <QAbstract3DSeries>
#include <QColor>
#include <QLinearGradient>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQuaternion>
#include <QString>
#include <QVector3D>
#include <qabstract3dseries.h>
#include "libqabstract3dseries.h"
#include "libqabstract3dseries.hxx"

QMetaObject* QAbstract3DSeries_MetaObject(const QAbstract3DSeries* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstract3DSeries_Metacast(QAbstract3DSeries* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstract3DSeries_Metacall(QAbstract3DSeries* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstract3DSeries_Tr(const char* s) {
    auto _ret = QAbstract3DSeries::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QAbstract3DSeries_Type(const QAbstract3DSeries* self) {
    return static_cast<int>(self->type());
}

void QAbstract3DSeries_SetItemLabelFormat(QAbstract3DSeries* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->setItemLabelFormat(format_QString);
}

libqt_string QAbstract3DSeries_ItemLabelFormat(const QAbstract3DSeries* self) {
    auto _ret = self->itemLabelFormat();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstract3DSeries_SetVisible(QAbstract3DSeries* self, bool visible) {
    self->setVisible(visible);
}

bool QAbstract3DSeries_IsVisible(const QAbstract3DSeries* self) {
    return self->isVisible();
}

void QAbstract3DSeries_SetMesh(QAbstract3DSeries* self, int mesh) {
    self->setMesh(static_cast<QAbstract3DSeries::Mesh>(mesh));
}

int QAbstract3DSeries_Mesh(const QAbstract3DSeries* self) {
    return static_cast<int>(self->mesh());
}

void QAbstract3DSeries_SetMeshSmooth(QAbstract3DSeries* self, bool enable) {
    self->setMeshSmooth(enable);
}

bool QAbstract3DSeries_IsMeshSmooth(const QAbstract3DSeries* self) {
    return self->isMeshSmooth();
}

void QAbstract3DSeries_SetMeshRotation(QAbstract3DSeries* self, const QQuaternion* rotation) {
    self->setMeshRotation(*rotation);
}

QQuaternion* QAbstract3DSeries_MeshRotation(const QAbstract3DSeries* self) {
    return new QQuaternion(self->meshRotation());
}

void QAbstract3DSeries_SetMeshAxisAndAngle(QAbstract3DSeries* self, const QVector3D* axis, float angle) {
    self->setMeshAxisAndAngle(*axis, static_cast<float>(angle));
}

void QAbstract3DSeries_SetUserDefinedMesh(QAbstract3DSeries* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setUserDefinedMesh(fileName_QString);
}

libqt_string QAbstract3DSeries_UserDefinedMesh(const QAbstract3DSeries* self) {
    auto _ret = self->userDefinedMesh();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstract3DSeries_SetColorStyle(QAbstract3DSeries* self, int style) {
    self->setColorStyle(static_cast<Q3DTheme::ColorStyle>(style));
}

int QAbstract3DSeries_ColorStyle(const QAbstract3DSeries* self) {
    return static_cast<int>(self->colorStyle());
}

void QAbstract3DSeries_SetBaseColor(QAbstract3DSeries* self, const QColor* color) {
    self->setBaseColor(*color);
}

QColor* QAbstract3DSeries_BaseColor(const QAbstract3DSeries* self) {
    return new QColor(self->baseColor());
}

void QAbstract3DSeries_SetBaseGradient(QAbstract3DSeries* self, const QLinearGradient* gradient) {
    self->setBaseGradient(*gradient);
}

QLinearGradient* QAbstract3DSeries_BaseGradient(const QAbstract3DSeries* self) {
    return new QLinearGradient(self->baseGradient());
}

void QAbstract3DSeries_SetSingleHighlightColor(QAbstract3DSeries* self, const QColor* color) {
    self->setSingleHighlightColor(*color);
}

QColor* QAbstract3DSeries_SingleHighlightColor(const QAbstract3DSeries* self) {
    return new QColor(self->singleHighlightColor());
}

void QAbstract3DSeries_SetSingleHighlightGradient(QAbstract3DSeries* self, const QLinearGradient* gradient) {
    self->setSingleHighlightGradient(*gradient);
}

QLinearGradient* QAbstract3DSeries_SingleHighlightGradient(const QAbstract3DSeries* self) {
    return new QLinearGradient(self->singleHighlightGradient());
}

void QAbstract3DSeries_SetMultiHighlightColor(QAbstract3DSeries* self, const QColor* color) {
    self->setMultiHighlightColor(*color);
}

QColor* QAbstract3DSeries_MultiHighlightColor(const QAbstract3DSeries* self) {
    return new QColor(self->multiHighlightColor());
}

void QAbstract3DSeries_SetMultiHighlightGradient(QAbstract3DSeries* self, const QLinearGradient* gradient) {
    self->setMultiHighlightGradient(*gradient);
}

QLinearGradient* QAbstract3DSeries_MultiHighlightGradient(const QAbstract3DSeries* self) {
    return new QLinearGradient(self->multiHighlightGradient());
}

void QAbstract3DSeries_SetName(QAbstract3DSeries* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string QAbstract3DSeries_Name(const QAbstract3DSeries* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstract3DSeries_ItemLabel(const QAbstract3DSeries* self) {
    auto _ret = self->itemLabel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstract3DSeries_SetItemLabelVisible(QAbstract3DSeries* self, bool visible) {
    self->setItemLabelVisible(visible);
}

bool QAbstract3DSeries_IsItemLabelVisible(const QAbstract3DSeries* self) {
    return self->isItemLabelVisible();
}

void QAbstract3DSeries_ItemLabelFormatChanged(QAbstract3DSeries* self, const libqt_string format) {
    QString format_QString = QString::fromUtf8(format.data, format.len);
    self->itemLabelFormatChanged(format_QString);
}

void QAbstract3DSeries_Connect_ItemLabelFormatChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, const char*) = reinterpret_cast<void (*)(QAbstract3DSeries*, const char*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QString&)>(&QAbstract3DSeries::itemLabelFormatChanged),
                               [self, slotFunc](const QString& format) {
                                   const auto format_ret = format;
                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                   QByteArray format_b = format_ret.toUtf8();
                                   auto format_str_len = format_b.length();
                                   const char* format_str = static_cast<const char*>(malloc(format_str_len + 1));
                                   memcpy((void*)format_str, format_b.data(), format_str_len);
                                   ((char*)format_str)[format_str_len] = '\0';
                                   const char* sigval1 = format_str;
                                   slotFunc(self, sigval1);
                                   libqt_free(format_str);
                               });
}

void QAbstract3DSeries_VisibilityChanged(QAbstract3DSeries* self, bool visible) {
    self->visibilityChanged(visible);
}

void QAbstract3DSeries_Connect_VisibilityChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, bool) = reinterpret_cast<void (*)(QAbstract3DSeries*, bool)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(bool)>(&QAbstract3DSeries::visibilityChanged),
                               [self, slotFunc](bool visible) {
                                   bool sigval1 = visible;
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_MeshChanged(QAbstract3DSeries* self, int mesh) {
    self->meshChanged(static_cast<QAbstract3DSeries::Mesh>(mesh));
}

void QAbstract3DSeries_Connect_MeshChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, int) = reinterpret_cast<void (*)(QAbstract3DSeries*, int)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(QAbstract3DSeries::Mesh)>(&QAbstract3DSeries::meshChanged),
                               [self, slotFunc](QAbstract3DSeries::Mesh mesh) {
                                   int sigval1 = static_cast<int>(mesh);
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_MeshSmoothChanged(QAbstract3DSeries* self, bool enabled) {
    self->meshSmoothChanged(enabled);
}

void QAbstract3DSeries_Connect_MeshSmoothChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, bool) = reinterpret_cast<void (*)(QAbstract3DSeries*, bool)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(bool)>(&QAbstract3DSeries::meshSmoothChanged),
                               [self, slotFunc](bool enabled) {
                                   bool sigval1 = enabled;
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_MeshRotationChanged(QAbstract3DSeries* self, const QQuaternion* rotation) {
    self->meshRotationChanged(*rotation);
}

void QAbstract3DSeries_Connect_MeshRotationChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, QQuaternion*) = reinterpret_cast<void (*)(QAbstract3DSeries*, QQuaternion*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QQuaternion&)>(&QAbstract3DSeries::meshRotationChanged),
                               [self, slotFunc](const QQuaternion& rotation) {
                                   const QQuaternion& rotation_ret = rotation;
                                   // Cast returned reference into pointer
                                   QQuaternion* sigval1 = const_cast<QQuaternion*>(&rotation_ret);
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_UserDefinedMeshChanged(QAbstract3DSeries* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->userDefinedMeshChanged(fileName_QString);
}

void QAbstract3DSeries_Connect_UserDefinedMeshChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, const char*) = reinterpret_cast<void (*)(QAbstract3DSeries*, const char*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QString&)>(&QAbstract3DSeries::userDefinedMeshChanged),
                               [self, slotFunc](const QString& fileName) {
                                   const auto fileName_ret = fileName;
                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                   QByteArray fileName_b = fileName_ret.toUtf8();
                                   auto fileName_str_len = fileName_b.length();
                                   const char* fileName_str = static_cast<const char*>(malloc(fileName_str_len + 1));
                                   memcpy((void*)fileName_str, fileName_b.data(), fileName_str_len);
                                   ((char*)fileName_str)[fileName_str_len] = '\0';
                                   const char* sigval1 = fileName_str;
                                   slotFunc(self, sigval1);
                                   libqt_free(fileName_str);
                               });
}

void QAbstract3DSeries_ColorStyleChanged(QAbstract3DSeries* self, int style) {
    self->colorStyleChanged(static_cast<Q3DTheme::ColorStyle>(style));
}

void QAbstract3DSeries_Connect_ColorStyleChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, int) = reinterpret_cast<void (*)(QAbstract3DSeries*, int)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(Q3DTheme::ColorStyle)>(&QAbstract3DSeries::colorStyleChanged),
                               [self, slotFunc](Q3DTheme::ColorStyle style) {
                                   int sigval1 = static_cast<int>(style);
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_BaseColorChanged(QAbstract3DSeries* self, const QColor* color) {
    self->baseColorChanged(*color);
}

void QAbstract3DSeries_Connect_BaseColorChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, QColor*) = reinterpret_cast<void (*)(QAbstract3DSeries*, QColor*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QColor&)>(&QAbstract3DSeries::baseColorChanged),
                               [self, slotFunc](const QColor& color) {
                                   const QColor& color_ret = color;
                                   // Cast returned reference into pointer
                                   QColor* sigval1 = const_cast<QColor*>(&color_ret);
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_BaseGradientChanged(QAbstract3DSeries* self, const QLinearGradient* gradient) {
    self->baseGradientChanged(*gradient);
}

void QAbstract3DSeries_Connect_BaseGradientChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, QLinearGradient*) = reinterpret_cast<void (*)(QAbstract3DSeries*, QLinearGradient*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QLinearGradient&)>(&QAbstract3DSeries::baseGradientChanged),
                               [self, slotFunc](const QLinearGradient& gradient) {
                                   const QLinearGradient& gradient_ret = gradient;
                                   // Cast returned reference into pointer
                                   QLinearGradient* sigval1 = const_cast<QLinearGradient*>(&gradient_ret);
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_SingleHighlightColorChanged(QAbstract3DSeries* self, const QColor* color) {
    self->singleHighlightColorChanged(*color);
}

void QAbstract3DSeries_Connect_SingleHighlightColorChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, QColor*) = reinterpret_cast<void (*)(QAbstract3DSeries*, QColor*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QColor&)>(&QAbstract3DSeries::singleHighlightColorChanged),
                               [self, slotFunc](const QColor& color) {
                                   const QColor& color_ret = color;
                                   // Cast returned reference into pointer
                                   QColor* sigval1 = const_cast<QColor*>(&color_ret);
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_SingleHighlightGradientChanged(QAbstract3DSeries* self, const QLinearGradient* gradient) {
    self->singleHighlightGradientChanged(*gradient);
}

void QAbstract3DSeries_Connect_SingleHighlightGradientChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, QLinearGradient*) = reinterpret_cast<void (*)(QAbstract3DSeries*, QLinearGradient*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QLinearGradient&)>(&QAbstract3DSeries::singleHighlightGradientChanged),
                               [self, slotFunc](const QLinearGradient& gradient) {
                                   const QLinearGradient& gradient_ret = gradient;
                                   // Cast returned reference into pointer
                                   QLinearGradient* sigval1 = const_cast<QLinearGradient*>(&gradient_ret);
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_MultiHighlightColorChanged(QAbstract3DSeries* self, const QColor* color) {
    self->multiHighlightColorChanged(*color);
}

void QAbstract3DSeries_Connect_MultiHighlightColorChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, QColor*) = reinterpret_cast<void (*)(QAbstract3DSeries*, QColor*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QColor&)>(&QAbstract3DSeries::multiHighlightColorChanged),
                               [self, slotFunc](const QColor& color) {
                                   const QColor& color_ret = color;
                                   // Cast returned reference into pointer
                                   QColor* sigval1 = const_cast<QColor*>(&color_ret);
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_MultiHighlightGradientChanged(QAbstract3DSeries* self, const QLinearGradient* gradient) {
    self->multiHighlightGradientChanged(*gradient);
}

void QAbstract3DSeries_Connect_MultiHighlightGradientChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, QLinearGradient*) = reinterpret_cast<void (*)(QAbstract3DSeries*, QLinearGradient*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QLinearGradient&)>(&QAbstract3DSeries::multiHighlightGradientChanged),
                               [self, slotFunc](const QLinearGradient& gradient) {
                                   const QLinearGradient& gradient_ret = gradient;
                                   // Cast returned reference into pointer
                                   QLinearGradient* sigval1 = const_cast<QLinearGradient*>(&gradient_ret);
                                   slotFunc(self, sigval1);
                               });
}

void QAbstract3DSeries_NameChanged(QAbstract3DSeries* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->nameChanged(name_QString);
}

void QAbstract3DSeries_Connect_NameChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, const char*) = reinterpret_cast<void (*)(QAbstract3DSeries*, const char*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QString&)>(&QAbstract3DSeries::nameChanged),
                               [self, slotFunc](const QString& name) {
                                   const auto name_ret = name;
                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                   QByteArray name_b = name_ret.toUtf8();
                                   auto name_str_len = name_b.length();
                                   const char* name_str = static_cast<const char*>(malloc(name_str_len + 1));
                                   memcpy((void*)name_str, name_b.data(), name_str_len);
                                   ((char*)name_str)[name_str_len] = '\0';
                                   const char* sigval1 = name_str;
                                   slotFunc(self, sigval1);
                                   libqt_free(name_str);
                               });
}

void QAbstract3DSeries_ItemLabelChanged(QAbstract3DSeries* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->itemLabelChanged(label_QString);
}

void QAbstract3DSeries_Connect_ItemLabelChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, const char*) = reinterpret_cast<void (*)(QAbstract3DSeries*, const char*)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(const QString&)>(&QAbstract3DSeries::itemLabelChanged),
                               [self, slotFunc](const QString& label) {
                                   const auto label_ret = label;
                                   // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                   QByteArray label_b = label_ret.toUtf8();
                                   auto label_str_len = label_b.length();
                                   const char* label_str = static_cast<const char*>(malloc(label_str_len + 1));
                                   memcpy((void*)label_str, label_b.data(), label_str_len);
                                   ((char*)label_str)[label_str_len] = '\0';
                                   const char* sigval1 = label_str;
                                   slotFunc(self, sigval1);
                                   libqt_free(label_str);
                               });
}

void QAbstract3DSeries_ItemLabelVisibilityChanged(QAbstract3DSeries* self, bool visible) {
    self->itemLabelVisibilityChanged(visible);
}

void QAbstract3DSeries_Connect_ItemLabelVisibilityChanged(QAbstract3DSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DSeries*, bool) = reinterpret_cast<void (*)(QAbstract3DSeries*, bool)>(slot);
    QAbstract3DSeries::connect(self,
                               static_cast<void (QAbstract3DSeries::*)(bool)>(&QAbstract3DSeries::itemLabelVisibilityChanged),
                               [self, slotFunc](bool visible) {
                                   bool sigval1 = visible;
                                   slotFunc(self, sigval1);
                               });
}

libqt_string QAbstract3DSeries_Tr2(const char* s, const char* c) {
    auto _ret = QAbstract3DSeries::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstract3DSeries_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstract3DSeries::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstract3DSeries_Delete(QAbstract3DSeries* self) {
    delete self;
}
