#include <QIcon>
#include <QIconEngine>
#include <QList>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWindow>
#include <qicon.h>
#include "libqicon.h"
#include "libqicon.hxx"

QIcon* QIcon_new() {
    return new QIcon();
}

QIcon* QIcon_new2(const QPixmap* pixmap) {
    return new QIcon(*pixmap);
}

QIcon* QIcon_new3(const QIcon* other) {
    return new QIcon(*other);
}

QIcon* QIcon_new4(const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new QIcon(fileName_QString);
}

QIcon* QIcon_new5(QIconEngine* engine) {
    return new QIcon(engine);
}

void QIcon_OperatorAssign(QIcon* self, const QIcon* other) {
    self->operator=(*other);
}

void QIcon_Swap(QIcon* self, QIcon* other) {
    self->swap(*other);
}

QVariant* QIcon_ToQVariant(const QIcon* self) {
    return new QVariant(self->operator QVariant());
}

QPixmap* QIcon_Pixmap(const QIcon* self, const QSize* size) {
    return new QPixmap(self->pixmap(*size));
}

QPixmap* QIcon_Pixmap2(const QIcon* self, int w, int h) {
    return new QPixmap(self->pixmap(static_cast<int>(w), static_cast<int>(h)));
}

QPixmap* QIcon_Pixmap3(const QIcon* self, int extent) {
    return new QPixmap(self->pixmap(static_cast<int>(extent)));
}

QPixmap* QIcon_Pixmap4(const QIcon* self, const QSize* size, double devicePixelRatio) {
    return new QPixmap(self->pixmap(*size, static_cast<qreal>(devicePixelRatio)));
}

QPixmap* QIcon_Pixmap5(const QIcon* self, QWindow* window, const QSize* size) {
    return new QPixmap(self->pixmap(window, *size));
}

QSize* QIcon_ActualSize(const QIcon* self, const QSize* size) {
    return new QSize(self->actualSize(*size));
}

QSize* QIcon_ActualSize2(const QIcon* self, QWindow* window, const QSize* size) {
    return new QSize(self->actualSize(window, *size));
}

