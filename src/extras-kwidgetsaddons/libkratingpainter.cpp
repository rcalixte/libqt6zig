#include <KRatingPainter>
#include <QIcon>
#include <QPainter>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <kratingpainter.h>
#include "libkratingpainter.h"
#include "libkratingpainter.hxx"

KRatingPainter* KRatingPainter_new() {
    return new KRatingPainter();
}

int KRatingPainter_MaxRating(const KRatingPainter* self) {
    return self->maxRating();
}

bool KRatingPainter_HalfStepsEnabled(const KRatingPainter* self) {
    return self->halfStepsEnabled();
}

int KRatingPainter_Alignment(const KRatingPainter* self) {
    return static_cast<int>(self->alignment());
}

int KRatingPainter_LayoutDirection(const KRatingPainter* self) {
    return static_cast<int>(self->layoutDirection());
}

QIcon* KRatingPainter_Icon(const KRatingPainter* self) {
    return new QIcon(self->icon());
}

bool KRatingPainter_IsEnabled(const KRatingPainter* self) {
    return self->isEnabled();
}

QPixmap* KRatingPainter_CustomPixmap(const KRatingPainter* self) {
    return new QPixmap(self->customPixmap());
}

int KRatingPainter_Spacing(const KRatingPainter* self) {
    return self->spacing();
}

void KRatingPainter_SetMaxRating(KRatingPainter* self, int max) {
    self->setMaxRating(static_cast<int>(max));
}

void KRatingPainter_SetHalfStepsEnabled(KRatingPainter* self, bool enabled) {
    self->setHalfStepsEnabled(enabled);
}

void KRatingPainter_SetAlignment(KRatingPainter* self, int alignVal) {
    self->setAlignment(static_cast<Qt::Alignment>(alignVal));
}

void KRatingPainter_SetLayoutDirection(KRatingPainter* self, int direction) {
    self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void KRatingPainter_SetIcon(KRatingPainter* self, const QIcon* icon) {
    self->setIcon(*icon);
}

void KRatingPainter_SetEnabled(KRatingPainter* self, bool enabled) {
    self->setEnabled(enabled);
}

void KRatingPainter_SetCustomPixmap(KRatingPainter* self, const QPixmap* pixmap) {
    self->setCustomPixmap(*pixmap);
}

void KRatingPainter_SetSpacing(KRatingPainter* self, int spacing) {
    self->setSpacing(static_cast<int>(spacing));
}

void KRatingPainter_Paint(const KRatingPainter* self, QPainter* painter, const QRect* rect, int rating) {
    self->paint(painter, *rect, static_cast<int>(rating));
}

int KRatingPainter_RatingFromPosition(const KRatingPainter* self, const QRect* rect, const QPoint* pos) {
    return self->ratingFromPosition(*rect, *pos);
}

void KRatingPainter_PaintRating(QPainter* p, const QRect* rect, int alignVal, int rating) {
    KRatingPainter::paintRating(p, *rect, static_cast<Qt::Alignment>(alignVal), static_cast<int>(rating));
}

int KRatingPainter_GetRatingFromPosition(const QRect* rect, int alignVal, int direction, const QPoint* pos) {
    return KRatingPainter::getRatingFromPosition(*rect, static_cast<Qt::Alignment>(alignVal), static_cast<Qt::LayoutDirection>(direction), *pos);
}

void KRatingPainter_Paint4(const KRatingPainter* self, QPainter* painter, const QRect* rect, int rating, int hoverRating) {
    self->paint(painter, *rect, static_cast<int>(rating), static_cast<int>(hoverRating));
}

void KRatingPainter_PaintRating5(QPainter* p, const QRect* rect, int alignVal, int rating, int hoverRating) {
    KRatingPainter::paintRating(p, *rect, static_cast<Qt::Alignment>(alignVal), static_cast<int>(rating), static_cast<int>(hoverRating));
}

void KRatingPainter_Delete(KRatingPainter* self) {
    delete self;
}
