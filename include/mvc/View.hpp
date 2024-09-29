#pragma once

#include <memory>

#include "IController.hpp"
#include "IView.hpp"

class View : public IView {
 public:
  void add_listner(std::shared_ptr<IController> controller) override;
  void showObject() override;
  void addObject() override;
  void createDocument() override;
  void exportDocument() override;
  void importDocument() override;

 private:
  std::shared_ptr<IController> m_controller;
};