#define WORKAROUND_INNER_CLASS_DEFINITION_KFileMetaData__EmbeddedImageData
#include <embeddedimagedata.h>
#include "libembeddedimagedata.h"
#include "libembeddedimagedata.hxx"

KFileMetaData__EmbeddedImageData* KFileMetaData__EmbeddedImageData_new() {
    return new KFileMetaData::EmbeddedImageData();
}

void KFileMetaData__EmbeddedImageData_Delete(KFileMetaData__EmbeddedImageData* self) {
    delete self;
}