libqt_string QIcon_Name(const QIcon* self) {
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

void QIcon_Paint(const QIcon* self, QPainter* painter, const QRect* rect) {
    self->paint(painter, *rect);
}

void QIcon_Paint2(const QIcon* self, QPainter* painter, int x, int y, int w, int h) {
    self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

bool QIcon_IsNull(const QIcon* self) {
    return self->isNull();
}

bool QIcon_IsDetached(const QIcon* self) {
    return self->isDetached();
}

void QIcon_Detach(QIcon* self) {
    self->detach();
}

long long QIcon_CacheKey(const QIcon* self) {
    return static_cast<long long>(self->cacheKey());
}

void QIcon_AddPixmap(QIcon* self, const QPixmap* pixmap) {
    self->addPixmap(*pixmap);
}

void QIcon_AddFile(QIcon* self, const libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->addFile(fileName_QString);
}

libqt_list /* of QSize* */ QIcon_AvailableSizes(const QIcon* self) {
    QList<QSize> _ret = self->availableSizes();
    // Convert QList<> from C++ memory to manually-managed C memory
    QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSize(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QIcon_SetIsMask(QIcon* self, bool isMask) {
    self->setIsMask(isMask);
}

bool QIcon_IsMask(const QIcon* self) {
    return self->isMask();
}

QIcon* QIcon_FromTheme(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QIcon(QIcon::fromTheme(name_QString));
}

QIcon* QIcon_FromTheme2(const libqt_string name, const QIcon* fallback) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QIcon(QIcon::fromTheme(name_QString, *fallback));
}

bool QIcon_HasThemeIcon(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return QIcon::hasThemeIcon(name_QString);
}

QIcon* QIcon_FromTheme3(int icon) {
    return new QIcon(QIcon::fromTheme(static_cast<QIcon::ThemeIcon>(icon)));
}

QIcon* QIcon_FromTheme4(int icon, const QIcon* fallback) {
    return new QIcon(QIcon::fromTheme(static_cast<QIcon::ThemeIcon>(icon), *fallback));
}

bool QIcon_HasThemeIcon2(int icon) {
    return QIcon::hasThemeIcon(static_cast<QIcon::ThemeIcon>(icon));
}

libqt_list /* of libqt_string */ QIcon_ThemeSearchPaths() {
    QList<QString> _ret = QIcon::themeSearchPaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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

void QIcon_SetThemeSearchPaths(const libqt_list /* of libqt_string */ searchpath) {
    QList<QString> searchpath_QList;
    searchpath_QList.reserve(searchpath.len);
    libqt_string* searchpath_arr = static_cast<libqt_string*>(searchpath.data);
    for (size_t i = 0; i < searchpath.len; ++i) {
        QString searchpath_arr_i_QString = QString::fromUtf8(searchpath_arr[i].data, searchpath_arr[i].len);
        searchpath_QList.push_back(searchpath_arr_i_QString);
    }
    QIcon::setThemeSearchPaths(searchpath_QList);
}

libqt_list /* of libqt_string */ QIcon_FallbackSearchPaths() {
    QList<QString> _ret = QIcon::fallbackSearchPaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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

void QIcon_SetFallbackSearchPaths(const libqt_list /* of libqt_string */ paths) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    QIcon::setFallbackSearchPaths(paths_QList);
}

libqt_string QIcon_ThemeName() {
    QString _ret = QIcon::themeName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QIcon_SetThemeName(const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QIcon::setThemeName(path_QString);
}

libqt_string QIcon_FallbackThemeName() {
    QString _ret = QIcon::fallbackThemeName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QIcon_SetFallbackThemeName(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QIcon::setFallbackThemeName(name_QString);
}

QPixmap* QIcon_Pixmap22(const QIcon* self, const QSize* size, int mode) {
    return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_Pixmap32(const QIcon* self, const QSize* size, int mode, int state) {
    return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_Pixmap33(const QIcon* self, int w, int h, int mode) {
    return new QPixmap(self->pixmap(static_cast<int>(w), static_cast<int>(h), static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_Pixmap42(const QIcon* self, int w, int h, int mode, int state) {
    return new QPixmap(self->pixmap(static_cast<int>(w), static_cast<int>(h), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_Pixmap23(const QIcon* self, int extent, int mode) {
    return new QPixmap(self->pixmap(static_cast<int>(extent), static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_Pixmap34(const QIcon* self, int extent, int mode, int state) {
    return new QPixmap(self->pixmap(static_cast<int>(extent), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_Pixmap35(const QIcon* self, const QSize* size, double devicePixelRatio, int mode) {
    return new QPixmap(self->pixmap(*size, static_cast<qreal>(devicePixelRatio), static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_Pixmap43(const QIcon* self, const QSize* size, double devicePixelRatio, int mode, int state) {
    return new QPixmap(self->pixmap(*size, static_cast<qreal>(devicePixelRatio), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIcon_Pixmap36(const QIcon* self, QWindow* window, const QSize* size, int mode) {
    return new QPixmap(self->pixmap(window, *size, static_cast<QIcon::Mode>(mode)));
}

QPixmap* QIcon_Pixmap44(const QIcon* self, QWindow* window, const QSize* size, int mode, int state) {
    return new QPixmap(self->pixmap(window, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QSize* QIcon_ActualSize22(const QIcon* self, const QSize* size, int mode) {
    return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode)));
}

QSize* QIcon_ActualSize3(const QIcon* self, const QSize* size, int mode, int state) {
    return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QSize* QIcon_ActualSize32(const QIcon* self, QWindow* window, const QSize* size, int mode) {
    return new QSize(self->actualSize(window, *size, static_cast<QIcon::Mode>(mode)));
}

QSize* QIcon_ActualSize4(const QIcon* self, QWindow* window, const QSize* size, int mode, int state) {
    return new QSize(self->actualSize(window, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

void QIcon_Paint3(const QIcon* self, QPainter* painter, const QRect* rect, int alignment) {
    self->paint(painter, *rect, static_cast<Qt::Alignment>(alignment));
}

void QIcon_Paint4(const QIcon* self, QPainter* painter, const QRect* rect, int alignment, int mode) {
    self->paint(painter, *rect, static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode));
}

void QIcon_Paint5(const QIcon* self, QPainter* painter, const QRect* rect, int alignment, int mode, int state) {
    self->paint(painter, *rect, static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_Paint6(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment) {
    self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::Alignment>(alignment));
}

void QIcon_Paint7(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode) {
    self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode));
}

void QIcon_Paint8(const QIcon* self, QPainter* painter, int x, int y, int w, int h, int alignment, int mode, int state) {
    self->paint(painter, static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h), static_cast<Qt::Alignment>(alignment), static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_AddPixmap2(QIcon* self, const QPixmap* pixmap, int mode) {
    self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode));
}

void QIcon_AddPixmap3(QIcon* self, const QPixmap* pixmap, int mode, int state) {
    self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIcon_AddFile2(QIcon* self, const libqt_string fileName, const QSize* size) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->addFile(fileName_QString, *size);
}

void QIcon_AddFile3(QIcon* self, const libqt_string fileName, const QSize* size, int mode) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode));
}

void QIcon_AddFile4(QIcon* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

libqt_list /* of QSize* */ QIcon_AvailableSizes1(const QIcon* self, int mode) {
    QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode));
    // Convert QList<> from C++ memory to manually-managed C memory
    QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSize(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QSize* */ QIcon_AvailableSizes2(const QIcon* self, int mode, int state) {
    QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    // Convert QList<> from C++ memory to manually-managed C memory
    QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSize(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QIcon_Delete(QIcon* self) {
    delete self;
}
