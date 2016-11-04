#include "my_dialog.h"

#include <cassert>
#include <fstream>
#include <QTimer>
#include <QSvgWidget>

#include "ui_my_dialog.h"

my_dialog::my_dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::my_dialog)
{
  ui->setupUi(this);

  //Create an SVG
  {
    std::ofstream f("my.svg");
    f
      << "<svg width = \"100\" height = \"100\">"
      << "  <line x1 = \"10\" y1 = \"20\" x2 = \"80\" y2 = \"90\" height = \"100\" style=\"stroke:black;stroke-width:2\" />"
      << "</svg>"
    ;
  }
  //
  {

    QSvgWidget * const widget{new QSvgWidget(this)};

    assert(this->layout());
    this->layout()->addWidget(widget);
    widget->load(QString("my.svg"));
  }
  //Create a QTimer in Qt5 style that closes the dialog after a short time
  {
    QTimer * const timer(new QTimer(this));
    connect(
      timer,
      &QTimer::timeout,
      this,
      &my_dialog::close
    );
    timer->setInterval(10000);
    timer->start();
  }
}

my_dialog::~my_dialog() noexcept
{
  delete ui;
}
