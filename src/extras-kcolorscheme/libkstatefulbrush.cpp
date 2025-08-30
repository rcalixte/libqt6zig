#include <KStatefulBrush>
#include <QBrush>
#include <QPalette>
#include <kstatefulbrush.h>
#include "libkstatefulbrush.h"
#include "libkstatefulbrush.hxx"

KStatefulBrush* KStatefulBrush_new() {
    return new KStatefulBrush();
}

KStatefulBrush* KStatefulBrush_new2(int param1, int param2) {
    return new KStatefulBrush(static_cast<KColorScheme::ColorSet>(param1), static_cast<KColorScheme::ForegroundRole>(param2));
}

KStatefulBrush* KStatefulBrush_new3(int param1, int param2) {
    return new KStatefulBrush(static_cast<KColorScheme::ColorSet>(param1), static_cast<KColorScheme::BackgroundRole>(param2));
}

KStatefulBrush* KStatefulBrush_new4(int param1, int param2) {
    return new KStatefulBrush(static_cast<KColorScheme::ColorSet>(param1), static_cast<KColorScheme::DecorationRole>(param2));
}

KStatefulBrush* KStatefulBrush_new5(const QBrush* param1) {
    return new KStatefulBrush(*param1);
}

KStatefulBrush* KStatefulBrush_new6(const QBrush* param1, const QBrush* background) {
    return new KStatefulBrush(*param1, *background);
}

KStatefulBrush* KStatefulBrush_new7(const KStatefulBrush* param1) {
    return new KStatefulBrush(*param1);
}

void KStatefulBrush_OperatorAssign(KStatefulBrush* self, const KStatefulBrush* param1) {
    self->operator=(*param1);
}

QBrush* KStatefulBrush_Brush(const KStatefulBrush* self, int param1) {
    return new QBrush(self->brush(static_cast<QPalette::ColorGroup>(param1)));
}

QBrush* KStatefulBrush_Brush2(const KStatefulBrush* self, const QPalette* param1) {
    return new QBrush(self->brush(*param1));
}

void KStatefulBrush_Delete(KStatefulBrush* self) {
    delete self;
}
