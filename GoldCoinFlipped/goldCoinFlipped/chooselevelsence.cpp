#include "chooselevelsence.h"
#include "ui_chooselevelsence.h"

ChooseLevelSence::ChooseLevelSence(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChooseLevelSence)
{
    ui->setupUi(this);
}

ChooseLevelSence::~ChooseLevelSence()
{
    delete ui;
}