#include "ClientRectBinding.h"
#include "nsScriptNameSpaceManager.h"

namespace mozilla {
namespace dom {
void
Register(nsScriptNameSpaceManager* aNameSpaceManager)
{

#define REGISTER_PROTO(_dom_class, _pref_check) \
  aNameSpaceManager->RegisterDefineDOMInterface(NS_LITERAL_STRING(#_dom_class), _dom_class##Binding::DefineDOMInterface, _pref_check);

REGISTER_PROTO(ClientRect, nullptr);

#undef REGISTER_PROTO
}

} // namespace dom
} // namespace mozilla
