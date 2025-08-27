#include <KColorCollection>
#include <QColor>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kcolorcollection.h>
#include "libkcolorcollection.h"
#include "libkcolorcollection.hxx"

KColorCollection* KColorCollection_new() {
    return new KColorCollection();
}

KColorCollection* KColorCollection_new2(const KColorCollection* param1) {
    return new KColorCollection(*param1);
}

KColorCollection* KColorCollection_new3(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KColorCollection(name_QString);
}

libqt_list /* of libqt_string */ KColorCollection_InstalledCollections() {
    QList<QString> _ret = KColorCollection::installedCollections();
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

void KColorCollection_OperatorAssign(KColorCollection* self, const KColorCollection* param1) {
    self->operator=(*param1);
}

bool KColorCollection_Save(KColorCollection* self) {
    return self->save();
}

libqt_string KColorCollection_Description(const KColorCollection* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KColorCollection_SetDescription(KColorCollection* self, const libqt_string desc) {
    QString desc_QString = QString::fromUtf8(desc.data, desc.len);
    self->setDescription(desc_QString);
}

libqt_string KColorCollection_Name(const KColorCollection* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KColorCollection_SetName(KColorCollection* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

int KColorCollection_Editable(const KColorCollection* self) {
    return static_cast<int>(self->editable());
}

void KColorCollection_SetEditable(KColorCollection* self, int editable) {
    self->setEditable(static_cast<KColorCollection::Editable>(editable));
}

int KColorCollection_Count(const KColorCollection* self) {
    return self->count();
}

QColor* KColorCollection_Color(const KColorCollection* self, int index) {
    return new QColor(self->color(static_cast<int>(index)));
}

int KColorCollection_FindColor(const KColorCollection* self, const QColor* color) {
    return self->findColor(*color);
}

libqt_string KColorCollection_Name2(const KColorCollection* self, int index) {
    QString _ret = self->name(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KColorCollection_Name3(const KColorCollection* self, const QColor* color) {
    QString _ret = self->name(*color);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KColorCollection_AddColor(KColorCollection* self, const QColor* newColor) {
    return self->addColor(*newColor);
}

int KColorCollection_ChangeColor(KColorCollection* self, int index, const QColor* newColor) {
    return self->changeColor(static_cast<int>(index), *newColor);
}

int KColorCollection_ChangeColor2(KColorCollection* self, const QColor* oldColor, const QColor* newColor) {
    return self->changeColor(*oldColor, *newColor);
}

int KColorCollection_AddColor2(KColorCollection* self, const QColor* newColor, const libqt_string newColorName) {
    QString newColorName_QString = QString::fromUtf8(newColorName.data, newColorName.len);
    return self->addColor(*newColor, newColorName_QString);
}

int KColorCollection_ChangeColor3(KColorCollection* self, int index, const QColor* newColor, const libqt_string newColorName) {
    QString newColorName_QString = QString::fromUtf8(newColorName.data, newColorName.len);
    return self->changeColor(static_cast<int>(index), *newColor, newColorName_QString);
}

int KColorCollection_ChangeColor32(KColorCollection* self, const QColor* oldColor, const QColor* newColor, const libqt_string newColorName) {
    QString newColorName_QString = QString::fromUtf8(newColorName.data, newColorName.len);
    return self->changeColor(*oldColor, *newColor, newColorName_QString);
}

void KColorCollection_Delete(KColorCollection* self) {
    delete self;
}
