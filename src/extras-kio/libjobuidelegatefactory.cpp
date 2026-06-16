#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegateFactory
#include <KJobUiDelegate>
#include <QWidget>
#include <jobuidelegatefactory.h>
#include "libjobuidelegatefactory.h"
#include "libjobuidelegatefactory.hxx"

KJobUiDelegate* KIO__JobUiDelegateFactory_CreateDelegate(const KIO__JobUiDelegateFactory* self) {
    return self->createDelegate();
}

KJobUiDelegate* KIO__JobUiDelegateFactory_CreateDelegate2(const KIO__JobUiDelegateFactory* self, int flags, QWidget* window) {
    return self->createDelegate(static_cast<KJobUiDelegate::Flags>(flags), window);
}

KJobUiDelegate* KIO_CreateDefaultJobUiDelegate() {
    return KIO::createDefaultJobUiDelegate();
}

KJobUiDelegate* KIO_CreateDefaultJobUiDelegate2(int flags, QWidget* window) {
    return KIO::createDefaultJobUiDelegate(static_cast<KJobUiDelegate::Flags>(flags), window);
}

KIO__JobUiDelegateFactory* KIO_DefaultJobUiDelegateFactory() {
    return KIO::defaultJobUiDelegateFactory();
}

void KIO_SetDefaultJobUiDelegateFactory(KIO__JobUiDelegateFactory* factory) {
    KIO::setDefaultJobUiDelegateFactory(factory);
}
