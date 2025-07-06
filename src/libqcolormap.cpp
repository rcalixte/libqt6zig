#include <QColor>
#include <QColormap>
#include <QList>
#include <qcolormap.h>
#include "libqcolormap.h"
#include "libqcolormap.hxx"

QColormap* QColormap_new(const QColormap* colormap) {
    return new QColormap(*colormap);
}

void QColormap_Initialize() {
    QColormap::initialize();
}

void QColormap_Cleanup() {
    QColormap::cleanup();
}

QColormap* QColormap_Instance() {
    return new QColormap(QColormap::instance());
}

void QColormap_OperatorAssign(QColormap* self, const QColormap* colormap) {
    self->operator=(*colormap);
}

int QColormap_Mode(const QColormap* self) {
    return static_cast<int>(self->mode());
}

int QColormap_Depth(const QColormap* self) {
    return self->depth();
}

int QColormap_Size(const QColormap* self) {
    return self->size();
}

unsigned int QColormap_Pixel(const QColormap* self, const QColor* color) {
    return static_cast<unsigned int>(self->pixel(*color));
}

QColor* QColormap_ColorAt(const QColormap* self, unsigned int pixel) {
    return new QColor(self->colorAt(static_cast<uint>(pixel)));
}

libqt_list /* of QColor* */ QColormap_Colormap(const QColormap* self) {
    const QList<QColor> _ret = self->colormap();
    // Convert const QList<> from C++ memory to manually-managed C memory
    QColor** _arr = static_cast<QColor**>(malloc(sizeof(QColor*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QColor(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QColormap* QColormap_Instance1(int screen) {
    return new QColormap(QColormap::instance(static_cast<int>(screen)));
}

void QColormap_Delete(QColormap* self) {
    delete self;
}
