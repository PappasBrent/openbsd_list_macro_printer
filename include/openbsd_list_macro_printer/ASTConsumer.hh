#pragma once

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/ASTContext.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Lex/PPCallbacks.h"

namespace openbsd_list_macro_printer {

class ASTConsumer : public clang::ASTConsumer {
public:
  clang::PPCallbacks *PPC;

  explicit ASTConsumer(clang::CompilerInstance &CI);

  void HandleTranslationUnit(clang::ASTContext &Ctx) override;
};

} // namespace openbsd_list_macro_printer