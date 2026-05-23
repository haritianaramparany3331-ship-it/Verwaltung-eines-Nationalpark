#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Wildtier- & Personalverwaltung");
    this->setStyleSheet(R"(
QWidget {
    background-color: #F4F7F2;
    color: #1E1E1E;
    font-family: Arial;
    font-size: 12px;
}

QLabel {
    color: #1E1E1E;
    font-weight: 500;
}

QLineEdit {
    background-color: white;
    border: 1px solid #C9D1C8;
    border-radius: 6px;
    padding: 6px;
    selection-background-color: #7BAE7F;
}

QLineEdit:focus {
    border: 2px solid #2F5D50;
    background-color: #FFFFFF;
}

QPushButton {
    background-color: #2F5D50;
    color: white;
    border: none;
    border-radius: 8px;
    padding: 6px 12px;
    font-weight: 600;
}

QPushButton:hover {
    background-color: #3F6F60;
}

QPushButton:pressed {
    background-color: #24463D;
}

/* =========================
   🟡 SECONDARY BUTTON STYLE
   (optional class usage)
========================= */

QPushButton[secondary="true"] {
    background-color: transparent;
    color: #2F5D50;
    border: 2px solid #2F5D50;
}

QPushButton[secondary="true"]:hover {
    background-color: #E7F0EA;
}

/* =========================
   🔴 DANGER BUTTON (DELETE)
========================= */

QPushButton[danger="true"] {
    background-color: #C0392B;
    color: white;
}

QPushButton[danger="true"]:hover {
    background-color: #A93226;
}

/* =========================
   📋 LIST VIEW
========================= */

QListView {
    background-color: white;
    border: 1px solid #C9D1C8;
    border-radius: 8px;
    padding: 4px;
    outline: none;
}

QListView::item {
    padding: 6px;
    border-radius: 4px;
}

QListView::item:selected {
    background-color: #7BAE7F;
    color: white;
}

QListView::item:hover {
    background-color: #E7F0EA;
}

/* =========================
   📦 GROUP BOX
========================= */

QGroupBox {
    border: 1px solid #C9D1C8;
    border-radius: 10px;
    margin-top: 10px;
    padding: 10px;
    font-weight: bold;
    color: #2F5D50;
    background-color: #F9FBF8;
}

QGroupBox::title {
    subcontrol-origin: margin;
    left: 10px;
    padding: 0 5px 0 5px;
}

/* =========================
   📏 SCROLLBAR (CLEAN LOOK)
========================= */

QScrollBar:vertical {
    background: #F4F7F2;
    width: 10px;
    border-radius: 5px;
}

QScrollBar::handle:vertical {
    background: #7BAE7F;
    border-radius: 5px;
}

QScrollBar::handle:vertical:hover {
    background: #2F5D50;
}

)");
}

MainWindow::~MainWindow()
{
    delete ui;
}
