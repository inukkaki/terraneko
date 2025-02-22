#ifndef TERRANEKO_META_MODAL_H_
#define TERRANEKO_META_MODAL_H_

namespace terraneko::meta::modal {

void ShowErrorMessage(const char* title, const char* message);
void ShowErrorMessage(
    const char* title, const char* message, const char* quotation);

}  // namespace terraneko::meta::modal

#endif  // TERRANEKO_META_MODAL_H_
