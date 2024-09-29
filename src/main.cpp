#include <Controller.hpp>
#include <IController.hpp>
#include <IModel.hpp>
#include <IView.hpp>
#include <Model.hpp>
#include <View.hpp>
#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<IView> view(new View());
  std::shared_ptr<IModel> model(new Model());
  std::shared_ptr<IController> controller(new Controller(model, view));

  view->add_listner(controller);

  view->createDocument();

  view->exportDocument();

  view->importDocument();

  view->addGraphObject();

  view->removeGraphObject();

  return EXIT_SUCCESS;
}