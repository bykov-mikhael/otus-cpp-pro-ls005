#pragma once

#include "IModel.hpp"

class Model : public IModel {
 public:
  void createDocument() override;
  void exportDocument() override;
  void importDocument() override;
};