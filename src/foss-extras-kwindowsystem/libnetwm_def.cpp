#include <QPoint>
#include <QRect>
#include <QSize>
#include <netwm_def.h>
#include "libnetwm_def.h"
#include "libnetwm_def.hxx"

NETPoint* NETPoint_new(const NETPoint* other) {
    return new NETPoint(*other);
}

NETPoint* NETPoint_new2(NETPoint* other) {
    return new NETPoint(std::move(*other));
}

NETPoint* NETPoint_new3() {
    return new NETPoint();
}

NETPoint* NETPoint_new4(const QPoint* p) {
    return new NETPoint(*p);
}

NETPoint* NETPoint_new5(const NETPoint* param1) {
    return new NETPoint(*param1);
}

void NETPoint_CopyAssign(NETPoint* self, NETPoint* other) {
    *self = *other;
}

void NETPoint_MoveAssign(NETPoint* self, NETPoint* other) {
    *self = std::move(*other);
}

QPoint* NETPoint_ToPoint(const NETPoint* self) {
    return new QPoint(self->toPoint());
}

int NETPoint_X(const NETPoint* self) {
    return self->x;
}

void NETPoint_SetX(NETPoint* self, int x) {
    self->x = static_cast<int>(x);
}

int NETPoint_Y(const NETPoint* self) {
    return self->y;
}

void NETPoint_SetY(NETPoint* self, int y) {
    self->y = static_cast<int>(y);
}

void NETPoint_Delete(NETPoint* self) {
    delete self;
}

NETSize* NETSize_new(const NETSize* other) {
    return new NETSize(*other);
}

NETSize* NETSize_new2(NETSize* other) {
    return new NETSize(std::move(*other));
}

NETSize* NETSize_new3() {
    return new NETSize();
}

NETSize* NETSize_new4(const QSize* size) {
    return new NETSize(*size);
}

NETSize* NETSize_new5(const NETSize* param1) {
    return new NETSize(*param1);
}

void NETSize_CopyAssign(NETSize* self, NETSize* other) {
    *self = *other;
}

void NETSize_MoveAssign(NETSize* self, NETSize* other) {
    *self = std::move(*other);
}

QSize* NETSize_ToSize(const NETSize* self) {
    return new QSize(self->toSize());
}

int NETSize_Width(const NETSize* self) {
    return self->width;
}

void NETSize_SetWidth(NETSize* self, int width) {
    self->width = static_cast<int>(width);
}

int NETSize_Height(const NETSize* self) {
    return self->height;
}

void NETSize_SetHeight(NETSize* self, int height) {
    self->height = static_cast<int>(height);
}

void NETSize_Delete(NETSize* self) {
    delete self;
}

NETRect* NETRect_new(const NETRect* other) {
    return new NETRect(*other);
}

NETRect* NETRect_new2(NETRect* other) {
    return new NETRect(std::move(*other));
}

NETRect* NETRect_new3() {
    return new NETRect();
}

NETRect* NETRect_new4(const QRect* rect) {
    return new NETRect(*rect);
}

void NETRect_CopyAssign(NETRect* self, NETRect* other) {
    *self = *other;
}

void NETRect_MoveAssign(NETRect* self, NETRect* other) {
    *self = std::move(*other);
}

QRect* NETRect_ToRect(const NETRect* self) {
    return new QRect(self->toRect());
}

NETPoint* NETRect_Pos(const NETRect* self) {
    return new NETPoint(self->pos);
}

void NETRect_SetPos(NETRect* self, NETPoint* pos) {
    self->pos = *pos;
}

NETSize* NETRect_Size(const NETRect* self) {
    return new NETSize(self->size);
}

void NETRect_SetSize(NETRect* self, NETSize* size) {
    self->size = *size;
}

void NETRect_Delete(NETRect* self) {
    delete self;
}

NETIcon* NETIcon_new(const NETIcon* other) {
    return new NETIcon(*other);
}

NETIcon* NETIcon_new2(NETIcon* other) {
    return new NETIcon(std::move(*other));
}

NETIcon* NETIcon_new3() {
    return new NETIcon();
}

void NETIcon_CopyAssign(NETIcon* self, NETIcon* other) {
    *self = *other;
}

void NETIcon_MoveAssign(NETIcon* self, NETIcon* other) {
    *self = std::move(*other);
}

