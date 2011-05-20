#include "apropos.h"


//! Construtor of About window (this is a widget).
Apropos::Apropos(QWidget *parent) :
    QWidget(parent)
{
    QVBoxLayout *layoutAbout = new QVBoxLayout;




    txte1 = new QLabel;
    txte1->setAlignment(Qt::AlignCenter);
    QLabel *IconLabel = new QLabel;
    IconLabel->setAlignment(Qt::AlignCenter);

    QPixmap iconPixmap(":/images/iconApp.png");

    IconLabel->setPixmap(iconPixmap);

    QPixmap monPixmap(":/images/gplv3-88x31.png");



    aideButton = new QPushButton(tr("show Help"));
    closeButton = new QPushButton(tr("&Close"));
    closeButton->setShortcut(tr("Esc"));
    gplLabel = new QLabel;
    gplLabel->setPixmap(monPixmap);
    gplLabel->setAlignment(Qt::AlignCenter);

    txte1->setText(tr("zNavigator 1.0 by David Remacle\n\nThis program is under Licence GPL 3.0\n\nVersion 0.0.1"));

    layoutAbout->addWidget(IconLabel);
    layoutAbout->addWidget(txte1);
    layoutAbout->addWidget(gplLabel);
    layoutAbout->addWidget(closeButton);

    setWindowTitle(tr("About ZNavigator"));


    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));


    setLayout(layoutAbout);
}