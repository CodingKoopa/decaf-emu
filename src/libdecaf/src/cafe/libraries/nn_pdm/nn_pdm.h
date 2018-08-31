#pragma once
#include "cafe/libraries/cafe_hle_library.h"

namespace cafe::nn::pdm
{

class Library : public hle::Library
{
public:
   Library() :
      hle::Library(hle::LibraryId::nn_pdm, "nn_pdm.rpl")
   {
   }

protected:
   virtual void registerSymbols() override;

private:
};

} // namespace cafe::nn::pdm