NETSize* NETIcon_Size(const NETIcon* self) {
    return new NETSize(self->size);
}

void NETIcon_SetSize(NETIcon* self, NETSize* size) {
    self->size = *size;
}

unsigned char* NETIcon_Data(const NETIcon* self) {
    return self->data;
}

void NETIcon_SetData(NETIcon* self, unsigned char* data) {
    self->data = static_cast<unsigned char*>(data);
}

void NETIcon_Delete(NETIcon* self) {
    delete self;
}

NETExtendedStrut* NETExtendedStrut_new(const NETExtendedStrut* other) {
    return new NETExtendedStrut(*other);
}

NETExtendedStrut* NETExtendedStrut_new2(NETExtendedStrut* other) {
    return new NETExtendedStrut(std::move(*other));
}

NETExtendedStrut* NETExtendedStrut_new3() {
    return new NETExtendedStrut();
}

void NETExtendedStrut_CopyAssign(NETExtendedStrut* self, NETExtendedStrut* other) {
    *self = *other;
}

void NETExtendedStrut_MoveAssign(NETExtendedStrut* self, NETExtendedStrut* other) {
    *self = std::move(*other);
}

int NETExtendedStrut_LeftWidth(const NETExtendedStrut* self) {
    return self->left_width;
}

void NETExtendedStrut_SetLeftWidth(NETExtendedStrut* self, int left_width) {
    self->left_width = static_cast<int>(left_width);
}

int NETExtendedStrut_LeftStart(const NETExtendedStrut* self) {
    return self->left_start;
}

void NETExtendedStrut_SetLeftStart(NETExtendedStrut* self, int left_start) {
    self->left_start = static_cast<int>(left_start);
}

int NETExtendedStrut_LeftEnd(const NETExtendedStrut* self) {
    return self->left_end;
}

void NETExtendedStrut_SetLeftEnd(NETExtendedStrut* self, int left_end) {
    self->left_end = static_cast<int>(left_end);
}

int NETExtendedStrut_RightWidth(const NETExtendedStrut* self) {
    return self->right_width;
}

void NETExtendedStrut_SetRightWidth(NETExtendedStrut* self, int right_width) {
    self->right_width = static_cast<int>(right_width);
}

int NETExtendedStrut_RightStart(const NETExtendedStrut* self) {
    return self->right_start;
}

void NETExtendedStrut_SetRightStart(NETExtendedStrut* self, int right_start) {
    self->right_start = static_cast<int>(right_start);
}

int NETExtendedStrut_RightEnd(const NETExtendedStrut* self) {
    return self->right_end;
}

void NETExtendedStrut_SetRightEnd(NETExtendedStrut* self, int right_end) {
    self->right_end = static_cast<int>(right_end);
}

int NETExtendedStrut_TopWidth(const NETExtendedStrut* self) {
    return self->top_width;
}

void NETExtendedStrut_SetTopWidth(NETExtendedStrut* self, int top_width) {
    self->top_width = static_cast<int>(top_width);
}

int NETExtendedStrut_TopStart(const NETExtendedStrut* self) {
    return self->top_start;
}

void NETExtendedStrut_SetTopStart(NETExtendedStrut* self, int top_start) {
    self->top_start = static_cast<int>(top_start);
}

int NETExtendedStrut_TopEnd(const NETExtendedStrut* self) {
    return self->top_end;
}

void NETExtendedStrut_SetTopEnd(NETExtendedStrut* self, int top_end) {
    self->top_end = static_cast<int>(top_end);
}

int NETExtendedStrut_BottomWidth(const NETExtendedStrut* self) {
    return self->bottom_width;
}

void NETExtendedStrut_SetBottomWidth(NETExtendedStrut* self, int bottom_width) {
    self->bottom_width = static_cast<int>(bottom_width);
}

int NETExtendedStrut_BottomStart(const NETExtendedStrut* self) {
    return self->bottom_start;
}

void NETExtendedStrut_SetBottomStart(NETExtendedStrut* self, int bottom_start) {
    self->bottom_start = static_cast<int>(bottom_start);
}

int NETExtendedStrut_BottomEnd(const NETExtendedStrut* self) {
    return self->bottom_end;
}

