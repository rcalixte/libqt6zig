#define WORKAROUND_INNER_CLASS_DEFINITION_LayerShellQt__Shell
#include <shell.h>
#include "libshell.h"
#include "libshell.hxx"

LayerShellQt__Shell* LayerShellQt__Shell_new(const LayerShellQt__Shell* other) {
    return new LayerShellQt::Shell(*other);
}

LayerShellQt__Shell* LayerShellQt__Shell_new2(LayerShellQt__Shell* other) {
    return new LayerShellQt::Shell(std::move(*other));
}

void LayerShellQt__Shell_CopyAssign(LayerShellQt__Shell* self, LayerShellQt__Shell* other) {
    *self = *other;
}

void LayerShellQt__Shell_MoveAssign(LayerShellQt__Shell* self, LayerShellQt__Shell* other) {
    *self = std::move(*other);
}

void LayerShellQt__Shell_UseLayerShell() {
    LayerShellQt::Shell::useLayerShell();
}

void LayerShellQt__Shell_Delete(LayerShellQt__Shell* self) {
    delete self;
}
