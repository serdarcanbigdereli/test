#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));//horizonalslider değerlerini progresbar a bağlar aynı değerleri progresbarda görrürüz.
    connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)),ui->spinBox, SLOT(setValue(int)));//horizonal2 ile spinbax değerleri eşitlenir

    connect(ui->spinBox, SIGNAL(valueChanged(int)),ui->horizontalSlider_2, SLOT(setValue(int)));//spinbox ile horizinal değerleri eşlenir

    // connect(ui->spinBox, SIGNAL(valueChanged(int)),ui->horizontalSlider, SLOT(setValue(int))); burada hepsi birbirine bağlarız :D
    // disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));//horizonalslider progresbar a bağlantısını keseriz.
}

MainWindow::~MainWindow()
{
    delete ui;
}