void NETExtendedStrut_SetBottomEnd(NETExtendedStrut* self, int bottom_end) {
    self->bottom_end = static_cast<int>(bottom_end);
}

void NETExtendedStrut_Delete(NETExtendedStrut* self) {
    delete self;
}

NETStrut* NETStrut_new(const NETStrut* other) {
    return new NETStrut(*other);
}

NETStrut* NETStrut_new2(NETStrut* other) {
    return new NETStrut(std::move(*other));
}

NETStrut* NETStrut_new3() {
    return new NETStrut();
}

void NETStrut_CopyAssign(NETStrut* self, NETStrut* other) {
    *self = *other;
}

void NETStrut_MoveAssign(NETStrut* self, NETStrut* other) {
    *self = std::move(*other);
}

int NETStrut_Left(const NETStrut* self) {
    return self->left;
}

void NETStrut_SetLeft(NETStrut* self, int left) {
    self->left = static_cast<int>(left);
}

int NETStrut_Right(const NETStrut* self) {
    return self->right;
}

void NETStrut_SetRight(NETStrut* self, int right) {
    self->right = static_cast<int>(right);
}

int NETStrut_Top(const NETStrut* self) {
    return self->top;
}

void NETStrut_SetTop(NETStrut* self, int top) {
    self->top = static_cast<int>(top);
}

int NETStrut_Bottom(const NETStrut* self) {
    return self->bottom;
}

void NETStrut_SetBottom(NETStrut* self, int bottom) {
    self->bottom = static_cast<int>(bottom);
}

void NETStrut_Delete(NETStrut* self) {
    delete self;
}

NETFullscreenMonitors* NETFullscreenMonitors_new(const NETFullscreenMonitors* other) {
    return new NETFullscreenMonitors(*other);
}

NETFullscreenMonitors* NETFullscreenMonitors_new2(NETFullscreenMonitors* other) {
    return new NETFullscreenMonitors(std::move(*other));
}

NETFullscreenMonitors* NETFullscreenMonitors_new3() {
    return new NETFullscreenMonitors();
}

void NETFullscreenMonitors_CopyAssign(NETFullscreenMonitors* self, NETFullscreenMonitors* other) {
    *self = *other;
}

void NETFullscreenMonitors_MoveAssign(NETFullscreenMonitors* self, NETFullscreenMonitors* other) {
    *self = std::move(*other);
}

int NETFullscreenMonitors_Top(const NETFullscreenMonitors* self) {
    return self->top;
}

void NETFullscreenMonitors_SetTop(NETFullscreenMonitors* self, int top) {
    self->top = static_cast<int>(top);
}

int NETFullscreenMonitors_Bottom(const NETFullscreenMonitors* self) {
    return self->bottom;
}

void NETFullscreenMonitors_SetBottom(NETFullscreenMonitors* self, int bottom) {
    self->bottom = static_cast<int>(bottom);
}

int NETFullscreenMonitors_Left(const NETFullscreenMonitors* self) {
    return self->left;
}

void NETFullscreenMonitors_SetLeft(NETFullscreenMonitors* self, int left) {
    self->left = static_cast<int>(left);
}

int NETFullscreenMonitors_Right(const NETFullscreenMonitors* self) {
    return self->right;
}

void NETFullscreenMonitors_SetRight(NETFullscreenMonitors* self, int right) {
    self->right = static_cast<int>(right);
}

bool NETFullscreenMonitors_IsSet(const NETFullscreenMonitors* self) {
    return self->isSet();
}

void NETFullscreenMonitors_Delete(NETFullscreenMonitors* self) {
    delete self;
}

NET* NET_new(const NET* other) {
    return new NET(*other);
}

NET* NET_new2(NET* other) {
    return new NET(std::move(*other));
}

void NET_CopyAssign(NET* self, NET* other) {
    *self = *other;
}

void NET_MoveAssign(NET* self, NET* other) {
    *self = std::move(*other);
}

int NET_TimestampCompare(unsigned long time1, unsigned long time2) {
    return NET::timestampCompare(static_cast<unsigned long>(time1), static_cast<unsigned long>(time2));
}

int NET_TimestampDiff(unsigned long time1, unsigned long time2) {
    return NET::timestampDiff(static_cast<unsigned long>(time1), static_cast<unsigned long>(time2));
}

void NET_Delete(NET* self) {
    delete self;
}
